#include <iostream>

using namespace std;

int main() {

    char package;
    double packagehours;
    double additionalPay;
    double totalAmount;
    double additionalHours;

    cout << "" << endl;

cout << "Package A      For $9.95 per month 10hours of access are provided. Additional hours are $2.00 per hour."<< endl;
cout << "Package B      For $14.95 per month 20 hours of access are provided. Additional hours are $1.00 per hour." << endl;
cout << "Package c      For $19.95 per month unlimited access are provided." << endl;
cout << ""<< endl;

cout << "Which package did you choose between A,B or C ? " << endl;
cin >> package;

 switch (package) {

            case 'A':
                cout << "How long did you use package A for ?" << endl;
                cin >> packagehours;

                if (packagehours > 744) {
                    cerr << "Hours cannot exceed 744 in a month!" << endl;
                    break;
                } else {
                    additionalHours = packagehours - 10;
                    additionalPay = additionalHours * 2;
                    totalAmount = additionalPay + 9.95;

                    cout << "Total amount due is $" << totalAmount << endl;
                    break;
                }

            case 'B':
                cout << "How long did you use package B for ?" << endl;
                cin >> packagehours;

                if (packagehours > 744) {
                    cerr << "Hours cannot exceed 744 in a month!" << endl;
                    break;
                } else {
                    additionalHours = packagehours - 20;
                    additionalPay = additionalHours * 2;
                    totalAmount = additionalPay + 14.95;

                    cout << "Total amount due is $" << totalAmount << endl;
                    break;
                }

            case 'C':
                cout << "How long did you use package C for ?" << endl;
                cin >> packagehours;

                if (packagehours > 744) {
                    cerr << "Hours cannot exceed 744 in a month!" << endl;
                    break;
                } else {
                    cout << "Total amount due is $ 19.95" << endl;
                    break;
                }

            default:
                cerr << "You must select between A,B or C!" << endl;break;
 }

    return 0;
}
