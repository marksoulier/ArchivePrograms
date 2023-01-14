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
   file = file[16:]
   # locate = file.find(_)
   # file = file [0:locate]
   Day_per_total = total_Sell/15/12
   Files_Per.update({file : round(Day_per_total,1)})
   overall_total += total_Sell

print ("Total trades:", overall_total)
Trades_Per_month = round(overall_total/15/12)
print ("Average trades:", Trades_Per_month, "trades")

#put dictionary of Files_Per in to Files_Per1.csv file
os.chdir(f"Strat_{i}_output")
with open('Tradespermonth_Stat.csv', 'w') as f:
    writer = csv.DictWriter(
        f, fieldnames=["company", "amount"])
    writer.writeheader()
    for key in Files_Per.keys():
        f.write("%s,%s\n"%(key,Files_Per[key]))