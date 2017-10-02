#!/bin/python3.5

#An example iterator

class MyList(list):
  def __init__(self, *args, **kwargs):
    self.i = 0
    self.arr = []

  def __iter__(self):
    return self

  def next(self):
    if (self.i < self.size):
      return self.i
    i+=1



# ll = MyList()

# print(dir(ll))


# ll[0] = "dder"

