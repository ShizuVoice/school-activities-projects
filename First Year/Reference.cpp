#include<iostream.h>
#include<conio.h>
void main ()
{
    // Use float for number with decimal, use int for whole number
    float player1, player2, player3, player4, team1, team2;
    clrscr();

    cout << "Player 1 of Team 1 Score: ";
    cin >> player1;
    cout << "Player 2 of Team 1 Score: ";
    cin >> player2;
    cout << "Player 3 of Team 2 Score: ";
    cin >> player3;
    cout << "Player 4 of Team 2 Score: ";
    cin >> player4;

    team1 = player1 + player2 / 2;
    team2 = player3 + player4 / 2;

    cout << "Team 1's average score: " << team1 << endl;
    cout << "Team 2's average score: " << team2;

    getch();
}