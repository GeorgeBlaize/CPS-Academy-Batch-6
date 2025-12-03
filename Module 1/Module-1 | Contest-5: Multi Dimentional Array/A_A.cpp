#include<bits/stdc++.h>
using namespace std;


int main()
{
    
    int h,w;
    cin>>h>>w;

    int countPieces=0;

    for(int i=0; i<h; i++){
        string s;
        cin>>s;

        for(char c: s){
            if(c=='#')
            countPieces++;
        }

       
    }
    
    cout<<countPieces<<endl;
    return 0;
}
