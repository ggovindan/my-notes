#!/bin/python3.5

class Node:
  """
  Node that represents a tree
  """
  def __init__(self, data):
    """
    Node Constructor
    """
    self.left = None
    self.right = None
    self.data = data

  def insert(self, data):
    if self.data < data:
      if self.left == None:
        self.left = Node(data)
      else:
        self.left.insert(data)
    elif self.data > data:
      if self.right == None:
        self.right = Node(data)
      else:
        self.right.insert(data)

  def lookup(self, data, parent=None):
    if self.data < data:
      if self.left == None:
        return None, None
      return self.left.lookup(data, self)
    elif self.data > data:
      if self.right == None:
        return None, None
      return self.left.lookup(data, self)
    else:
      return self, parent

+-**
*93363