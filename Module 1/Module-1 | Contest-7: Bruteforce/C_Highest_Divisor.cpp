#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;

    for(int i=10; i>=1; i--){

        if(num%i==0){
            cout<<i<<endl;
            break;
        }
    }


    return 0;
}