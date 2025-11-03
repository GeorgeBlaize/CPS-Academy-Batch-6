#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;

    while (t--)
    {
        int n,x;
        cin>>n>>x;

        int ans=max(0,2*x-2*n);

        cout<<ans<<endl;
        
    }
    
    return 0;
}