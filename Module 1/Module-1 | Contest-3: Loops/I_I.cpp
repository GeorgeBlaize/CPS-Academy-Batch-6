#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;

    while (t--)
    {
        
        int blood,collection;

        cin>>blood>>collection;

        if(blood<collection){
            cout<<abs(blood-collection)<<endl;
        }
        else
        {
            cout<<blood-collection<<endl;
        }
    }
    
    return 0;
}