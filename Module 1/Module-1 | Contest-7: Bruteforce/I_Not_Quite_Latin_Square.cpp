#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    int t; 
    cin>>t;

    while (t--)
    {
        vector<string> grid(3);
        int r,c;

        for(int i=0; i<3; i++){
            cin>>grid[i];
            for(int j=0; j<3; j++){
                if(grid[i][j]=='?'){
                    r=i;
                    c=j;
                }
            }
        }

        string letters="ABC";
        char missing;

        for(char ch: letters){
            bool found=false;

            for(int j=0; j<3; j++){
                if(grid[r][j]==ch)
                found=true;
            }

            for(int i=0; i<3; i++){
                if(grid[i][c]==ch) found=true;
            }

            if(!found){
                missing =ch;
                break;
            }
        }

        cout<<missing<<endl;
    }
    

    return 0;
}