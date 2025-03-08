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

void heapisfy(int a[],int n,int i){
    int l=(2*i)+1;
    int r=(2*i)+2;
    int max=i;
    if(l<n and a[max]<a[l])max=l;
    if(r<n and a[max]<a[r])max=r;
    if(max!=i){
        swap(a[max],a[i]);
        heapisfy(a,n,max);
    }
}

void heasort(int a[],int n){
    //building heap
    for(int i=(n/2)-1;i>=0;i--){
        heapisfy(a,n,i);
    }
    //detarmine max heap 
    for(int i=n-1;i>0;i--){
        swap(a[i],a[0]);
        heapisfy(a,i,0);
    }
}

int main(){fast();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    heasort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
} 
