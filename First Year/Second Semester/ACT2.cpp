#include<iostream.h>
#include<conio.h>

int main ()
{
	int a, b, c;
	clrscr();
	cout << "What is the angle of point A: ";
	cin >> a;
	cout << "What is the angle of point B: ";
	cin >> b;
	cout << "What is the angle of point C: ";
	cin >> c;
	
	if (((a == b) && (a > 0)) && ((b == c) && (b > 0)) && ((c == a) && (c >0)))
	{
		cout << "This is an Equilateral Triangle" << endl;
	}
	else if (((a != b) && (a > 0)) && ((b != c) && (b > 0)) && ((c !=a) && (c > 0)))
	{
		cout << "This is a Scalene Triangle" << endl;
	}
	else if ((((a == b) && (a > 0)) && ((b == a) && (b > 0))) || (((b == c) && (b > 0)) && ((c == a) && (c > 0))) || (((c == a) && (c > 0)) && ((a == c) && (a > 0))))
	{
		cout << "This is an Isosceles Triangle" << endl;
	}
	else
	{
		cout << "Error!" << endl;
	}
	
	if ((a == 90) || (b == 90) || (c == 90))
	{
		cout << "Also, this kind of triangle is a Right Triangle" << endl;
	}
	else if (((a < 90) && (a > 0)) && ((b < 90) && (b > 0)) && ((c < 90) && (c > 0)))
	{
		cout << "Also, this kind of triangle is an Acute Triangle" << endl;
	}
	else if (((a > 90) && (a > 0)) || ((b > 90) && (b > 0)) || ((c > 90) && (c > 0)))
	{
		cout << "Also, this kind of triangle is an Obtuse Triangle" << endl;
	}
	else
	{
		cout << "Error!" << endl;
	}
getch();
}