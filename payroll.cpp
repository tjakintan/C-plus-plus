#include <iostream>

using  namespace std;

int main() {

    double grossPay, stateTax, federalTax, ficaWithHoldings, netpay;
    double sum1, sum2;
    double e = 1;

    while (e != 0) {

        cout << "What is the employee number: " << endl;
        cin >> e;

        if (e == 0) {
            break;
        }



        cout << "What is the Gross Pay: " << endl;
        cin >> grossPay;

        while (grossPay < 0) {
            cout << "!!Value cannot be negative!!" << endl;

            cout << "What is the Gross Pay: " << endl;
            cin >> grossPay;

        }



        cout << "What is the state Tax: " << endl;
        cin >> stateTax;

        while (stateTax > grossPay) {
            cout << "!!Value cannot be greater than Gross Pay!!" << endl;

            cout << "What is the state Tax: " << endl;
            cin >> stateTax;

        }

        while (stateTax < 0) {
            cout << "!!Value cannot be negative!!" << endl;

            cout << "What is the state Tax: " << endl;
            cin >> stateTax;
        }



        cout << "What is the Federal Tax: " << endl;
        cin >> federalTax;

        while (federalTax > grossPay) {
            cout << "!!Value cannot be greater than Gross Pay!!" << endl;

            cout << "What is the Federal Tax: " << endl;
            cin >> federalTax;

        }
        while (federalTax < 0) {
            cout << "!!Value cannot be negative!!" << endl;

            cout << "What is the Federal Tax: " << endl;
            cin >> federalTax;
        }



        cout << "What is the FICA Withholding's: " << endl;
        cin >> ficaWithHoldings;

        while (ficaWithHoldings > grossPay) {
            cout << "!!Value cannot be greater than Gross Pay!!" << endl;

            cout << "What is the FICA Withholding's: " << endl;
            cin >> ficaWithHoldings;
        }

        while (ficaWithHoldings < 0) {
            cout << "!!Value cannot be negative!!" << endl;

            cout << "What is the FICA Withholding's: " << endl;
            cin >> ficaWithHoldings;

        }


        sum1 = stateTax + federalTax + ficaWithHoldings;



            while(sum1 > grossPay) {


                cout << "!!Error!!" << endl;
                cout << "!!Re-enter the following data for employee"<< e <<"!!" << endl;


                cout << "What is the Gross Pay: " << endl;
                cin >> grossPay;

                while (grossPay < 0) {
                    cout << "!!Value cannot be negative!!" << endl;

                    cout << "What is the Gross Pay: " << endl;
                    cin >> grossPay;

                }

                cout << "What is the state Tax: " << endl;
                cin >> stateTax;

                while (stateTax > grossPay) {
                    cout << "!!Value cannot be greater than Gross Pay!!" << endl;

                    cout << "What is the state Tax: " << endl;
                    cin >> stateTax;

                }

                while (stateTax < 0) {
                    cout << "!!Value cannot be negative!!" << endl;

                    cout << "What is the State Tax: " << endl;
                    cin >> stateTax;
                }


                cout << "What is the Federal Tax: " << endl;
                cin >> federalTax;

                while (federalTax > grossPay) {
                    cout << "!!Value cannot be greater than Gross Pay!!" << endl;

                    cout << "What is the Federal Tax: " << endl;
                    cin >> federalTax;

                }
                while (federalTax < 0) {
                    cout << "!!Value cannot be negative!!" << endl;

                    cout << "What is the Federal Tax: " << endl;
                    cin >> federalTax;
                }

                cout << "What is the FICA Withholding's: " << endl;
                cin >> ficaWithHoldings;

                while (ficaWithHoldings > grossPay) {
                    cout << "!!Value cannot be greater than Gross Pay!!" << endl;

                    cout << "What is the FICA Withholding's: " << endl;
                    cin >> ficaWithHoldings;
                }

                while (ficaWithHoldings < 0) {
                    cout << "!!Value cannot be negative!!" << endl;

                    cout << "What is the FICA Withholding's: " << endl;
                    cin >> ficaWithHoldings;

                }
                sum2 = ficaWithHoldings + federalTax + stateTax;
                netpay = grossPay - sum2;

                cout << "Gross Pay : $" << grossPay << endl;
                cout << "Sales Tax: $" << stateTax << endl;
                cout << "FICA Withholding: $" << ficaWithHoldings << endl;
                cout << "Net pay: $" << netpay << endl;
                break;
            }
            if (sum1 < grossPay) {

                sum1 = ficaWithHoldings + federalTax + stateTax;
                netpay = grossPay - sum1;

                cout << "Gross Pay : $" << grossPay << endl;
                cout << "Sales Tax: $" << stateTax << endl;
                cout << "FICA Withholding: $" << ficaWithHoldings << endl;
                cout << "Net pay: $" << netpay << endl;
            }
        cout << "" << endl;
    }

    return 0;
}
