#include<iostream.h>
#include<conio.h>

void main ()
{
	char choice;
	clrscr();
	cout << "Computer Programming Activity" << endl;
	cout << "" << endl;
	cout << "MAIN MENU" << endl;
	cout << "" << endl;
	cout << "[1] - Machine Problem 1 (Lesson 6)" << endl;
	cout << "[2] - Fat Gram (Lesson 7)" << endl;
	cout << "[3] - Machine Problem 2 (Lesson 7)" << endl;
	cout << "[4] - Problem 1 (Lesson 8)" << endl;
	cout << "[5] - Machine Problem 3 (Lesson 8)" << endl;
	cout << "" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	
	switch(choice)
	{
	case '1':
		clrscr();
		cout << "Machine Problem 1 (Lesson 6)" << endl;
		cout << "" << endl;
		cout << "Create a program that will compute and display the FEDERAL" << endl;
		cout << "INCOME TAX using the formulas:" << endl;
		cout << "" << endl;
		cout << "Single Status Tax:" << endl;
		cout << "   2158.50 + (31% * ((income - 4300))" << endl;
		cout << "Married Status Tax:" << endl;
		cout << "   5100 + (28% * ((income - 3400))" << endl;
		cout << "" << endl;
		cout << "If the user request is 1 compute for the Single Status Tax" << endl;
		cout << "and if it is 2 then compute the Married Status Tax." << endl;
		cout << "" << endl;
		cout << "You need to:" << endl;
		cout << "a. Make an IPO Model" << endl;
		cout << "b. Draw the Flowchart" << endl;
		cout << "c. Encode the Source Code" << endl;
		break;
	case '2':
		clrscr();
		cout << "Fat Gram (Lesson 7)" << endl;
		cout << "" << endl;
		cout << "Write a program that asks for the number of calories and" << endl;
		cout << "fat grams in a food. The program should display the percentages" << endl;
		cout << "of calories that come from fat. If the calories that come from" << endl;
		cout << "fat are less than 30 percent of the total calories of the food," << endl;
		cout << "it should also display a message idicating the food is low in fat." << endl;
		cout << "" << endl;
		cout << "One gram of fat has 9 calories." << endl;
		cout << "   Calories from Fat = Fat Grams * 9" << endl;
		cout << "The percent of calories from fat can be calculated as: " << endl;
		cout << "   (Calories from Fat / Total Calories) * 100" << endl;
		cout << "" << endl;
		cout << "Input validation: The program should make sure that the number of" << endl;
		cout << "calories is greater than 0, the number of fat grams is 0 or more" << endl;
		cout << "and the number of calories is not greater than the number of" << endl;
		cout << "calories." << endl;
		cout << "" << endl;
		cout << "You need to:" << endl;
		cout << "a. Make an IPO Model" << endl;
		cout << "b. Draw the Flowchart" << endl;
		cout << "c. Encode the Source Code" << endl;
		break;
	case '3':
		clrscr();
		cout << "Machine Problem 2 (Lesson 7)" << endl;
		cout << "" << endl;
		cout << "Create a program base on the table below and display corresponding" << endl;
		cout << "equivalent." << endl;
		cout << "Grade    Equivalent" << endl;
		cout << "97-100   1.0" << endl;
		cout << "94-96    1.25" << endl;
		cout << "91-93    1.50" << endl;
		cout << "88-90    1.75" << endl;
		cout << "85-87    2.0" << endl;
		cout << "82-84    2.25" << endl;
		cout << "79-81    2.50"	<< endl;
		cout << "76-78    2.75" << endl;
		cout << "75       3.0" << endl;
		cout << "73-74    4.0" << endl;
		cout << "70-72    5.0" << endl;
		cout << "" << endl;
		cout << "You need to:" << endl;
		cout << "a. Make an IPO Model" << endl;
		cout << "b. Draw the Flowchart" << endl;
		cout << "c. Encode the Source Code" << endl;
		break;
	case '4':
		clrscr();
		cout << "Problem 1 (Lesson 8)" << endl;
		cout << "" << endl;
		cout << "Video Rental shop uses the following type classification scheme" << endl;
		cout << "for movie video." << endl;
		cout << "Type Code    Movie Category" << endl;
		cout << "   A         Action and Adventure" << endl;
		cout << "   B         Comedy" << endl;
		cout << "   C         Drama" << endl;
		cout << "   D         Family" << endl;
		cout << "   E         Horror and Science Fiction" << endl;
		cout << "   M         Musical" << endl;
		cout << "" << endl;
		cout << "Any other type code value is considered an error." << endl;
		cout << "" << endl;
		cout << "You need to:" << endl;
		cout << "a. Make an IPO Model" << endl;
		cout << "b. Draw the Flowchart" << endl;
		cout << "c. Encode the Source Code" << endl;
		break;
	case '5':
		clrscr();
		cout << "Machine Problem 3 (Lesson 8)" << endl;
		cout << "" << endl;
		cout << "Create a program that will combine the different Activities and" << endl;
		cout << "Machine Problem. STRICTLY use the main menu below." << endl;
		cout << "" << endl;
		cout << "   MAIN MENU" << endl;
		cout << "" << endl;
		cout << "   [1] - Machine Problem 1 (Lesson 6)" << endl;
		cout << "   [2] - Fat Gram (Lesson 7)" << endl;
		cout << "   [3] - Machine Problem 2 (Lesson 7)" << endl;
		cout << "   [4] - Problem 1 (Lesson 8)" << endl;
		cout << "   [5] - Machine Problem 3 (Lesson 8)" << endl;
		cout << "" << endl;
		cout << "   Enter your choice: " << endl;
		cout << "" << endl;
		cout << "You need to:" << endl;
		cout << "a. Make an IPO Model" << endl;
		cout << "b. Draw the Flowchart" << endl;
		cout << "c. Encode the Source Code" << endl;
		break;
	default:
		cout << "Invalid input"; 
	}
getch();
}