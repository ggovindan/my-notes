#A program to define a bank class
import asyncio

MIN_BALANCE = 50

class BankAccount:
  def __init__(self, balance=0):
    self.min_balance = balance

  def deposit(self, amount):
    self.min_balance += amount

  def withdraw(self, amount):
    if (self.min_balance - amount) < MIN_BALANCE:
      raise Exception("cant withdraw money.")
    else:
      self.min_balance -= amount
  def __str__(self):
    return "dipoza"


man1 = BankAccount(100)

man1.withdraw(5)

print(man1)