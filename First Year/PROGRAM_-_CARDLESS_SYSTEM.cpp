#include<iostream.h>
#include<conio.h>

int main()
{
	char selection;
	float value, balance;
	int id, pin, tries = 4;
	
	//Initialization for the balance
	clrscr();
	cout << "Enter the value of balance for example: ";
	cin >> balance;
	
	//Main process
	clrscr();
	cout << "Bank de Ore Cardless Banking System" << endl << endl;
	cout << "Menu" << endl;
	cout << "(1) Withdraw Money" << endl;
	cout << "(2) Deposit Money" << endl;
	cout << "(3) Check Balance" << endl;
	cout << "(Any key) Logout" << endl << endl;
	cout << "Select a mode: ";
	cin >> selection;
	
	switch(selection)
	{
	case '1':
		clrscr();
		cout << "Bank de Ore Cardless Banking System" << endl << endl;
		cout << "Withdraw" << endl;
		cout << "Enter your 10-digit card number: ";
		cin >> id;
		cout << "Enter the amount you want to withdraw: ";
		cin >> value;
		while(tries >= 0) 
		{
			if(tries > 0)
			{
				cout << "Enter your 4-digit pin: ";
				cin >> pin;
				if ((pin <= 9999) && (pin >= 0))
				{
					if(value > balance)
					{
						cout << endl << "The entered value is bigger than your current balance!" << endl;
						break; 
					}
					else  
					{
						cout << endl << "Amount Withdrawn Successfully!" << endl;
						cout << "Your new balance is Php" << balance - value;
						break; 
					}
				}
				else
				{ 
					cout << endl << "Incorrect PIN! " << tries - 1 << " attempts left!" << endl;
				}
			}
			else 
			{
				cout << "Too many attempts! Account is Temporarily Disabled!!" << endl;
				break;
			}
			tries--;
		}
		break;
	case '2':
		clrscr();
		cout << "Bank de Ore Cardless Banking System" << endl << endl;
		cout << "Deposit" << endl;
		cout << "Enter your 10-digit card number: ";
		cin >> id;
		cout << "Enter the amount you want to deposit: ";
		cin >> value;
		while(tries >= 0) 
		{
			if(tries > 0)
			{
				cout << "Enter your 4-digit pin: ";
				cin >> pin;
				if ((pin <= 9999) && (pin >= 0))
				{
					if(value > 0)
					{
						cout << endl << "Amount Deposited Successfully!" << endl;
						cout << "Your new balance is Php" << balance + value;
						break; 
					}
					else  
					{
						cout << endl << "Error! Negative value is not allowed!" << endl;
						break; 
					}
  
				}
				else
				{ 
					cout << endl << "Incorrect PIN! " << tries - 1 << " attempts left!" << endl;
				}
			}
			else 
			{
				cout << "Too many attempts! Account is Temporarily Disabled!!" << endl;
				break;
			}
			tries--;
		}
		break;
	case '3':
		clrscr();
		cout << "Bank de Ore Cardless Banking System" << endl << endl;
		cout << "Check Balance" << endl;
		cout << "Enter your 10-digit card number: ";
		cin >> id;
		while(tries >= 0) 
		{
			if(tries > 0)
			{
				cout << "Enter your 4-digit pin: ";
				cin >> pin;
				if ((pin <= 9999) && (pin >= 0))
				{
					cout << endl << "Your current balance for this account is Php" << balance << endl;
					break;
				}
				else
				{ 
					cout << endl << "Incorrect PIN! " << tries - 1 << " attempts left!" << endl;
				}
			}
			else 
			{
				cout << "Too many attempts! Account is Temporarily Disabled!!" << endl;
				break;
			}
			tries--;
		}
		break;
	default:
		clrscr();
		cout << "Goodbye!";
	}
getch();
return 0;
}