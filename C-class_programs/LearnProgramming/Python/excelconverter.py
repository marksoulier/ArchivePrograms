import argparse
import csv
import pandas as pd
import xlsxwriter

parser = argparse.ArgumentParser(description='A test program.')
parser.add_argument("--input_csv_file", help="uses the argument as the root file", default="busdata.csv")
parser.add_argument("--output_csv_file", help="uses the argument as the file to write to", default="busdata_modified.csv")
args = parser.parse_args()
# args.input_csv_file
# args.output_csv_file

csv = pd.read_csv('busdata.csv')

excelwriter = pd.ExcelWriter('workbook1.xlsx', engine='xlsxwriter')

csv.to_excel(excelwriter)

if excelwriter[1] > excelwriter[2]:
    P_Demand = excelwriter[1] * (excelwriter[3] + excelwriter[4])
else:
    P_Demand = excelwriter[2] * excelwriter[5] + excelwriter[3] * excelwriter[6]

E_Demand = excelwriter[3] * excelwriter[7] + excelwriter[4] * excelwriter[8]

excelwriter[9] = P_Demand
excelwriter[10] = E_Demand

workbook = excelwriter.book
worksheet = excelwriter.sheets['Sheet1']
chart = workbook.add_chart({'type': 'column', 'subtype': 'stacked'})

chart.set_x_axis({'name': 'Scenario'})
chart.set_y_axis({'name': 'Money', 'major_gridlines': {'visible': False}})

chart.add_series({
    'name':       '=Sheet1!$A$1:$A:12',
    'categories': '=Sheet1!$H$1:$I$1',
    'values':     '=Sheet1!$B$2:$B$12,Sheet1!$H$2:$I$12',
# 'fill':       {'color': brews['Pastel1'][row_num - 1]},
    'gap':        20,
    })
worksheet.insert_chart('K2', chart)

excelwriter.save()












# with open(args.input_csv_file, newline='') as csvfile:
#     spamreader = csv.reader(csvfile, delimiter=',')
    
#     # with open(args.output_csv_file, 'w') as newcsvfile:
#     #     writer = csv.writer(newcsvfile, delimiter=',')
#     df = pd.read_excel('Busdata.xlsx')
#         for row in spamreader:
#             for i in range(0,10):
#                 df[i] = row[i]
#             if row[] > row[]:
#                 P_Demand = 
#             else:
#                 P_Demand = 
#         df['Value 10'] = P_Demand
#             # row.append(P_Demand)
#             E_Demand = 
#         df['Value 11'] = E_Demand
#             # row.append(E_Demand)
#             # writer.writerow(row)


