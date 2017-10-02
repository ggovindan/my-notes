# simulate grep command using generators

# find files in the current directory
import glob
import os

def readFile(filename):
  with open(filename) as f:
    for line in f:
      yield line

def grep(pattern, lines):
  for line in lines:
    if pattern in line:
      return line


def get_all_files():
  for root, dir, file in os.walk('./'):
    yield root.join('file')
  ## for file in glob.glob('*.py') :
   #   yield file

files = get_all_files()

while True:
  try:
    print(next(files))
  except StopIteration:
    print("end of files")
    break

lines = readFile("how_gevent_works.txt")
print(grep("thread", lines))
