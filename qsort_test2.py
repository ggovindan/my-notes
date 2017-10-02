import asyncio
import time
import atexit

def perf_func():
  t1 = time.process_time()
  end = time.perf_counter()

  print("perf_counter=", end-start)
  print("process_time=", t1 - t0)


def swap(arr, l, r):
  temp = arr[l]
  arr[l] = arr[r]
  arr[r] = temp

async def qsort(arr, begin, end):
  pivot = arr[end]
  l = begin
  r = end

  while l < end or r > begin:
    while arr[l] < pivot:
      l+=1
    while arr[r] > pivot:
      r-=1

    if l <= r:
      swap(arr, l, r)
      l+=1
      r-=1
      print(arr)
    else:
      if l < end:
        await qsort(arr, l, end)
      if r > begin:
        await qsort(arr, begin, r)
      return

array = [12,443,2445,3,4,232,244,3,44,3,54,33,43,332]

t0 = time.process_time()
start = time.perf_counter()
atexit.register(perf_func)

loop = asyncio.get_event_loop()
future = asyncio.ensure_future(qsort(array, 0, len(array)-1))
loop.run_until_complete(future)