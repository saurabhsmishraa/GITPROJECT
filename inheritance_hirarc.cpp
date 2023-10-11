#include<iostream>
#include<cstring>
using namespace std;


//base class
class Account{
    int acno;
    char name[20];

    public:
    void getAccount(){
        cout<< "enter account number"<<endl;
        cin>>acno;
       cout<< "enter name"<<endl;
       cin>>name;

    }
    void putAccount(){
        cout<<"Acno = " <<acno<<endl;
        cout<<"Name = " <<name<<endl;
    }
};


//derive class

class Saving: public Account{
    float bal;
    public:
    void getBalance(){
        cout<<"enter balance"<<endl;
        cin>>bal;
        if(bal < 500)
        cout<<"min balance 500";
        else
        cout<<"account created";
    }
};

//derive class

class Current: public Account{
float bal;
public:
void getBalance(){
    cout<<"enter balance";
    cin>>bal;
if(bal < 1000)
cout<<"min balance 1000";
else
cout<<"account created";


}
};

int main(){
    int option;
    cout<<"1. Saving A/C\n";
    cout<<"2. Current A/C\n";
    cout<<"enter your option";
    cin>> option;

    if(option == 1){
        Saving s;
        s.getAccount();
        s.getBalance();
}
        else if(option == 2)
        {
        Current c;
        c.getAccount();
        c.getBalance();
        }
    else
    cout<<"invalid selection";
    return 0;
}
