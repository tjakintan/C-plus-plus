#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int ComputerChoice()
{
    int compChoice = 0;

    int choice = rand() % 3;

    if (choice == 0)
        compChoice = 1;
    else if (choice == 1)
        compChoice = 2;
    else if (choice == 2)
        compChoice = 3;

    return compChoice;
}


int main() {
    int userChoice;
    char playAgain = 0;
    int comp = 0;



    do {

        cout << "1 - Rock" << endl;
        cout << "2 - Paper" << endl;
        cout << "3 - Scissors" << endl;
        cout << "4 - Exit" << endl;


        cout << "Pick one of the 4 selections." << endl;
        cin >> userChoice;

        while (userChoice > 4 || userChoice < 1){
            cout << "!! Invalid Input !!" << endl;
            cout << "Pick one of the 4 selections." << endl;
            cin >> userChoice;
        }



    switch (userChoice)
    {
        case 1:
            cout << "You chose rock" << endl;
            break;
        case 2:
            cout << "You chose paper" << endl;
            break;
        case 3:
            cout << "You chose scissors" << endl;
            break;
        default:
            cout<<"Please select a valid choice." << endl;
    }

        srand(time(0));

        comp = ComputerChoice();

        switch (comp) {
        case 1:
            cout << "Computer chose rock" << endl;
            break;
        case 2:
            cout << "Computer chose paper" << endl;
            break;
        case 3:
            cout << "Computer chose scissors" << endl;
            break;
    }

    if (userChoice == comp)
        cout << "Tie!" << endl;
    else if (userChoice == 1 && comp == 2)
        cout << "Paper beats rock, you lose!" << endl;
    else if (userChoice == 1 && comp == 3)
        cout << "Rock beats scissors, you win!" << endl;
    else if (userChoice == 2 && comp == 3)
        cout << "Scissors beats paper, you lose!" << endl;
    else if (userChoice == 2 && comp == 1)
        cout << "Paper beats rock, you win!" << endl;
    else if (userChoice == 3 && comp == 1)
        cout << "Rock beats scissors, you lose!" << endl;
    else if (userChoice == 3 && comp == 2)
        cout << "Scissors beats paper, you win!"<< endl;

    cout << "" << endl;

    cout << "Do you want to play again? Choose 'Y' for yes, and 'N' for no." << endl;
    cin >> playAgain;
    if (playAgain != 'Y' &&playAgain != 'y'&& playAgain != 'N' && playAgain != 'n'){
            cout << "Invalid choice, please choose a valid choice" << endl;
    }

    }


    while (playAgain == 'Y' || playAgain == 'y');

    return 0;
}
