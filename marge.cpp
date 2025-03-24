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

//mearging
void merg(int a[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int x[n1],y[n2];
    for(int i=0;i<n1;i++){
        x[i]=a[i+l];
    }
    for(int i=0;i<n2;i++){
        y[i]=a[i+m+1];
    }
    int i=0,j=0,k=l;
    while(i<n1 and j<n2){
        if(x[i]<y[j]){
            a[k]=x[i];
            i++;
            k++;
        }else{
            a[k]=y[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        a[k]=x[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=y[j];
        j++;
        k++;
    }
}

//mergsort
void mergsort(int a[],int l,int r){
    if(l<r){
        int m=(r+l)/2;
        mergsort(a,l,m);
        mergsort(a,m+1,r);
        merg(a,l,m,r);
    }
}
int main(){fast();
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergsort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
}
