#include<iostream.h>
#include<conio.h>

void main ()
{
	char choice;
	clrscr();
	cout << "Length Conversion" << endl;
	cout << "" << endl;
	cout << "Select the mode of conversion" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "1 - Inches to Feet" << endl;
	cout << "2 - Inches to Meters" << endl;
	cin >> choice;
	
	switch(choice)
	{
	double number, result;
	case '1':
		clrscr();
		cout << "Enter the length in inches: ";
		cin >> number;
		result = number / 12;
		cout << "The converted length from inches to feet is " << result;
		break;
	case '2':
		clrscr();
		cout << "Enter the length in inches: ";
		cin >> number;
		result = number / 39.97;
		cout << "The converted length from inches to meters is " << result;
		break;
	default:
		cout << "Invalid input"; 
	}
getch();
}