#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;

    while (t--)
    {
       

        long long n;
        long long x;
        long long d;

        cin>>n>>x>>d;

        long long perDay=5*x;

        if(n<perDay){
            cout<<d<<endl;
        }
        else{
            long long days_from_food=n/perDay;
            cout<<days_from_food+d<<endl;
        }
    }
    
    return 0;
}