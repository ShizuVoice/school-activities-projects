#include<iostream.h>
#include<conio.h>
void main ()
{
    float Bag_Lina, Bag_Menel, Marble_Lina, Marble_Menel, Lina_Marble_Bag, Menel_Marble_Bag, Difference;
    clrscr();

    cout << "How many bags does Lina have: ";
    cin >> Bag_Lina;
    cout << "How many bags does Menel have: ";
    cin >> Bag_Menel;
    cout << "How many marbles does Lina have in total: ";
    cin >> Marble_Lina;
    cout << "How many marbles does Menel have in total: ";
    cin >> Marble_Menel;

    Lina_Marble_Bag = Marble_Lina / Bag_Lina;
    Menel_Marble_Bag = Marble_Menel / Bag_Menel;
    Difference = Menel_Marble_Bag - Lina_Marble_Bag;

    cout << "Lina's amount of Marble per bag: " << Lina_Marble_Bag << endl;
    cout << "Menel's amount of Marble per bag: " << Menel_Marble_Bag << endl;
    cout << "Menel's difference amount of marble to Lina: " << Difference;

    getch();
}
