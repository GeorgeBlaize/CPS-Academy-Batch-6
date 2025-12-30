#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;

    while (t--)
    {
        
        long long n,k,x;
        cin>>n>>k>>x;

        if(n<k || x<k-1){
            cout<<-1<<endl;
            continue;
        }

        long long baseSum = k*(k-1)/2;

        long long maxValue=(x==k?k-1:x);

        long long remaining=n-k;

        long long answer = baseSum+remaining*maxValue;
        cout<<answer<<endl;
    }
    
    return 0;
}
