#include <iostream>
#include <iomanip>

using  namespace std;

int main() {

    int speed;
    int distance = 0;
    int time;

    cout << "What is the speed of the vehicle in mph? " << endl;
    cin >> speed;

    cout << "How many hours has it traveled? " << endl;
    cin >> time;

    if (speed >= 0 && time >=1) {

        cout << "Hours    Distance Traveled" << endl;
        cout << "--------------------------" << endl;

        for (int x =1; x <= time; x++){
            distance += speed;
            cout << right << setw(4) << x;
            cout << setw(6) << distance << endl;
        }
    }


    return 0;
}
