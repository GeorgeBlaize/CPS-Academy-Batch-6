#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int oldTask,newTask;

    cin>>oldTask>>newTask;

    if(oldTask<newTask){
        cout<<"Old"<<endl;
    }
    else if(oldTask>newTask)
    {
        cout<<"New"<<endl;
    }
    else if(oldTask==newTask){
        cout<<"Same"<<endl;
    }
    return 0;
}