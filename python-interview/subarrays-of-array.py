
def sub_arrays(a):
  subarr = []
  for i in range(len(a)):
    for j in range(i, len(a)):
      subarr.append([a[k] for k in range(i, j+1)])
  print(subarr)

#sub_arrays([1,2,3,4])

# Print all substring of a string

def sub_string(mystr):
  substr = []
  for i in range(len(mystr)):
    for j in range(0, len(mystr)+1):
      print("i={}, j={}".format(i, j))
      if i < j:
        print(mystr[i:j])
        substr.append(mystr[i:j])
  print(substr)

sub_string("abcd")