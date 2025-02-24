"""
IN THE NAME OF ALLAH
  Author:S.M. Akhlakur Rahman Meraj
  Contact:01909146781
  Bangladesh Univerity Of Bussiness And Technology
"""
n=int(input())
arr=list(map(int,input().split()))
for i in range (0,n):
	for j in range (i+1,n):
		if(arr[i]>arr[j]):
			arr[i],arr[j]=arr[j],arr[i]

for i in range (0,n):
	print(arr[i],end=" ")