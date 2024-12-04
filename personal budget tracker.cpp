#include<iostream>
using namespace std;
int main(){
	double expense , income , balance=1000.0;
	int choice;
	do{
		cout<<"..BUDGET MENU...\n";
		cout<<"1-Add Income \n";
		cout<<"2-Add Expense\n";
		cout<<"3-View Balance\n";
		cout<<"4-Exit\n";
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		cout<<"Enter your balance"<<endl;
		
	switch(choice)	{
		case 1 :
			cout<<"Enter your income"<<endl;
			cin>>income;
		if(income<=0){
			cout<<"Error: ENTER POSITIVE NUMBER"<<endl;
		}else{
		
		 income+=balance;
		cout<<"Your current income is $ "<<income<<endl;
	}continue;
	case 2 :
		cout<<"Enter your Expense"<<endl;
		cin>>expense;
	if(expense>balance)	{
		cout<<"Insufficient balance for this expense"<<endl;
	}else if (expense<=0){
		cout<<"Error: Enter positive number"<<endl;
	}else {
		 expense-=balance;
		 cout<<"Your total expense is "<<expense<<endl;
	}	continue;
	case 3:
		balance=income-expense;
		cout<<"Your current balance is $"<<balance<<endl;
	case 4 :
		cout<<"...EXITING"<<endl;
		break;
	}
	}while(choice!=4);
	return 0;
}
