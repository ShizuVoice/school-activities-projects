#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

void accessgranted();
int wrongpassword(int z);
void lockdown();

double main()
{
	clrscr();
	char ipass[15], rpass[15] = "defend";
	int x;
	
	for(x = 3; x >= 0; x--)
	{
		if(x > 0)
		{
			cout << "Enter the password: ";
			gets(ipass);
		
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

int wrongpassword(int z)
{
	cout << "Wrong password! You have " << z - 1;
	cout << " tries left." << endl << endl;
	return 0;
}

void lockdown()
{
	cout << "Account locked!" << endl;
}