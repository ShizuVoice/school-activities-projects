#include<iostream.h>
#include<conio.h>

void main ()
{
	char choice;
	clrscr();
	cout << "Library Management System" << endl;
	cout << endl;
	cout << "Main Menu" << endl;
	cout << endl;
	cout << "[1] Borrow Books" << endl;
	cout << "[2] Return Books" << endl;
	cout << "[Any key] Exit" << endl;
	cout << endl;
	cout << "Select a mode: ";
	cin >> choice;
	
	if(choice == '1')
	{
		clrscr();
		double bookid, memberid, issuedate[3], duedate[3];
		cout << "Borrow Book" << endl;
		cout << endl;
		cout << "Enter Book ID: ";
		cin >> bookid;
		cout << "Enter Member ID: ";
		cin >> memberid;
		cout << "Enter Current Date (mm dd yyyy): ";
		for (int i = 0; i < 3; ++i){
			cin >> issuedate[i];
		}
		cout << "Enter Due Date (mm dd yyyy): ";
		for (int j = 0; j < 3; ++j){	
			cin >> duedate[j];
		}
		// Display result
		clrscr();
		cout << "Borrow Book - Transaction Approved" << endl;
		cout << endl;
		cout << "Book ID: " << bookid << endl;
		cout << "Member ID: " << memberid << endl;
		cout << "Issued Date: ";
		for (int n = 0; n <3; ++n){
			cout << issuedate[n] << " ";
		}
		cout << endl;
		cout << "Due Date: ";
		for (int o = 0; o < 3; ++o){
			cout << duedate[o] << " ";
		}
		cout << endl << endl;
		cout << "Please be sure that the book will return earlier than the" << endl;
		cout << "due date or in time." << endl;
		cout << "Each due day have a fine according to the rate." << endl;
		cout << endl;
		cout << "Have a nice day!";
	}
	else if(choice == '2')
	{
		clrscr();
		double bookid, memberid, issueddate [3], duedate[3], daysdue, rate;
		cout << "Return Book" << endl;
		cout << endl;
		cout << "Enter Book ID: ";
		cin >> bookid;
		cout << "Enter Member ID: ";
		cin >> memberid;
		cout << "Enter Issued Date (mm dd yyyy): ";
		for (int i = 0; i < 3; ++i){
			cin >> issueddate[i];
		}
		cout << "Enter Due Date (mm dd yyyy): ";
		for (int j = 0; j < 3; ++j){	
			cin >> duedate[j];
		}
		cout << "Enter the amount of days due: ";
		cin >> daysdue;
		cout << "Enter the fine rate: ";
		cin >> rate;
		// Display result
		clrscr();
		cout << "Return Book - Transaction Approved" << endl;
		cout << endl;
		cout << "Book ID: " << bookid << endl;
		cout << "Member ID: " << memberid << endl;
		cout << "Issued Date: ";
		for (int n = 0; n < 3; ++n){
			cout << issueddate[n] << " ";
		}
		cout << endl;
		cout << "Due Date: ";
		for (int o = 0; o < 3; ++o){
			cout << duedate[o] << " ";
		}
		cout << endl << endl;
		cout << "Number of days due: " << daysdue << endl;
		cout << "Fine Rate: Php" << rate << endl;
		cout << "Total Fine: Php" << daysdue * rate << endl;
		cout << endl;
		cout << "Please pay the fine if you have gone over the due date." << endl;
		cout << "Thank you for your cooperation." << endl;
		cout << endl;
		cout << "Have a nice day!";
	}
	else
	{
		clrscr();
		cout << "Good bye!";
	}
getch();
}