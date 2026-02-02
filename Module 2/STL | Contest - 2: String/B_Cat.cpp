#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;

    string s;
    cin>>s;


    string result="";

    for(int i=0; i<n;){
        if(i+1<n&& s[i]=='n' && s[i+1]=='a'){
            result+="nya";
            i+=2;
        }else{
    

            result+=s[i];
            i++;

        }
    }
    

    cout<<result<<endl;
    return 0;
}