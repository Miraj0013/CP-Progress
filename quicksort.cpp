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
const int N=1e6+10;

//making pivate
int pivt(int a[],int l,int r){
    int i=l-1;
    int piv=r;
    for(int j=l;j<r;j++){
        if(a[j]<a[piv]){
            i++;
            swap(a[i],a[j]);
        }
    }
    i++;
    swap(a[i],a[piv]);
    return i;
}

//applying quick sort algorithom
void quicksort(int a[],int l,int r){
    if(l<r){
        int piv=pivt(a,l,r);
        quicksort(a,l,piv-1);
        quicksort(a,piv+1,r);
    }
}
int main(){fast();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
}
