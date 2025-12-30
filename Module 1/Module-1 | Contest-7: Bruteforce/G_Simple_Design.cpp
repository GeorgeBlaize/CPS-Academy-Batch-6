#include<bits/stdc++.h>
using namespace std;

int digitSum(long long n){
    int sum=0; 
    while (n>0)
    {
        sum+=n%10;
        n/=10;
    }

    return sum;
    
}
int main()
{
    
    int t;
    cin>>t;

    while (t--)
    {
        long long x;
        int k;
        
        cin>>x>>k;

        long long y=x;

        while (true)
        {
           
            if(digitSum(y)%k==0){
                cout<<y<<endl;
                break;
            }

            y++;
        }
             
    }   
    
    return 0;
}