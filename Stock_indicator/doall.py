import sys
import time
import os
import pandas
import merge_doc as md
# variables
#x = int(input("loop:"))
x = 200
os.chdir(r'C:\Users\48941.FRH179290\Desktop\SWIM2')
print(os.getcwd())
for i in range(10):
    exec(open("getfiles.py").read())
    time.sleep(36000)
    i += 1
    y = r'C:\Users\48941.FRH179290\Desktop\Thinkor_excel\Statagie_program\Strat_' + str(i) + r'\ '
    y = y[:-1]
    exec(open("runall.py").read())
    os.chdir(r'C:\Users\48941.FRH179290\Desktop\SWIM2')
#    exec(open("merge_doc.py").read())
    md.merge()
    os.chdir(r'C:\Users\48941.FRH179290\Desktop\SWIM2')
    exec(open("change_script.py").read())
    exec(open('Get csv to excel.py').read())


