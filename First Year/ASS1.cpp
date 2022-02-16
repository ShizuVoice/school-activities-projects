#include<iostream.h>
#include<conio.h>

void main ()
{
	int number;
	clrscr();
	cout << "Is the number even or odd?" << endl;
	cout << "Enter a number: ";
	cin >> number;

	if(number % 2)
	{
		cout << "This is an odd number!";
	}
	else
	{
		cout << "This is an even number!";
	}
	
getch();
}