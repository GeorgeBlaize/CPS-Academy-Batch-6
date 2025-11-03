#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;

    while (t--)
    {

        int prepared,neighbourEats;

        cin>>prepared>>neighbourEats;


        cout<<min(20,prepared/neighbourEats)<<endl;


    }
    
    return 0;
}