#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;

    while (t--)
    {
        
        int chef,chefina;
        cin>>chef>>chefina;

        if(chef<chefina){
            cout<<abs(chef-chefina)<<endl;
        }

        else{
            cout<<chef-chefina<<endl;
        }
    }
    
    return 0;
}