#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        
        int aircraft,passengers;

        cin>>aircraft>>passengers;

        int required=(passengers+99)/100;
        int buy=required-aircraft;

        if(buy<0){
            cout<<0<<endl;
        }
        else
        {
            cout<<buy<<endl;
        }
    }
    

    return 0;
}