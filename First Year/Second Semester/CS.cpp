#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>

void notice();
int wrongpassword(int w);
void lockdown();
void menudisplay();
void prices();
void cancelled();
void attempts();
void exit();

double main()
{
	clrscr();
	notice();
	char input[9]="0", buffer1[9]="0", buffer2[9]="0", pospass[9]="pekomiko";
	int a, b, c, x, y;
	int choice1, choice2;
	double item = 0, quantity = 0, bill = 0;
	
	clrscr();
	for(a = 3; a >=0; a--)
	{
		if(a > 0)
		{
			cout << "Enter your 8 alphanumeric password" << endl;
			for(c = 0; c < 8; c++)
			{
				input[c] = getch();
				cout << "*";
			}
	
			if(strcmp(input, pospass)==0)
			{
				break;
			}
			else
			{
				wrongpassword(a);
			}
		}
		else
		{
			lockdown();
			return 0;
		}
	}
	
	for(a = 50; a >= 0; a--)
	{
		clrscr();
		menudisplay();
		cout << "Choose a number: ";
		cin >> choice1;
		
		if(choice1 == 1)
		{
			prices();
			cout << endl;
			cout << "Press any key to go back to main menu..." << endl;
			getch();
		}
		else if(choice1 == 2)
		{
			prices();
			cout << "Enter item #: ";
			cin >> item;
			cout << "Enter quantity: ";
			cin >> quantity;
			
			//Menu pricing array
			int prices[16];
			int i;
			i = item - 1;
			
			prices[0] = 10;
			prices[1] = 15;
			prices[2] = 15;
			prices[3] = 35;
			prices[4] = 35;
			prices[5] = 15;
			prices[6] = 18;
			prices[7] = 20;
			prices[8] = 30;
			prices[9] = 15;
			prices[10] = 20;
			prices[11] = 25;
			prices[12] = 5;
			prices[13] = 5;
			prices[14] = 7;
			prices[15] = 9;
			
			bill = prices[i] * quantity;
			
			clrscr();
			cout << "POS System - Quicc Snacc Bar" << endl;
			cout << endl;
			cout << "Order taken." << endl;
			cout << "Would you proceed to transaction?" << endl;
			cout << "Press '1' for Yes" << endl;
			cout << "Press from '2' to '9' for No" << endl;
			cin >> choice2;
		
			if(choice2 == 1)
			{
				for(x = 3; x >= 0; x--)
				{
					if(x > 0)
					{
						cout << endl;
						cout << "Enter password to confirm transaction." << endl;
						
						for(y = 0; y < 8; y++)
						{
							input[y] = getch();
							cout << "*";
						}
						
						if(strcmp(input, pospass)==0)
						{
							clrscr();
							cout << "POS System - Quicc Snacc Bar" << endl;
							cout << endl;
							cout << "---------------------------------" << endl;
							cout << "Quicc Snacc Bar - Order Receipt" << endl;
							cout << endl;
							cout << "Item: #" << item << endl;
							cout << "Quantity: " << quantity << endl;
							cout << "Total: P" << bill << endl;
							cout << endl;
							cout << "Have a good day!" << endl;
							cout << "---------------------------------" << endl;
							cout << endl;
							cout << "System: Transaction successful." << endl;
							cout << "Press any key to go back to main menu..." << endl;
							getch();
							break;
						}
						else
						{
							wrongpassword(x);
						}
					}
					else
					{
						attempts();
						getch();
						break;
					}
				}
			}
			else
			{
				cancelled();
				getch();
			}
		}
		else if(choice1 == 3)
		{
			for(x = 3; x >= 0; x--)
			{
				if(x > 0)
				{
					clrscr();
					cout << "Enter old password: ";
					for(y = 0; y < 8; y++)
					{
						input[y] = getch();
						cout << "*";
					}
					cout << endl;
					cout << "Enter new 8 character password: ";
					for(y = 0; y < 8; y++)
					{
						buffer1[y] = getch();
						cout << "*";
					}
					cout << endl;
					cout << "Enter new 8 character password again: ";
					for(y = 0; y < 8; y++)
					{
						buffer2[y] = getch();
						cout << "*";
					}
					if(strcmp(input, pospass)==0)
					{
						if(strcmp(buffer1, buffer2)==0)
						{
							clrscr();
							cout << "Password changed successfully." << endl;
							cout << "Press any key to go back to main menu..." << endl;
							strcpy(pospass, buffer2);
							getch();
							break;
						}
						else
						{
							clrscr();
							cout << "New password did not matched." << endl;
							cout << "You have " << x - 1 << " tries left." << endl;
							cout << "Press any key to continue..." << endl;
							getch();
						}
					}
					else
					{
						clrscr();
						cout << "Old password is not correct." << endl;
						cout << "You have " << x - 1 << " tries left." << endl;
						cout << "Press any key to continue..." << endl;
						getch();
					}
				}
				else
				{
					clrscr();
					cout << "You tried changing password wrong many times." << endl;
					cout << "You will be moved back to the main menu." << endl;
					cout << "Press any key to continue..." << endl;
					getch();
				}
			}
		}
		else if(choice1 == 4)
		{
			exit();
			return 0;
		}
		else
		{
			cout << endl << "System: No such mode for the selected character/number." << endl;
			cout << "Press any key to continue.";
			getch();
		}
	}
	clrscr();
	
	cout << "System: You have reached the maximum transaction for" << endl;
	cout << "this session. Please run the POS software again." << endl;
	getch();
	return 0;
}

void notice()
{
	cout << "The program's default password is" << endl;
	cout << "pekomiko" << endl;
	cout << "Press any key to continue...";
	getch();
}

int wrongpassword(int w)
{
	clrscr();
	cout << "Wrong password! You have " << w - 1;
	cout << " tries left." << endl;
	return 0;
}

void lockdown()
{
	cout << "POS System Locked!" << endl;
	getch();
}

void menudisplay()
{
	cout << "POS System - Quicc Snacc Bar" << endl;
	cout << endl;
	cout << "Menu" << endl;
	cout << "1. Item Prices" << endl;
	cout << "2. Take Order" << endl;
	cout << "3. Change POS Password" << endl;
	cout << "4. Exit" << endl;
}

void prices()
{
	clrscr();
	cout << "POS System - Quicc Snacc Bar" << endl;
	cout << endl;
	cout << "Items                   Price" << endl;
	cout << "--Drinks--" << endl;
	cout << "1. Water                P10" << endl;
	cout << "2. Coca Cola Mismo      P15" << endl;
	cout << "3. Pepsi Mismo          P15" << endl;
	cout << "4. Coca Cola 1L         P35" << endl;
	cout << "5. Pepsi 1L             P35" << endl;
	cout << "--Foods--" << endl;
	cout << "6. Hotdog               P15" << endl;
	cout << "7. Hamburger            P18" << endl;
	cout << "8. Cheeseburger         P20" << endl;
	cout << "9. Deluxe Burger        P30" << endl;
	cout << "10. Fries Medium        P15" << endl;
	cout << "11. Fries Large         P20" << endl;
	cout << "12. Spaghetti           P25" << endl;
	cout << "--Extra--" << endl;
	cout << "13. Ice                 P5" << endl;
	cout << "14. Ketchup             P5" << endl;
	cout << "15. Hotdog Extra        P7" << endl;
	cout << "16. Burger Extra        P9" << endl;
}

void cancelled()
{
	cout << "System: Order cancelled...";
}

void attempts()
{
	cout << "System: You have too many tries to attempt." << endl;
	cout << "Order cancelled and moving back to main menu." << endl;
	cout << "Press any key to continue..." << endl;
}

void exit()
{
	clrscr();
	cout << "POS System - Quicc Snacc Bar" << endl;
	cout << endl;
	cout << "Goodbye!" << endl;
	getch();
}