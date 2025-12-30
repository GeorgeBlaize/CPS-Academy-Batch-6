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

        int odd_steps=(k+1)/2;
        int even_steps=k/2;

        int position=3*odd_steps-1*even_steps;

        cout<<position<<endl;


    }
    
    return 0;
}