#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    int T;
    cin>>T;

    for(int t=1; t<=T; t++ ){
        int N,R;
        cin>>N>>R;
    

        map<int ,set<int>> mp;
         bool corrupted =false;

        for(int i=0; i<R; i++){
        int I,C;
        cin>>I>>C;


        if(mp[I].count(C)){
            corrupted=true;

        }
        else{
            mp[I].insert(C);
        }
    }


    cout<<"Scenario #"<< t <<": ";
    if(corrupted){
        cout<<"impossible"<<endl;
    }
    else{
        cout<<"possible"<<endl;
    }
  }
    return 0;
}