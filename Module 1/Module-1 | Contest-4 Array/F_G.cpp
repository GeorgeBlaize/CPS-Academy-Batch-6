#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;

    long long h[100005];

    for(int i=0; i<n; i++){
        cin>>h[i];
    }

    int pos=0;
    
    while(pos+1<n && h[pos+1]>h[pos]){
        pos++;
    }
   

    cout<<h[pos]<<endl;

    return 0;
}