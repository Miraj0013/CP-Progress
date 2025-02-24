"""
IN THE NAME OF ALLAH
  Author:S.M. Akhlakur Rahman Meraj
  Contact:01909146781
  Bangladesh Univerity Of Bussiness And Technology
"""
#merge
def merge(a,l,m,r):
  n1=m-l+1
  n2=r-m
  # Create temporary arrays
  b = [0] * n1  
  c = [0] * n2
  for i in range(0,n1):
    b[i]=a[l+i]
  for i in range(0,n2):
    c[i]=a[m+i+1]
  i=0
  j=0
  k=l
  while i<n1 and j<n2:
    if b[i]<c[j]:
      a[k]=b[i]
      i+=1
      k+=1
    else:
      a[k]=c[j]
      j+=1
      k+=1
  while i<n1:
    a[k]=b[i]
    i+=1
    k+=1
  while j<n2:
    a[k]=c[j]
    j+=1
    k+=1
#mergsort
def mergesort(a,l,r):
  if l<r:
    mid=(r+l)//2
    mergesort(a,l,mid)
    mergesort(a,mid+1,r)
    merge(a,l,mid,r)

a=list(map(int,input().split()))
mergesort(a,0,len(a)-1)
for i in range(0,len(a)):
  print(a[i],end=' ')