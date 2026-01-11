#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    int t;
    cin>>t;

    while (t--)
    {
        
        int n;
        cin>>n;


        vector<long long> a(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        long long prev=0;
        for(int i=0; i<n; i++){
            long long cur=prev+1;
            if(cur==a[i]){
                cur++;
            }
            prev=cur;
        }

        cout<<prev<<endl;
    }
    
    return 0;
}
