#include <bits/stdc++.h>
using namespace std;

// Function Prototypes
char UserChoice();
char ComputerChoice();
void showChoice(char choice);
char chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    do
    {
        player = UserChoice();
        cout << "Your choice: ";
        showChoice(player);

        computer = ComputerChoice();
        cout << "Computer's choice: ";
        showChoice(computer);

        chooseWinner(player, computer);
        cout << "\n";
    } while (true);

    return 0;
}

char UserChoice()
{
    char player;
    do
    {
        cout << "** Rock-Paper-Scissors Game **\n";
        cout << "******************************\n";
        cout << "'r' for Rock\n";
        cout << "'p' for Paper\n";
        cout << "'s' for Scissors\n";
        cout << "Enter your choice: ";
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    cout << "\n";

    return player;
}

char ComputerChoice()
{
    srand(time(0));
    int num = (rand() % 3) + 1;
    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Rock\n";
        break;
    case 'p':
        cout << "Paper\n";
        break;
    case 's':
        cout << "Scissors\n";
        break;
    }
}

char chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
            cout << "It's a tie\n";
        else if (computer == 'p')
            cout << "Computer wins!\n";
        else
            cout << "Player wins!\n";
        break;
    case 'p':
        if (computer == 'p')
            cout << "It's a tie\n";
        else if (computer == 's')
            cout << "Computer wins!\n";
        else
            cout << "Player wins!\n";
        break;
    case 's':
        if (computer == 's')
            cout << "It's a tie\n";
        else if (computer == 'r')
            cout << "Computer wins!\n";
        else
            cout << "Player wins!\n";
        break;
    }
}