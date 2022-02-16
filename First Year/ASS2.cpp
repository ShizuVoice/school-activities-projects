#include<iostream.h>
#include<conio.h>

void main ()
{
	char character;
	clrscr();
	cout << "Height converter" << endl;
	cout << "Type 'f' if you want to convert from inches to feet," << endl;
	cout << "or type any character to convert from inches to meters." << endl;
	cin >> character;

	if(character == 'f')
	{
		double original_height_f, converted_height_f;
		cout << "Type the height in inches: ";
		cin >> original_value_f;
		
		converted_height_f = original_height_f / 12;
		
		cout << "The converted value from inches to feet is " << converted_height_f;
	}
	else
	{
		double original_height_m, converted_height_m;
		cout << "Type the height in inches: ";
		cin >> original_height_m;
		
		converted_value_m = original_height_m / 39.37;
		
		cout << "The converted value from inches to meters is " << converted_height_m;
	}
	
getch();
}