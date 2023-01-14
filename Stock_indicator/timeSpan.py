#find the average time span of each trade

import sys
import csv
import locale
import os
from decimal import *
from datetime import datetime

date_format = "%m/%d/%y"
getcontext().prec = 4
total_Sell = 0
total_Sell_Day = 0
overall_total_Day = 0
overall_total = 0
total_Day = 0

Files_Per = {}

#open up directary and put list of files into it
print ("Opening: ", y)
List_of_files = os.listdir(y)

for file in List_of_files:
   Nfile = y + str(file)
   with open(Nfile) as f:
       total_day = 0
       total_sell = 0
       #Open the file, use the CSV reader to parse it
       reader = csv.reader(f, delimiter=';')
       for row in reader:
           if(reader.line_num <= 6):
               #Skip the header lines
               continue

           if(len(row) == 0):
               #Stop at the end
               break

           if(row[2] == "Buy to Open"):
               a = datetime.strptime(row[5], date_format)
               pair = 1
           if(row[2] == "Sell to Close"):
               b = datetime.strptime(row[5], date_format)
               total_sell = total_sell + 1
               pair += 1
           if( pair == 2):
               diffdate = b - a
               total_day += diffdate.days
               pair = 0
   file = file[16:]
   # locate = file.find(_)
   # file = file [0:locate]
   Day_per_total = total_day/total_sell
   Files_Per.update({file : round(Day_per_total,1)})
   overall_total_Day += total_day
   overall_total += total_sell

print ("Total trades:", overall_total)
print ("Total Day time:", overall_total_Day)
Day_Per_total = round(overall_total_Day/overall_total,1)
print ("Average Days:", Day_Per_total, "Days")

#put dictionary of Files_Per in to Files_Per1.csv file
os.chdir(f"Strat_{i}_output")
with open('timeSpan.csv', 'w') as f:
    writer = csv.DictWriter(
        f, fieldnames=["company", "amount"])
    writer.writeheader()
    for key in Files_Per.keys():
        f.write("%s,%s\n"%(key,Files_Per[key]))