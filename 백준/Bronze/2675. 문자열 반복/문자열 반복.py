a = int(input())
for i in range(a):
  b,c = list(input().split())
  b = int(b[0])
  for j in range(len(c)):
    for k in range(b):
      print(c[j],end="")
  print()
    