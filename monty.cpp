#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;


int output (int &n, int &stayWins, int &switchWins, int&games, int&chosenDoor, int &winningDoor, int & remainingDoor, int &revealedDoor, int &option) {


        do
        {
            revealedDoor = rand() % 3 + 1;
        } while (revealedDoor == chosenDoor || revealedDoor == winningDoor);

        do
        {
            remainingDoor = rand() % 3+1;
        } while (remainingDoor == chosenDoor || remainingDoor == revealedDoor);

        option = rand() % 2 + 1;
        if (option == 1)
        {
            if (chosenDoor == winningDoor)
            {
                stayWins++;
            }
        }
        if (option == 2)
        {
            chosenDoor = remainingDoor;
            if (chosenDoor == winningDoor)
            {
                switchWins++;
            }
        }

}



int main()
{

    int n;
    int stayWins = 0;
    int switchWins  = 0;
    int games = 0;
    int chosenDoor;
    int winningDoor;
    int remainingDoor;
    int revealedDoor;
    int option;
    int stayWinsPer;
    int switchWinsPer;

    cout << "How many times would u like to run the simulation ? " << endl;
    cin >> n;

    srand(time(NULL));

do {
    chosenDoor = rand() % 3 + 1;
    winningDoor = rand() % 3 + 1;

    output(n, stayWins, switchWins, games, chosenDoor, winningDoor, remainingDoor, revealedDoor, option);
    games++;

}
while (games < n);

stayWinsPer = (stayWins * 100) / n;
switchWinsPer = (switchWins * 100) / n;

    cout << "Out of " << n << " games, the contestant won " << stayWins << " times by staying with his/her original choice and a percentage of " << stayWinsPer << "% ." << endl;
    cout << "Out of " << n << " games, the contestant won " << switchWins << " times by switching his/her choice and a percentage of "<< switchWinsPer << "% ." << endl;

    return 0;
}