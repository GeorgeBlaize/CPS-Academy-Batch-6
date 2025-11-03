#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    int t;
    cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;

        double fair_share=(double)n/(k+1);

        int each_pays=(int)fair_share;

        int total_paid=k*each_pays;

        int net_payment=n-total_paid;

        cout<<net_payment<<endl;
        
    }
    
    return 0;
}