#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int num,x;

    cin>>num>>x;

    int total=0;

    for(int i=0; i<num; i++){
        int s;
        cin>>s;

        if(s<=x)
        total+=s;
    }

    cout<<total<<endl;
    return 0;
}