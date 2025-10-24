#include<bits/stdc++.h>
using namespace std;
int main()

{

    int timeTaken;
    cin>>timeTaken;

    if(timeTaken<3){
        cout<<"GOLD"<<endl;
    }
    else if(timeTaken>=3 && timeTaken<6){
        
        cout<<"SILVER"<<endl;

    }

    else if(timeTaken>=6){
        cout<<"BRONZE"<<endl;
    }
    
    return 0;
}