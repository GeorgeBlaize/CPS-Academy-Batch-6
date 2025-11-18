#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,k;

    cin>>n>>k;

    int a[100],b[100];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int last_index=0;

    for(int i=n-k; i<n; i++){
        b[last_index++]=a[i];
    }
    
    for(int i=0; i<n-k; i++){
        b[last_index++]=a[i];
    }
    
    for(int i=0; i<n; i++){
        cout<<b[i];
        if(i+1<n)
        cout<<" ";
    }

    cout<<endl;

    return 0;
}