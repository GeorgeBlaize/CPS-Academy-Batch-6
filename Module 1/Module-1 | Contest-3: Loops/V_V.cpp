#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;

    while (t--)
    {
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;

        int netA=a1-a2;
        int netB=b1-b2;
        int netC=-(netA+netB);

        if(netC>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}