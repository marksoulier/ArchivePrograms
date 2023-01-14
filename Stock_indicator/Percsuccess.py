# Calulate the percent of successful trades to total trades that occurred
#input directary
# output percent success and dictionary of each company and percent success

import sys
import csv
import locale
import os
from decimal import *

getcontext().prec = 4
total_Sell = 0
total_Sell_Pos = 0
overall_total_P = 0 
overall_total = 0

Files_Per = {}

#open up directary and put list of files into it
print ("Opening: ", y)
List_of_files = os.listdir(y)

for file in List_of_files:
   Nfile = y + str(file)
   total_Sell = 0
   total_Sell_Pos = 0
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

               if(PL > 0):
                   #count up only the positive Trade P/L
                   total_Sell_Pos += 1

       Single_Percent = total_Sell_Pos / total_Sell * 100
       file = file[16:]
       # locate = file.find(_)
       # file = file [0:locate]
       Files_Per.update({file : round(Single_Percent,1)})
   overall_total_P += total_Sell_Pos
   overall_total += total_Sell

print ("Sell to Close:", overall_total)
print ("Sell to Close positive:", overall_total_P)
percent_Pos = Decimal(overall_total_P) / Decimal(overall_total) * 100
print ("Sell to Close percent:", percent_Pos, "%")

#put dictionary of Files_Per in to Files_Per1.csv file
os.chdir(f"Strat_{i}_output")
with open('Persuccess.csv', 'w') as f:
    writer = csv.DictWriter(
        f, fieldnames=["company", "amount"])
    writer.writeheader()
    for key in Files_Per.keys():
        f.write("%s,%s\n"%(key,Files_Per[key]))
