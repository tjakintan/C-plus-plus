#include <iostream>

using namespace std;


int main() {

    int number = (number >= 1 && number <= 10);

    cout << "Enter any number between the ranges of 1-10 "<<endl;

    cin >> number;

    switch(number) {
        case 1:
            cout << "1 in Roman Numerals is I."; break;

        case 2:
            cout << "2 in Roman Numerals is II."; break;

        case 3:
            cout << "3 in Roman Numerals is III."; break;

        case 4:
            cout << "4 in Roman Numerals is IV."; break;

        case 5:
            cout << "5 in Roman Numerals is V."; break;

        case 6:
            cout << "3 in Roman Numerals is VI."; break;

        case 7:
            cout << "7 in Roman Numerals is VII."; break;

        case 8:
            cout << "8 in Roman Numerals is VIII."; break;

        case 9:
            cout << "9  in Roman Numerals is IX."; break;

        case 10:
            cout << "10 in Roman Numerals is X."; break;

        default:
            cerr<<"INVALID INPUT";
            break;
    }


    return 0;
}
