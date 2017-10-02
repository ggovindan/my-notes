#!/bin/python3.5
import asyncio
from time import clock
import atexit

def swap(arr, i, j):
  temp = arr[i]
  arr[i] = arr[j]
  arr[j] = temp
  print("arr=", arr)

def endLog():
  end = clock()
  elapsed_time = end - start
  print("Time Taken=", elapsed_time)

async def quicksort_recursive(arr, begin, end):
  print("begin=%d, end=%d" % (begin, end))
  i = begin
  j = end
  pivot = arr[int((begin+end)/2)]
  print("pivot=", pivot)

  while i < end or j > begin:
    while arr[i] < pivot:
      i+=1
    print("arr[i] < pivot {} < {}".format(arr[i], pivot))

    while arr[j] > pivot:
      j-=1
    print("arr[j] > pivot {} > {}".format(arr[j], pivot))

    if i <= j:
      swap(arr, i, j)
      i+=1
      j-=1
    else:
      if begin < j:
        print("calling recursive j=", j)
        await quicksort_recursive(arr, begin, j)
      if end > i:
        print("calling recursive i=", i)
        await quicksort_recursive(arr, i, end)
      return


my_array = [23,432,232,54,43,3434,5,0,34,4,33,45,55,44,54,44,3]
start = clock()
atexit.register(endLog)
loop = asyncio.get_event_loop()
future = asyncio.ensure_future(quicksort_recursive(my_array, 0, len(my_array)-1))
loop.run_until_complete(future)
