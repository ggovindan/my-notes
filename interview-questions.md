1. Merge two sorted arrays (solved pycon/cpp11-gotcha/c-gotcha/merge-sorted-array.c)

2. write a function that reads input from a file with teh specified path. Each line in the file contains only a 32-bit integer and there may be up to 100 million lines in the file.
the funtion shoudl return the second larged value in teh file, or the smalles 32-bit integer if there is none

Beautiful subarrays (solved pycon/cpp11-gotcha/c-gotcha/beautiful-subarray-count.c)
--------------------
3. Given an array, a, of n distinct positive integers, we define the following:
  * subarray a[i..j] constains elements a[i], a[i+1]...a[j-1], a[j]
  * Two subarrays a[i1..j1] and a[i2..j2] are considered to be distinct if i1 != i2 or j1 != j2

  we consider the subarray a[i..j](where 0<=i < n and i <=j < n) to be beautiful if it contains exactly m odd elements

  complete the beautifulSubarrays function. It has 2 parameters a(the array) m (the number of odd elements to be present for an array to be beautiful)

4. Reaching points (solved pycon/python-interview/find-coordinate-is-reachable.py)
-------------------
   Jen coded a bot that takes a pair of integers coordinates (x, y). Though the bot can move any number of times, it can only make the following two types of moves
     1. From location (x,y) to locaiton (x+y, y)
     2. from location (x,y) to (x, x+y)
   for example if the bot start at (1, 4), it can make the following sequence of moves: (1, 4)->(5, 4)->(5, 9)->(5, 14).

   COmplete the canReach function in the editor below. It has 4 integer parameters: x1, y1, x2, y2. It must return the string YES if it is possible for the bot to start at point (x1, y1) and reach point (x2, y2); otherwise must return sthe string NO.

5. Given the following csv mycsv = """1,alex,80405,13,5
3,bob,94123,320,1.5
2,jane,94032,35,2.8
4,will,94110,31.6,6.1
5,jess,94117,48,4
6,sam,94032,31.4,9
7,jim,94036,35,19""" (solved - pycon/python-interview/primary-secondary-sort.py)

where the fields are id, name, zip, number_of_prescrip, number_of_patients. Sort the list by number_of_prescrip in descending order and secondary sort with number_of_patients
