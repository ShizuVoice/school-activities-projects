#include<iostream.h>
#include<conio.h>

void main ()
{
	int Year, a;
	clrscr();
	cout << "Enter a Year: ";
	cin >> Year;
	
	a = Year % 4;


	if(a == 0)
	{
		cout << "It's a Leap Year";
	}
	else
	{
		cout << "It's an ordinary year";
	}
	
getch();
}