#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,p,q,r,s;
    cin>>n>>p>>q>>r>>s;

    int a[110];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    p--;q--;r--;s--;
     
    for(int i=0; i<=q-p; i++){
        int temp=a[p+i];
        a[p+i]=a[r+i];
        a[r+i]=temp;
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<(i+1<n?' ' : '\n');
    }

    return 0;
}