#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;

    while (t--)
    {
        int x;
        cin>>x;

        int ans=(500+x-1)/x;
        cout<<ans<<endl;
    }
    

    return 0;
}