#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,m;
    cin>>n>>m;

    int a[100],b[100];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    int total =0; 
    for(int i=0; i<m; i++){
        total += a[b[i]-1];
    }

    cout<<total<<endl;

    return 0;
}
