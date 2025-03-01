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
 
int ceil_value(int a,int b){
  return (a+b-1)/b;
}

int main(){fast();
  int n,k;
  cin>>n>>k;
  vector<int> a(n),l,s;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    if(a[i]>k/2){
        l.pb(a[i]);
    }else{
        s.pb(a[i]);
    }
  }
  sort(l.begin(),l.end(),greater<>());
  sort(s.begin(),s.end());
  int i=0,j=0,cnt=0;
  while(i<l.size() and j<s.size()){
    if(l[i]+s[j]<=k){
      i++;
      j++;
    }else{
      i++;
    }
    cnt++;
  }
  cnt+=ceil_value((s.size()-j),2);
  cnt+=(l.size()-i);
  cout<<cnt;
} 