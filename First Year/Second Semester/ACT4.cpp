#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

void accessgranted();
int wrongpassword(int w);
void tma(); // short for Too Many Attempts
void lockdown();
void attempts();

double main()
{
	clrscr();
	char inputpass[9]="\0", buffer[9]="\0", realpass[9]="\0";
	int x, y;
	
	//Creating password
	for(x = 3; x >= 0; x--)
	{
		if(x > 0)
		{
			cout << "Enter your new 8 alphanumeric password..." << endl;
			
			for(y = 0; y < 8; y++)
			{
				realpass[y] = getch();
				cout << "*";
			}
			cout << endl << "Enter your new 8 alphanumeric password again..." << endl;
			for(y = 0; y < 8; y++)
			{
				buffer[y] = getch();
				cout << "*";
			}
			
			if(strcmp(realpass, buffer)==0)
			{
				clrscr();
				cout << "Password saved!" << endl;
				cout << "Press enter to continue..." << endl;
				getch();
				break;
			}
			else
			{
				clrscr();
				cout << "Password did not matched!" << endl;
				cout << "You have " << x - 1 << " tries left." << endl;
			}
		}
		else
		{
			attempts();
			return 0;
		}
	}
	
	//Login
	for(x = 3; x >=0; x--)
	{
		if(x > 0)
		{
			cout << "Enter your 8 alphanumeric password" << endl;
			for(y = 0; y < 8; y++)
			{
				inputpass[y] = getch();
				cout << "*";
			}
	
			if(strcmp(inputpass, realpass)==0)
			{
				accessgranted();
				break;
			}
			else
			{
				wrongpassword(x);
			}
		}
		else
		{
			lockdown();
		}
	}
	
	getch();
	return 0;
}

void accessgranted()
{
	clrscr();
	cout << "Welcome SilentVOEZ" << endl;
}

int wrongpassword(int w)
{
	clrscr();
	cout << "Wrong password! You have test " << w - 1;
	cout << " tries left." << endl;
	return 0;
}

void attempts()
{
	clrscr();
	cout << "You have tried too many times." << endl;
	cout << "Please try again later." << endl;
	getch();
}

void lockdown()
{
	cout << "Account locked!" << endl;
}
