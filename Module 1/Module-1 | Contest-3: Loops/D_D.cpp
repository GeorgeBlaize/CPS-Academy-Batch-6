#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int k;
        cin>>k;

        int num=0;
        int cnt=0;

        while (cnt<k)
        {
            num++;
            if(num%3==0)
            continue;
            if(num%10==3)
            continue;
            cnt++;
        }

        cout<<num<<endl;
        
    }
    
    return 0;
}