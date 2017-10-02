
def merge(a, b, c):
  k=0
  i=0
  j=0
  while i < len(a) and j < len(b):
    if a[i] < b[j]:
      c.append(a[i])
      i+=1
    else:
      c.append(b[j])
      j+=1
    k +=1

  while i < len(a):
    c.append(a[i])
    k +=1
    i +=1
  while j < len(b):
    c.append(b[j])
    k +=1
    j +=1

x =[1, 3, 5, 7, 9]
y = [2, 4, 6, 8, 10]
z = []
merge(x, y, z)
print(z)

