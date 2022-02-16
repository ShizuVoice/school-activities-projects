#include<iostream.h>
#include<conio.h>

void main ()
{
	double balance;
	clrscr();
	cout << "What is your credit balance as of now?" << endl;
	cin >> balance;
	
	if(balance >= 4000)
	{
		int checks_inquired;
		cout << "How many times did you inquire for a check?" << endl;
		cin >> checks_inquired;
		
		if(checks_inquired >= 60)
		{
			double balance, fee;
			cout << "Enter your credit balance again: ";
			cin >> balance;
			
			fee = balance * 0.04;
			
			cout << "Your service fee to the bank for this month is " << fee;
		}
		else if((checks_inquired >= 40) && (checks_inquired <= 59))
		{
			double balance, fee;
			cout << "Enter your credit balance again: ";
			cin >> balance;
			
			fee = balance * 0.06;
			
			cout << "Your service fee to the bank for this month is " << fee;
		}
		else if((checks_inquired >= 20) && (checks_inquired <= 39))
		{
			double balance, fee;
			cout << "Enter your credit balance again: ";
			cin >> balance;
			
			fee = balance * 0.08;
			
			cout << "Your service fee to the bank for this month is " << fee;
		}
		else if((checks_inquired >= 0) && (checks_inquired <= 19))
		{
			double balance, fee;
			cout << "Enter your credit balance again: ";
			cin >> balance;
			
			fee = balance * 0.1;
			
			cout << "Your service fee to the bank for this month is " << fee;
		}
		else
		{
			cout << "Invalid value" << endl;
			cout << "Cannot proceed";
		}
	}
	else if((balance >= 0) && (balance <= 3999))
	{
		int checks_inquired;
		cout << "Your balance is lower than 4000. This may incur extra charges for" << endl;
		cout << "today's check inquiry." << endl;
		cout << "How many times did you inquire for a check?" << endl;
		cin >> checks_inquired;
		
		if(checks_inquired >= 60)
		{
			double balance, fee;
			cout << "Enter your credit balance again: ";
			cin >> balance;
			
			fee = (balance * 0.15) * 0.04;
			
			cout << "Your service fee to the bank for this month is " << fee;
		}
		else if((checks_inquired >= 40) && (checks_inquired <= 59))
		{
			double balance, fee;
			cout << "Enter your credit balance again: ";
			cin >> balance;
			
			fee = (balance * 0.15) * 0.06;
			
			cout << "Your service fee to the bank for this month is " << fee;
		}
		else if((checks_inquired >= 20) && (checks_inquired <= 39))
		{
			double balance, fee;
			cout << "Enter your credit balance again: ";
			cin >> balance;
			
			fee = (balance * 0.15) * 0.08;
			
			cout << "Your service fee to the bank for this month is " << fee;
		}
		else if((checks_inquired >= 0) && (checks_inquired <= 19))
		{
			double balance, fee;
			cout << "Enter your credit balance again: ";
			cin >> balance;
			
			fee = (balance * 0.15) * 0.1;
			
			cout << "Your service fee to the bank for this month is " << fee;
		}
		else
		{
			cout << "Invalid value" << endl;
			cout << "Cannot proceed";
		}
	}
	else
	{
		cout << "This account is overdrawn!";
	}
	
getch();
}
