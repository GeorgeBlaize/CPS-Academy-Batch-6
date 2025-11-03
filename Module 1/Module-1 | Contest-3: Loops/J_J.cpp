#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    
    while (t--)
    {
        
        int people,capacity;
        cin>>people>>capacity;

        if(capacity>=people){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}