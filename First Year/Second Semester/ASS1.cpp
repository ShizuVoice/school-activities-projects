#include<iostream.h>
#include<conio.h>

int main ()
{
	int a, b;
	clrscr();
	cout << "Type a number for the value of A: ";
	cin >> a;
	cout << "Type a number for the value of B: ";
	cin >> b;
	cout << "I see, I'll look these two numbers." << endl;
	
	if(a > b || b > a)
	{
		cout << "I'll switch these two numbers from A to B and vice versa." << endl;
		cout << "New value of A: " << b << endl;
		cout << "New value of B: " << a << endl;
	}
	else
	{
		cout << "Uhh, it looks like they are the same value." << endl;
		cout << "No need for me to switch these numbers.";
	}
	
getch();
}