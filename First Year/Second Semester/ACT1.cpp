#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

int accessgranted(int x);
void accessdenied();

double main()
{
	char pass[15], rpass[15] = "S1l3nt";
	int loop = 1;
	// rpass holds the hard-coded password for this program
	
	clrscr();
	
	cout << "Enter the password: ";
	gets(pass);
	
	if(strcmp(pass, rpass)==0)
	{
		accessgranted(loop);
	}
	else
	{
		accessdenied();
	}
	getch();
	return 0;
}

int accessgranted(int x)
{
	clrscr(); // Clears the previous user input to prevent snooping
	cout << "Welcome SilentVOEZ" << endl;
	
	for(x; x!=3; x++)
	{
		cout << x << endl;
	}
	
	return 0;
}

void accessdenied()
{
	cout << "Wrong Password! Program terminated.";
}