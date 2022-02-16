#include<iostream.h>
#include<conio.h>

void main ()
{
	int choice;
	clrscr();
	cout << "What is the round total sale for today?" << endl;
	cin >> choice;
	
	if(choice >= 10000)
	{
		double total_sale, total_income;
		clrscr();
		cout << "The interest rate for the total sale is 10%" << endl;
		cout << "Enter the exact amount of total sale: ";
		cin >> total_sale;
		
		total_income = total_sale * 0.1;
		cout << "The interest of the total sale is " << total_income;
	}
	else if((choice >= 5000) && (choice <= 9999))
	{
		double total_sale, total_income;
		clrscr();
		cout << "The interest rate for the total sale is 5%" << endl;
		cout << "Enter the exact amount of total sale: ";
		cin >> total_sale;
		
		total_income = total_sale * 0.05;
		cout << "The interest of the total sale is " << total_income;
	}
	else if((choice >= 3000) && (choice <=4999))
	{
		double total_sale, total_income;
		clrscr();
		cout << "The interest rate for the total sale is 3%" << endl;
		cout << "Enter the exact amount of total sale: ";
		cin >> total_sale;
		
		total_income = total_sale * 0.03;
		cout << "The interest of the total sale is " << total_income;
	}
	else
	{
		double total_sale, total_income;
		clrscr();
		cout << "The interest rate for the total sale is 2%" << endl;
		cout << "Enter the exact amount of total sale: ";
		cin >> total_sale;
		
		total_income = total_sale * 0.02;
		cout << "The interest of the total sale is " << total_income;
	}
	
getch();
}