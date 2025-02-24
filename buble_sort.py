"""
IN THE NAME OF ALLAH
  Author:S.M. Akhlakur Rahman Meraj
  Contact:01909146781
  Bangladesh Univerity Of Bussiness And Technology
"""
#bublesort
def bublesrt(b):
  n=len(b)-1
  for i in range(0,n):
    for j in range(0,n):
      if b[j]>b[j+1]:
        b[j],b[j+1]=b[j+1],b[j]

a=list(map(int,input().split()))
bublesrt(a)
for i in range(0,len(a)):
  print(a[i],end=' ')