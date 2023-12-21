#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void flipCoin(int &headCount, int &tailCount) {
    int num;

    num = rand() % 2;

    if (num) {
        cout << "H" << endl;
        headCount++;
    }
    else {
        cout << "T" << endl;
        tailCount++;
    }

}


int main() {

    int occur;
    int num1 = 0;
    int num2 = 0;
    int i = 0;


    cout << "How many times should the coin be flipped: " << endl;
    cin >> occur;

    while(occur < 1){
    cout << "!! Flips must be greater than 1 !!" << endl;
    cout << "How many times should the coin be flipped: " << endl;
    cin >> occur;
    }

    srand (time(0));

    while (i < occur) {
      flipCoin(num1,num2);
      i++;
    }
    cout << "Head landed = " << num1 << " times."<< endl;
    cout << "Tail landed = " << num2 << " times."<< endl;



    return 0;
}
