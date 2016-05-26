#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

struct Accounts
{
	string user;
	int Password;
};

struct login
{
	string user;
	int password;
};

int main()
{
	struct Accounts Users[4];
	int Cash[4]={12000,11000,10000,9000};
	struct login log;
	bool flag=false,flag2=false;
	int i,Money[7]={500,1000,2000,5000,10000,15000,20000};
	Users[0].user="Ali";
	Users[0].Password=12345;
	Users[1].user="Adnan";
	Users[1].Password=54321;
	Users[2].user="Usman";
	Users[2].Password=55555;
	Users[3].user="Muneeb";
	Users[3].Password=1234;
	do{
	cout<<"Enter User Name : ";
	getline(cin,log.user);
	flag=false;
	for(i=0;i<4;i++)
	{
		if(log.user==Users[i].user)
		{
			flag=true;
			break;
		}
	}
	if(flag==false)
	{
		cout<<"Enter Correct User Name\n\n";
	}
	else
	{
		cout<<"Enter Pin Code : ";
		cin>>log.password;
		fflush(stdin);
		flag2=false;
			if(log.password!=Users[i].Password)
			{
				cout<<"Enter Correct Pin Code \n\n";
			}
			else
			{
				flag2=true;
			}
	}
	cout<<endl;
	}while(flag!=true||flag2!=true);
	cout<<"1----Withdraw Cash\n2----Deposit Cash\n3----Display Balance\n4----Exit\n\n";
	cout<<"Select One of the Above Option : ";
	int select;
	cin>>select;
	if(select==1)
	{
		char select1;
		cout<<"a) Fast Cash\nb) Normal Cash\n";
		cout<<"Please Select Mode of Withdrawal : ";
		cin>>select1;
		if(select1=='a')
		{
			int select2;
			char select3;
			cout<<"1----500\n2----1000\n3----2000\n4----5000\n5----10000\n6----15000\n7----20000\n";
			cout<<"Select one of the denominations of money : ";
			cin>>select2;
			if(Money[select2-1]<Cash[i]&&select2<=7&&select2>0)
			{
			cout<<"Are you sure you want to withdraw Rs : "<<Money[select2-1]<<" (Y/N)? : ";
			cin>>select3;
			if(select3=='y'||select3=='Y')
			{
				cout<<"Cash Successfully Withdrawn!\nDo you wish to print a receipt (Y/N)? : ";
				cin>>select3;
				if(select3=='y'||select3=='Y')
				{
					cout<<"Account Number #"<<i+1<<endl;
					cout<<"Withdrawn : "<<Money[select2-1]<<endl;
					cout<<"New Balance Rs : "<<Cash[i]-Money[select2-1]<<endl;
					Cash[i]-Money[select2-1];
				}
				else
				{
					cout<<"Exit";
				}
			}
			}
			else
			{
				if(select2>7||select2<0)
				{
					cout<<"You Entered Wrong Number \n";
				}
				if(Money[select2-1]>Cash[i])
				{
				cout<<"Enter Amount Less than Rs "<<Cash[i]<<endl;
				}
			}
		}
		else if(select1=='b')
		{
			int select4;
			cout<<"Enter a Withdrawal Amount : ";
			cin>>select4;
			if(select4>0&&select4<=Cash[i])
			{
				char select3;
				cout<<"Cash Successfully Withdrawn\n";
				cout<<"Do you want a reciept (Y/N)?";
				cin>>select3;
				if(select3=='y'||select3=='Y')
				{
					cout<<"Account Number #"<<i+1<<endl;
					cout<<"Withdrawn : "<<select4<<endl;
					cout<<"New Balance Rs : "<<Cash[i]-select4<<endl;
					Cash[i]=Cash[i]-select4;
				}
				else
				{
					cout<<"Exit";
				}
			}
			else
			{
				cout<<"Enter Amount less than Rs : "<<Cash[i];
			}
		}

	}
	else if(select==2)
	{
		int money;
		char chose;
		cout<<"Enter Amount to Deposit : ";
		cin>>money;
		Cash[i]+=money;
		cout<<"Cash Deposited Sucessfully\n";
		cout<<"Do you Wish to Print a Reciept (Y/N)? : ";
		cin>>chose;
		if(chose=='y'||chose=='Y')
		{
			cout<<"Acoount No #"<<i+1<<endl;
			cout<<"Deposited : "<<money<<endl;
			cout<<"New Balance : "<<Cash[i]<<endl;
		}
		else
		{
			cout<<"Exit";
		}
	}
	else if(select==3)
	{
		cout<<"Account NO #"<<i+1<<endl;
		cout<<"Balance : "<<Cash[i]<<endl;
	}
	else
	{
		cout<<"Exit";
	}

	getchar();
	getchar();
	return 0;
	
}
