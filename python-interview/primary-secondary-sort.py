import csv

mycsv = """1,alex,80405,13,5
3,bob,94123,320,1.5
2,jane,94032,35,2.8
4,will,94110,31.6,6.1
5,jess,94117,48,4
6,sam,94032,31.4,9
7,jim,94036,35,19"""

def sorting(input_csv):
  tup_list = []
  for val in input_csv.split('\n'):
    tup_list.append(tuple(val.split(',')))
  print(tup_list)
  tup_list = sorted(tup_list, key=lambda x: (-float(x[3]), float(x[4])))
  print(tup_list)

sorting(mycsv)