/*
  IN THE NAME OF ALLAH
  Author:S.M. Akhlakur Rahman Meraj
  Contact:01909146781
  Bangladesh Univerity Of Bussiness And Technology
*/
#include<bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define pb push_back
#define ll long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;

void merge(int a[],int l,int m,int r){
  int n1=m+1-l,n2=r-m;
  int b[n1],c[n2];
  for(int i=0;i<n1;i++){
    b[i]=a[i+l];
  }
  for(int i=0;i<n2;i++){
    c[i]=a[i+m+1];
  }
  int i=0,j=0,k=l;
  while(i<n1 and j<n2){
    if(b[i]<c[j]){
      a[k]=b[i];
      i++;
      k++;
    }else{
      a[k]=c[j];
      j++;
      k++;
    }
  }
  while(i<n1){
    a[k]=b[i];
    i++;
    k++;
  }
  while(j<n2){
    a[k]=c[j];
    j++;
    k++; 
  }
}
 
void mergesort(int a[],int l,int r){
  if(r>l){
    int m=(l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
  }
}

int main(){fast();
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  mergesort(a,0,n-1);
  for(int i=0;i<n;i++){
    cout<<a[i]<<' ';
  }
}
