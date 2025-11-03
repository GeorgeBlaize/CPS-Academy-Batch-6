#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    
    while (t--)
    {
        string ball1,ball2,ball3,ball4,ball5,ball6;
        cin>>ball1>>ball2>>ball3>>ball4>>ball5>>ball6;

        if((ball1 == "W" && ball2 =="W" && ball3=="W")|| 
           (ball2=="W" && ball3=="W" && ball4=="W") || 
           (ball3=="W" && ball4=="W" && ball5=="W") || 
           (ball4=="W" && ball5=="W" && ball6=="W"))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
}