#include<iostream.h>
#include<conio.h>

void main ()
{
	double calories, fat_grams, calories_from_fat, calorie_percent;
	clrscr();
	cout << "How many calories does it have on your food?" << endl;
	cout << "Note: If you can't find 'calories' on the Nutrition Facts label" << endl;
	cout << "maybe the calorie label is in energy." << endl;
	cin >> calories;
	cout << " " << endl;
	cout << "How many grams of fat does it have on your food?" << endl;
	cin >> fat_grams;
	
	calories_from_fat = fat_grams * 9;
	calorie_percent = (calories_from_fat / calories) * 100;
	
	if(calorie_percent >= 30)
	{
		cout << "Your food is slightly high or high on fat." << endl; // It is never stated on the problem to add this message but for convenience, I'll add this.
	}
	else
	{
		cout << "Your food is low on fat!" << endl; // Strictly stated on the problem to add a message.
	}
	
	cout << "Percent of calories came from fat: " << calorie_percent << endl;
	
getch();
}