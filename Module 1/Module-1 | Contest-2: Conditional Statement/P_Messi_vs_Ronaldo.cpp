#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    int messi,ronaldo;

    
    int goal,assist;

    cin>>goal>>assist;

    messi =goal*2+assist*1;

    
    cin>>goal>>assist;

    ronaldo =goal*2+assist*1;



    if(messi>ronaldo){
        cout<<"Messi"<<endl;
    }
    else if(ronaldo>messi){
        cout<<"Ronaldo"<<endl;
    }

    else if(messi==ronaldo){
        cout<<"Equal"<<endl;
    }
    return 0;
}