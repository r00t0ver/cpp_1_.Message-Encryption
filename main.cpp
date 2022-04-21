#include<iostream>
#include<cstring>
#include<cmath>
#include<conio.h>
#include"header.h"
using namespace std;


int main()
{
    string str;
    int choice;
    do{
    dis();
    cin>>choice;
    system("cls");
    
    if(choice==1)
    {
        string str1;
        
        cout<<"\nEnter a Message:";
        input();
        str1=input();
        system("color c");
        cout<<"Encrypted form is :";
        cout<<en101(str1)<<endl;
    }
    else if(choice==2)
    {
        string str2;
        cout<<"\nEnter Encrypted Message   :";
        input();
        str2=input();
        system("color a");
        cout<<"Decrypted form is         :";
        cout<<de101(str2)<<endl;
    }
    else if(choice!=1&&choice!=2&&choice!=3){cout<<"\nInvalid choice";}
    else {cout<<"Program Exit";}
    }while(choice!=3);

    return 0;
}