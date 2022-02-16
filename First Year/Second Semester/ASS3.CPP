#include<iostream.h>
#include<conio.h>

void main ()
{
    clrscr();
    int rows;

    cout << "Input number of Rows: ";
    cin >> rows;
    for(int m = 1; m<=rows;m++)
    {
        cout << " Loop #1 M " << m << endl;
        for(int n = 1; n<=m;n++)
        {
            cout << " Loop #2 M " << m;
            cout << " Loop #2 N " << n;
        }
    cout << endl;
    }
    getch();
}