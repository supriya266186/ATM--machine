#include <iostream>
using namespace std;
float balance=0;
int anttransaction;
void transaction(){ int choice ;
cout<<"                          "<<"WELCOME TO THE CODEBANK ATM !"<<endl<<endl<<endl;
cout<<"select your preferred choices :- "<<endl;
cout<<"1.withdrawal"<<"                    "<<"2.change ATM pin"<<endl;
cout<<"3.Deposit"<<"                       "<<"4.Balance"<<endl;
cout<<">>";
cin>>choice;
int withdraw;
float acblnc;
int mobno;
int otp;
int pin;

float depositamt;
switch(choice){

case 1:
    //withdraw
    cout<<"Only Rs.500 and  Rs.2000 notes available."<<endl<<endl;

    cout<<" Please enter the amount  you want to withdraw: ";
    cin>>withdraw;



    if(withdraw>acblnc){
        cout<<"There is no sufficient funds in your account" <<endl;
        cout<<"Do you want another transaction ? \n press 1 to proceed and 2 to exit" <<endl;
        cout<<">>";
        cin>>anttransaction;
        if(anttransaction==1)
            transaction();

    }
    else{
        balance -=withdraw;
        cout<<"you have withdrawn "<<withdraw<<".00 and your balance is Rs."<<balance<<endl;
        cout<<"Do you want transaction ?\n press 1 proceed and press 2 to exit"<<endl;
        cout<<">>";
        cin>>anttransaction;
        if(anttransaction==1)
        transaction();
        break;
    }


case 2:
    cout<<"change your ATM pin"<<endl<<endl;
    cout<<"Enter your mobile number to receive OTP: "<<endl;
    cin>>mobno;
    cout<<"Enter the otp: "<<endl;
    cin>>otp;
    cout<<"Enter new ATM pin: ";
    cin>>pin;
    cout<<"Press 1 to continue"<<endl;
    cout<<">>";
    //
case 3:
    //deposit

    cout<<"\nPlease enter amount to deposit: ";
    cin>>depositamt;
    balance+=depositamt;
    cout<<"Thank you for depositing , new balance is  Rs. "<<balance<<endl;
    cout<<"Do you want another transaction ?\n Press 1 to proceed and Press 2 to exit."<<endl;
    cout<<">>";
    cin>>anttransaction;
    if(anttransaction==1)
    transaction();
    break;
case 4:
        cout<<"your account balance is: "<<balance<<endl;
        cout<<"Do you want another transaction ?\n Press 1 to proceed and 2 to exit\n"<<endl;
        cout<<">>";
        cin>>anttransaction;
        if(anttransaction==1)
            transaction();
        break;

}
}
int main()
{

    transaction();
    return 0;
}
