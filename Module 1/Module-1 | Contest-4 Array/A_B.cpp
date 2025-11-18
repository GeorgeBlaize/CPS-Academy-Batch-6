#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;

    long long a[70000];
    long long b[10000];

    for(int i=0; i<7*n; i++){
        cin>>a[i];
    }

    for(int week=0; week<n; week++){
        long long sum=0;
        for(int day=0; day<7; day++){
            sum+=a[week*7+day];
        }
        b[week]=sum;
    }

    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}