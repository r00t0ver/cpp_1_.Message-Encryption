#include<iostream>1
#include<cstring>
#include<cmath>
#include<conio.h>
using namespace std;
string input()
{
    string str;
    getline(cin,str);
    return str;
}

string en101(string str)
{
    string message ;
    int i,j=19,s;
    message=str;
    s=message.length();
    for(i=0;i<s;i++)
    {
        message[i]=message[i]+j;
        j=j+13;
        

    }
    return message;
}
string de101(string str)
{
    string message;
    int i,j=19,s;
    message=str;
    s=message.length();
    for(i=0;i<s;i++)
    {
        message[i]=message[i]-j;
        j=j+13;
    }
    return  message;    
}
void dis()
{
    cout<<"\n1.Encrypt a message with 101"<<endl;
    cout<<"2.Decrypt a message with 101"<<endl;
    cout<<"3.Exit()"<<endl;
}