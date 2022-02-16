#include<iostream.h>
#include<conio.h>
int main( )
{
	clrscr();
	int J, dins, J1, mus = 0;
	cout << "Input number of terms:" ;
	cin >> dins;
	for(J=1; J<=dins; J++)
	{
		J1 = J * J * J;
		cout << "Number is: " << J;
		cout << " and Cube of the " << J << " is " << J1 << endl;
	}
	
	J=1;
	cout << endl << "The usual " << dins << " figures are" << endl;
	cout << "mus: " << mus << endl;
	
	do
	{
		cout << J ;
		mus += J;
		cout << " --- " << mus << " ";
		J++;
	} while (J <= 5);
	cout << endl << "The Total of Usual numbers upto " << dins << " terms is " << mus;
	getch();
return 0;
}