# beautiful array

# [1, 2, 3, 4, 5]

# [1, 2, 3] [1, 2, 3, 4] [2, 3, 4, 5] [3, 4, 5]

def beautiful(a, num):
  start = 0
  end = 0
  odd_count = 0
  tot_count = 0
  while end < len(a):
    if a[end] % 2 != 0:
      odd_count +=1
    end +=1

    while odd_count > num:
      if a[start] % 2 != 0:
        odd_count -= 1
      start +=1

    if odd_count == num:
      tot_count += calculate_subarr(a, start, end, num)
  return tot_count

def calculate_subarr(a, start, end, num):
  count = 0 if num == 0 else 1
  while a[start] % 2 == 0:
    count +=1
    start +=1
  return count


print(beautiful([1, 2, 3, 4, 5], 2))