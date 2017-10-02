
"""
4. Reaching points
-------------------
   Jen coded a bot that takes a pair of integers coordinates (x, y). Though the bot can move any number of times, it can only make the following two types of moves
     1. From location (x,y) to locaiton (x+y, y)
     2. from location (x,y) to (x, x+y)
   for example if the bot start at (1, 4), it can make the following sequence of moves: (1, 4)->(5, 4)->(5, 9)->(5, 14).

   COmplete the canReach function in the editor below. It has 4 integer parameters: x1, y1, x2, y2. It must return the string YES if it is possible for the bot to start at point (x1, y1) and reach point (x2, y2); otherwise must return sthe string NO.

"""

def canReach(x1, y1, x2, y2):
  if x1 > x2 or y1 > y2:
    return False

  if x1 == x2 and y1 == y2:
    return True

  if canReach(x1+y1, y1, x2, y2) or canReach(x1, y1+x1, x2, y2):
    return "YES"
  return "NO"


print(canReach(1,2,2,1))