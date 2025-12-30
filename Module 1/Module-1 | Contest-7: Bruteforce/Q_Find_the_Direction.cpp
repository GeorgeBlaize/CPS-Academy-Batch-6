#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;

    vector<string> dir={"North","East","South","West"};

    while (t--)
    {
        int x;
        cin>>x;
        cout<<dir[x%4]<<endl;
    }
    
    return 0;
}