#include<iostream.h>
#include<conio.h>

void main ()
{
	char choice;
	clrscr();
	cout << "Federal Income Tax" << endl;
	cout << " " << endl;
	cout << "Type '1' if you want to know your income." << endl;
	cout << "including taxes as a single individual." << endl;
	cout << "Type '2' if you want to know your income" << endl;
	cout << "including taxes as a married individual." << endl;
	cin >> choice;

	if(choice == '1')
	{
		clrscr();
		double income_s, income_w_tax_s;
		cout << "What is your income without tax?" << endl;
		cin >> income_s;
		
		income_w_tax_s = 2158.50 + (0.31 * (income_s - 4300));
		
		cout << "Your income with tax as a single individual is " << income_w_tax_s;
	}
	else if(choice == '2')
	{
		clrscr();
		double income_m, income_w_tax_m;
		cout << "What is your income without tax?" << endl;
		cin >> income_m;
		
		income_w_tax_m = 5100 + (0.28 * (income_m - 3400));
		
		cout << "Your income with tax as a married individual is " << income_w_tax_m;
	}
	else
	{
		clrscr();
		cout << "Please type '1' or '2' in the beginning." << endl;
		cout << "Run the program again to start calculating" << endl;
		cout << "your own income.";
	}
	
getch();
}