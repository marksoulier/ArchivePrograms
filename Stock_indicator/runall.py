import os
# testing material
i = 1
#y = r'C:\Users\48941.FRH179290\Desktop\Thinkor_excel\Statagie_program\Strat_1\ '
#y = y[:-1]

dictionarys = [r'average_money',r'average_percent',r'Percsuccess',r'StdDev_money',r'StdDev_percent',r'timeSpan',r'Tradespermonth']
for file in dictionarys:
    os.chdir(r'C:\Users\48941.FRH179290\Desktop\SWIM2')
    exec(open(f"{file}.py").read())
