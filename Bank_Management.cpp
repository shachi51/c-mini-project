#include<bits/stdc++.h>

using namespace std;
class bank
{
          char name[100];
          char add[100];
          char type;
          int balance=0;
    public:
         void open_account();
         void deposite_money();
         void withdraw_money();
         void display_account();
};

   void bank::open_account()
   {
  		cout<< "Enter your full name  :: ";
        cin.ignore();
       	cin.getline(name,100);
        cout<<"\n Enter your address :: ";
        cin.ignore();
       	cin.getline(add,100);
      	cout<<"\n What type of account you want to open Saving(s) or Current(c) \n";
        cin>> type;
        if(type!='s'|| type!='c')
        cout<<"enter a valid choice"<<endl;
        cin>>type;
        cout<<"Enter amount to deposit";
        cin>> balance;
        cout<<"\n Your account is created\n ";
    }
    void bank::display_account()
	{
 		cout<<" Your full name::\t"<<name;
 		cout<<"\n Your address:: \t"<<add;
		cout<<"\n Type of account:: \t"<<type;
		cout<<"\n Initial amount you deposited ::"<< balance;
    }
    void bank::deposite_money()
    {
        char q;
        int a;
      	cout<<"Enter how much you deposit :: ";
        cin>>a ;
        balance+=a;
        cout<<"\n Total amount you deposit :: \t"<<balance;
    }

    void bank::withdraw_money()
    {
	    float amount,b;
        cout<< "\n Withdraw: ";
        cout<< "\n Enter amount to Withdraw :: ";
    	cin>>amount;
        balance-=amount;
        cout<< "Total amount left:: "<< balance;
     }

int main()
{
    int ch;
    bank obj;
    char n,x;
  do
  {
 cout<<"\n1) Open an account \n";
 cout<<"2)Deposit money \n";
 cout<<"3) Withdraw money \n";
 cout<<"4) Display account \n";
 cout<<"5) exit\n";
 cout<<"Select the option from above \n";
 cin>>ch;
 system("cls");
 switch(ch)
 {
  case 1:
    cout<<"1) Open account \n";

    obj.open_account();
    break;

    case 2:
        cout<<"2) Deposit money \n";
        obj.deposite_money();
          break;
    case 3:
  		cout<<"3) Withdraw money \n";
  		obj.withdraw_money() ;
		break;
	case 4:
		 cout<<"4) Display account \n";
 		obj.display_account();
		break;
	case 5:
    if(ch==5)
     {
        exit(1);
       }

	default:
        cout<<"This is not exist try again \n";
    }

 	cout<<"\n Do you want select next option then press :: Y \n";
 	cout<<"\n If you want to exit then press:: N ";
  	cin>>x;
 	if(x=='n'||x=='N')
  	exit(0);
    }while(x=='y'||x=='Y');
	return 0;
}

