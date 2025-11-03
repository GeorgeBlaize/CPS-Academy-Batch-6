#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    int t;
    cin>>t;

    while (t--)
    {

        int assignments,minutes,days;

        cin>>assignments>>minutes>>days;

        int daysMinutes=days*60*24;

        if(assignments*minutes<=daysMinutes){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
}