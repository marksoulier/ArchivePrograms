# Calculate the average change in percentage in each trade
#input directary


import sys
import csv
import locale
import os
from decimal import *

getcontext().prec = 4
total_Sell = 0
total_percent_change = 0
overall_total_percent_change = 0
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
               x = float(x.replace('$', ''))
               percent_change = ((x + PL/100) - x)/(x)*100
               total_percent_change += percent_change
       Average_percent_change = total_percent_change/total_Sell
       # locate = file.find(_)
       # file = file [0:locate]
       file = file[16:]
       locate = file.find("_")
       file = file[0:locate]
       Files_Per.update({file: round(percent_change, 1)})
       #percent change = (price + PL/100)-price)/price*100
   overall_total_percent_change += percent_change
   overall_total += total_Sell

print ("Total trades:", overall_total)
print ("Total percent increase:", round(overall_total_percent_change))
Average_Percent = Decimal(overall_total_percent_change) / Decimal(overall_total)
print ("Average percent per trade:", Average_Percent, '%')

#put dictionary of Files_Per in to Files_Per1.csv file
os.chdir(str(r'C:\Users\48941.FRH179290\Desktop\SWIM2\Strat_' + str(i) + '_output'))
with open('Average_percent_Stat.csv', 'w') as f:
    writer = csv.DictWriter(
        f, fieldnames=["company", "amount"])
    writer.writeheader()
    for key in Files_Per.keys():
        f.write("%s,%s\n"%(key,Files_Per[key]))