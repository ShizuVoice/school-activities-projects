#include<iostream.h>
#include<conio.h>

void main ()
{
	int W, X, Y, Z;
	clrscr();
	cout << "Enter X: ";
	cin >> X;
	cout << "Enter Y: ";
	cin >> Y;
	cout << "Enter Z: ";
	cin >> Z;
	
	W = (X + Y + Z) / 3;


	if(W < 75)
	{
		cout << "Unsuccessful!" << endl;
	}
	else
	{
		cout << "Fruitful" << endl;
	}
	
	cout << "The value of W is " << W;
	
getch();
}