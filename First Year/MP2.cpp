#include<iostream.h>
#include<conio.h>

void main ()
{
	double grade;
	clrscr();
	cout << "Grade converter" << endl;
	cout << "From Percent Grade to GPA" << endl;
	cout << " " << endl;
	cout << "What is your grade in percent?" << endl;
	cin >> grade;
	
	if((grade >= 97) && (grade <=100))
	{
		cout << "Your GPA is 1.0";
	}
	else if((grade >= 94) && (grade <=96))
	{
		cout << "Your GPA is 1.25";
	}
	else if((grade >= 91) && (grade <=93))
	{
		cout << "Your GPA is 1.50";
	}
	else if((grade >= 88) && (grade <=90))
	{
		cout << "Your GPA is 1.75";
	}
	else if((grade >= 85) && (grade <=87))
	{
		cout << "Your GPA is 2.0";
	}
	else if((grade >= 82) && (grade <=84))
	{
		cout << "Your GPA is 2.25";
	}
	else if((grade >= 79) && (grade <=81))
	{
		cout << "Your GPA is 2.50";
	}
	else if((grade >= 76) && (grade <=78))
	{
		cout << "Your GPA is 2.75";
	}
	else if(grade == 75)
	{
		cout << "Your GPA is 3.0";
	}
	else if((grade >= 73) && (grade <=74))
	{
		cout << "Your GPA is 4.0";
	}
	else if((grade >= 70) && (grade <=72))
	{
		cout << "Your GPA is 5.0";
	}
	else
	{
		cout << "This is an invalid grade/input";
	}
	//Welcome to if-else hell hahaha
	
	
getch();
}