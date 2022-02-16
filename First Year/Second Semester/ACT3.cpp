#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

void accessgranted();
int wrongpassword(int w);
void lockdown();

double main()
{
	clrscr();
	char ipass[10]="0", rpass[10] = "wysi727";
	int x, y;
	
	for(x = 3; x >=0; x--)
	{
		if(x > 0)
		{
			cout << "Enter the 7 alphanumerical password." << endl;
			cout << "Note that the program proceeds when the 7th " << endl;
			cout << "character is entered." << endl;
			
			for(y = 0; y < 7; y++)
			{
				ipass[y] = getch();
				cout << "*";
			}
	
			if(strcmp(ipass, rpass)==0)
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
	cout << endl << "Wrong password! You have " << w - 1;
	cout << " tries left." << endl << endl;
	return 0;
}

void lockdown()
{
	cout << "Account locked!" << endl;
}