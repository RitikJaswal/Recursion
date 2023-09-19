#include<iostream>
using namespace std;
void sequence(string s,string current,int index)
{
    //base case
    if(s.size()==index)
    {
        cout<< current<<endl;
        return ;
    }

    //Take
    sequence(s,current+s[index],index+1);
    //Not Take
    sequence(s,current,index+1);
    return;

}
int main()
{
    string s ;
    cout<<"Enter the string:";
    cin>>s;
    sequence(s,"",0);
    return 0;

}