#include <iostream>

using namespace std;

int findGCD(int n1, int n2)
{
    int gcd;
    for(int i=1; i <= n1 && i <= n2; i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}


int main() {
    int num1,den1;
    int num2,den2;
    int operation;
    char again;

do {
    cout << "" << endl;
    cout << "THIS PROGRAM PERFORMS ARITHMETIC OPERATIONS ON RATIONAL NUMBERS." << endl;
    cout << "****************************************************************" << endl;

    cout << "Please enter the first rational number: " << endl;
    cin>> num1;
    cin.ignore(1);
    cin >> den1;


    while (den1 == 0) {
        cout << "!!Denominator cant be negative!!" << endl;
        cout << "Please enter the first rational number: " << endl;
        cin>> num1;
        cin.ignore(1);
        cin >> den1;
        break;
    }


   cout << "Please enter the second rational number: " << endl;
   cin >> num2;
   cin.ignore(1);
   cin >> den2;


    while (den2 == 0) {
        cout << "!!Denominator cannot be Zero " << endl;
        cout << "Please enter the second rational number: " << endl;
        cin >> num2;
        cin.ignore(1);
        cin >> den2;
        break;
    }
    cout << "OPERATIONS\n"
            "     (1) ADDITION\n"
            "     (2) SUBTRACTION\n"
            "     (3) MULTIPLICATION\n"
            "     (4) DIVISION\n " << endl;
    cout << "Please select an operation (1, 2, 3 or 4): "<< endl;
    cin >> operation;

    while (operation < 1 || operation > 4) {
        cout << "!!Make a selection between 1 and 4!!" << endl;
        cout << "Please select an operation (1, 2, 3 or 4): " << endl;
        cin >> operation;
        break;
    }


    switch (operation) {
        case (4): {
            int lcm = den1 * num2;
            int num3 = (num1 * den2);
            cout << num1 << "/" << den1 << " ÷ " << num2 << "/" << den2 << " = " << num3 / findGCD(num3, lcm) << "/"
                 << lcm / findGCD(num3, lcm) << endl;
            break;
        }

        case (3): {
            int lcm = den1 * den2;
            int num3 = (num1 * num2);
            cout << num1 << "/" << den1 << " × " << num2 << "/" << den2 << " = " << num3 / findGCD(num3, lcm) << "/"
                 << lcm / findGCD(num3, lcm) << endl;
            break;
        }


        case (2): {
            int lcm = (den1 * den2) / findGCD(den1, den2);
            int subtract = (num1 * lcm / den1) - (num2 * lcm / den2);

            int num3 = subtract / findGCD(subtract, lcm);
            lcm = lcm / findGCD(subtract, lcm);

            cout << num1 << "/" << den1 << " - " << num2 << "/" << den2 << " = " << num3 << "/" << lcm << endl;
            break;
        }


        case (1): {
            int lcm = (den1 * den2) / findGCD(den1, den2);
            int sum = (num1 * lcm / den1) + (num2 * lcm / den2);

            int num3 = sum / findGCD(sum, lcm);
            lcm = lcm / findGCD(sum, lcm);

            cout << num1 << "/" << den1 << " + " << num2 << "/" << den2 << " = " << num3 << "/" << lcm << endl;
            break;
        }


    }
cout << "Would you like to play again ? (y/n): "<< endl;
    cin >> again;

}while (again == 'y');


        return 0;
}
