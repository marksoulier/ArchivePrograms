import pandas
import os
def merge():
    i = 1
    os.chdir(r'C:\Users\48941.FRH179290\Desktop\SWIM2')
    os.chdir(str(r'C:\Users\48941.FRH179290\Desktop\SWIM2\Strat_' + str(i) + '_output'))
    b = 0
    #dictionarys = ['average_money','average_percent','Percsuccess','StdDev_money','StdDev_percent','timeSpan','Tradespermonth']
    #for files in dictionarys:
     #   data = pandas.read_csv(f"{files}.csv", header=0)
     #   dictionarys[b] = list(data.amount)
     #   company = list(data.company)
     #   b += 1
      #  print(dictionarys[b])
    print(os.getcwd())
    data = pandas.read_csv(r'Average_money.csv', header=0)
    average_money = list(data.amount)
    data = pandas.read_csv(r'Average_percent_Stat.csv', header=0)
    company = list(data.company)
    data = pandas.read_csv('Average_percent_Stat.csv', header=0)
    average_percent = list(data.amount)
    data = pandas.read_csv('Persuccess.csv', header=0)
    Percsuccess = list(data.amount)
    data = pandas.read_csv('StdDEV_money_Stat.csv', header=0)
    StdDev_money = list(data.amount)
    data = pandas.read_csv('StdDev_percent_Stat.csv', header=0)
    StdDev_percent = list(data.amount)
    data = pandas.read_csv('timeSpan.csv', header=0)
    timeSpan = list(data.amount)
    data = pandas.read_csv('Tradespermonth_Stat.csv', header=0)
    Tradespermonth = list(data.amount)
    print(len(company))
    print(len(average_money))
    print(len(average_percent))
    print(len(Percsuccess))
    print(len(StdDev_money))
    print(len(StdDev_percent))
    print(len(timeSpan))
    print(len(Tradespermonth))
    n = 0
    file = open(f"combined{i}.csv", "w")
    file.write(f"company,Average_money,Average_percent_Stat,Persuccess,StdDEV_Money_Stat,StdDev_percent_Stat,timeSpan,Tradespermonth_Stat")
    file.write("\n")
    for line in average_percent:
        file.write(f"{company[n]},{average_money[n]},{average_percent[n]},{Percsuccess[n]},{StdDev_money[n]},{StdDev_percent[n]},{timeSpan[n]},{Tradespermonth[n]}")
        file.write("\n")
        n += 1
    file.close()
merge()
