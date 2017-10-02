import asyncio
import time
import atexit

def prg_duration():
  end = time.perf_counter()
  t1 = time.process_time()
  print("time.per_counter:{}".format((end-start)))
  #print("time.process_time:{}".format(t1 - t0))

def swap(arr, i, j):
  temp = arr[i]
  arr[i] = arr[j]
  arr[j] = temp


async def quicksort(arr, begin, end):
  i = begin
  j = end
  pivot = arr[end]

  while (i < end) or (j > begin) :
    while (arr[i] < pivot):
      i+=1
    while arr[j] > pivot:
      j-=1

    if i <= j:
      swap(arr, i, j)
      i+=1
      j-=1
    else:
      if i < end:
        await quicksort(arr, i, end)
      if j > begin:
        await quicksort(arr, begin, j)
      return

arr = [12,53,3,353,34,34,64,234,3,33,53,46,7,77,33,233]

start = time.perf_counter()
t0 = time.process_time()
atexit.register(prg_duration)
loop = asyncio.get_event_loop();
future = asyncio.ensure_future(quicksort(arr, 0, len(arr)-1))
loop.run_until_complete(future)