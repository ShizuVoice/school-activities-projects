#include<iostream.h>
#include<conio.h>
void main ()
{
    // Use float for number with decimal, use int for whole number
    float Currentprice, Increaserate, Increaseamount, Newprice;
    clrscr();

    cout << "Enter the Current Price: ";
    cin >> Currentprice;
    cout << "Enter the Increase Rate: ";
    cin >> Increaserate;

    Increaseamount = Currentprice * Increaserate;
    Newprice = Increaseamount + Currentprice;

    cout << "The increase amount is:" << Increaseamount << endl;
    cout << "The new price is:" << Newprice;

    getch();
}