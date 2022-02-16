#include<iostream.h>
#include<conio.h>
int main()
{
    int iS=0, iJ, iI, iSide=5;
    int iA = 1;
    clrscr();
    for (iI = 0; iI < iSide; ++iI)
    {
        for ( iJ = 0; iJ < iS; ++iJ)
        {
            cout << " ";
        }
        for ( iJ = 0; iJ < iA; ++iJ)
        {
            cout << "*";
        }
        cout << endl;
    --iS;
    iA += 2;
    }
    for ( iI = 0; iI <= iSide; ++iI)
    {
        for ( iJ = 0; iJ < iS; ++iJ)
        {
            cout << "Y";
        }
        for ( iJ = 0; iJ < iA; ++iJ)
        {
            cout << "E";
        }
        cout << endl;
        ++iS;
        iA -= 2;
    }
    getch();
    return 0;
}