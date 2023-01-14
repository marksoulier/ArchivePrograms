# Calculate the average amount made by all trades in a file
#input directary
# output average money made and dictionary of each company and average money made


import sys
import csv
import locale
import os
from decimal import *

getcontext().prec = 4
total_Sell = 0
total_Sell_Money = 0
overall_total_Money = 0 
overall_total = 0

Files_Per = {}

#open up directary and put list of files into it
print ("Opening: ", y)
List_of_files = os.listdir(y)

for file in List_of_files:
   Nfile = y + str(file)
   total_Sell_Money = 0
   total_Sell = 0
   with open(Nfile) as f:
       #Open the file, use the CSV reader to parse it
       reader = csv.reader(f, delimiter=';')
       for row in reader:
           if(reader.line_num <= 5):
               #Skip the header lines
               continue

           if(len(row) == 0):
               #Stop at the end
               break

           if(row[2] == "Sell to Close"):
               #Only look at rows with Sell to Close
               total_Sell = total_Sell + 1

               #Convert the Trade P/L to a float
               dollarvalue = row[6]
               dollarvalue = dollarvalue.replace('(','-')
               dollarvalue = dollarvalue.replace('$','')
               dollarvalue = dollarvalue.replace(')','')
               dollarvalue = dollarvalue.replace(',','')
               PL = float(dollarvalue)
               x = row[4]
               x = x.replace('$', '')
               total_Sell_Money += PL*10/float(x)
               Average_Money = total_Sell_Money/total_Sell
               file = file[16:]
               locate = file.find("_")
               file = file[0:locate]
               Files_Per.update({file : round(Average_Money,1)})
   overall_total_Money += total_Sell_Money
   overall_total += total_Sell

print ("Sell to Close:", overall_total)
print ("Sell to Close positive:", overall_total_Money)
Average_Money = overall_total_Money / (overall_total + 1)
print ("Sell to Close percent:","$", Average_Money)

#put dictionary of Files_Per in to Files_Per1.csv file
l = os.getcwd()
print(l)
os.chdir(str(r'C:\Users\48941.FRH179290\Desktop\SWIM2\Strat_' + str(i) + '_output'))
print(os.getcwd())
with open('Average_money.csv', 'w') as f:
   writer = csv.DictWriter(
       f, fieldnames=["company", "amount"])
   writer.writeheader()
   for key in Files_Per.keys():
        f.write("%s,%s\n"%(key,Files_Per[key]))