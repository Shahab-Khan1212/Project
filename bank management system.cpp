#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

class bank{
 
 string name,add,y;
 int balance,password;
	public:
		void open_account();
		void deposite_money();
		void withdraw_money();
		void display_account();
};

void bank :: open_account(){
	
	cout<<"Enter your full name "<<endl;
	cin>>name;
	cout<<"Enter your address "<<endl;
	cin>>add;
	cout<<"Set password "<<endl;
	cin>>password;
	cout<<"what type of account you want to open Saving (s) Current (c) "<<endl;
	cin>>y;
	cout<<"Enter amount for deposit "<<endl;
    cin>>balance;
	cout<<"Your account is created "<<endl;
    }
void bank :: deposite_money(){
	
	int a,pass=0;
	cout<<"Enter password "<<endl;
	cin>>pass;
	if(pass==password){
	cout<<"Enter how much you deposit "<<endl;
	cin>>a;
    balance+=a;
	cout<<"Total ammount in your account "<<balance<<endl;	
	}
	else
	cout<<"Incorect password \a"<<endl;
	
	}
void bank :: display_account(){
	
	int pass=0;
	cout<<"Enter password "<<endl;
	cin>>pass;
	if(pass==password){
	cout<<"Your full name  \t\t\t::"<<name<<endl;
	cout<<"Your address  \t\t\t::"<<add<<endl;
	cout<<"Your password  \t\t\t::"<<password<<endl;
	cout<<"Type of account that you open  \t::"<<y<<endl;
	cout<<"Total amount in your account  \t::"<<balance;
    }
	else
	cout<<"Incorect password "<<endl;
	}
void bank :: withdraw_money(){
	
	float amount;
	int pass=0;
	cout<<"Enter password "<<endl;
	cin>>pass;
	if(pass==password){
	cout<<"Enter amount withdraw :: "<<endl;
	cin>>amount;
	if(amount<=balance){ 
	amount=balance-amount;	
	cout<<"Now total amount is left :: "<<amount<<endl;}
	else
	cout<<"Insufficient Balance"<<endl;
    }
	else
	cout<<"Incorect password "<<endl;
		}
			
int main(){
	
	int ch,x;
	bank obj;
do{	
    cout<<endl;
    cout<<"\t\t*WELCOME TO SAJ BANK*"<<endl;
    cout<<endl;
	cout<<"\t\t1) Open Account "<<endl;
	cout<<"\t\t2) Deposit Money "<<endl;
	cout<<"\t\t3) Withdraw Money "<<endl;
	cout<<"\t\t4) Display Account "<<endl;
	cout<<"\t\t4  Exit "<<endl;
    cout<<endl;
    
  //  cout<<endl;ect the option from above "<<endl;
	cin>>ch;
	
	switch(ch){
		
		case 1:
		cout<<"   OPEN ACCOUNT "<<endl;
		obj.open_account();
		break;
		case 2:
		cout<<"   DEPOSIT MONEY "<<endl;
		obj.deposite_money();
		break;
		case 3:
		cout<<"   WITHDRAW "<<endl;
		obj.withdraw_money();
		break;
		case 4:
		cout<<"   DISPLAY ACCOUNT "<<endl;
		obj.display_account();	
		break;
		case 5:
			if(ch==5){
				exit(1);
			}
	default:
	cout<<"This does not exist try again "<<endl;	
	}
	cout<<endl;
	cout<<"**********************************************"<<endl;
	cout<<endl;
	cout<<"do you want to select next option then press :: y"<<endl;
	cout<<"if you want to exit then press :: N \t"<<endl;
	cout<<endl;
	x=getch();
	if(x=='N'||x=='n')
	exit(0);
}
while(x=='y' || x=='Y');
	
	getch();
	return 0;
}
