#include<iostream.h>
#include<conio.h>
void main()
{
    float TotalVisit, PencilsBought, PencilsPerBox, Price, TotalPencils, TotalBoxes, TotalCost;
    clrscr(); // Initializes the whole console screen from previous results.

    cout << "Total times of visit to store: ";
    cin >> TotalVisit;
    cout << "Total pencils bought per visit: ";
    cin >> PencilsBought;
    cout << "Number of Pencils per Box Pencil: ";
    cin >> PencilsPerBox;
    cout << "Price per Box Pencil: ";
    cin >> Price;

    TotalPencils = PencilsBought * TotalVisit;
    TotalBoxes = TotalPencils / PencilsPerBox;
    TotalCost = TotalBoxes * Price;

    cout << "Total pencils bought: " << TotalPencils << endl;
    cout << "Total cost: " << TotalCost;

    getch();
}