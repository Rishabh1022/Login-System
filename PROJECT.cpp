//login page using c++
#include<iostream>
using namespace std;

int step1;
string username,pass,Lusername,Lpass;
char forgot;
//username & pass- saved username & pass
//Lusername &Lpass - to check while login

int registration()
{    
    cout<<"\nREGISTRAION:\nEnter username ";    
    cin>>username;
    cout<<"Enter pass ";
    cin>>pass;
    //after reg
    cout<<"You have registered successfully!\n";
}

int table()
{
    int n,i;//local variable
    cout<<"\nEnter the Number to generate table ";
    cin>>n;
    for( i=n;i<=n*10;i+=n)
    {
        cout<<i<<endl;       
    }
}

void login()
{   
    cout<<"\nLOGIN:\nEnter username ";
    cin>>Lusername;
    cout<<"Enter pass ";
    cin>>Lpass;
    if(Lpass==pass && Lusername==username)
    {
        cout<<"Logged in Successfully!";
        table();
    }
    else if(Lpass!=pass && Lusername!=username)
    {
        cout<<"Wrong Pass\nDo you want to try again? ( y / n )";
        cin>>forgot;
        if(forgot=='y'){
            login();
        }
        else if(forgot=='n'){
        }
    }
}

void home()
{
    //welcome display
    cout<<"\n\n--------WELCOME TO MATHS TEKDI--------\t\t\n";
    cout<<"To start you have to login to our TEKDI\n\t1.Registration\n";
    cout<<"\t2.Login\n\n";

    cout<<"\tEnter 1 for Registration\n";
    cout<<"\tEnter 2 Login\n=";
    cin>>step1;
    
    if(step1==1)
    {registration();}
    else if(step1==2)
    {login();}
}

int main()
{
    home();
    //after registration
    home();
}