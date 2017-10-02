from collections import defaultdict
#this example deals with an array containing +ve and -ve
# def find_subarrays(a, sum):
#   dd = defaultdict(list)
#   temp = 0
#   subarrays = []
#   start = 0
#   while start < len(a):
#     for i in range(len(a)):
#       temp += a[i]

#       if dd.get(temp - sum) != None:
#         print("i={} (temp-sum)={}".format(i, temp-sum))
#         subarrays.append(a[start:dd.get(temp - sum) + 1])
#         temp = 0
#         start +=1
#       if dd.get(temp):
#         dd[temp].append(i)
#       else:
#         dd[temp] = i
#       print("dd=", dd)
#   print(subarrays)

# this example does it for positive integers
def find_subarray(a, sum):
  curr_sum = 0
  start = 0
  for i in range(len(a)):
    curr_sum += a[i]

    while curr_sum > sum:
      curr_sum -= a[start]
      start +=1

    if curr_sum == sum:
      print(a[start:i+1])


find_subarray([2, 3, 4, 1, 3, 6, 8], 8)