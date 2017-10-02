


def beautifulArray(a, m):
  start = 0
  end = 0  # variable that holds the last index of parsing
  cnt = 0  # variable that holds the value of number of odd numbers processed
  total = 0 # total number of subarrays that are beautiful

  while end < len(a):
    if a[end]%2 != 0:
      cnt +=1
    end +=1
    while cnt > m:
      if a[start]%2 != 0:
        cnt -= 1
      start += 1

    if cnt == m:
      total += helper(a, start, end, m)
  return total

def helper(a, start, end, m):
  print('inside helper a={} start={} end={} m={}'.format(a[start:end], start, end, m))
  total_so_far = 0 if m==0 else 1
  while start < end and a[start]%2 == 0:
    total_so_far +=1
    start +=1
  print ('total_so_far=', total_so_far)
  return total_so_far

print(beautifulArray([2,5,4,9,6], 1))