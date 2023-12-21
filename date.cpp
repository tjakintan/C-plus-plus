#include <iostream>

using namespace std;

int switchCommonYear(int &month, int &day){

    switch(month){
        case(1):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;
        case(2):
            if (day < 1 || day > 28){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;


        case(3):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(4):
            if (day < 1 || day > 30){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(5):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(6):
            if (day < 1 || day > 30){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(7):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(8):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(9):
            if (day < 1 || day > 30){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(10):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(11):
            if (day < 1 || day > 30){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(12):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        default:
            cout << "Not a valid calender date."<< endl;



    }
}
int switchLeapYear(int &month, int &day){
    switch(month){
        case(1):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;
        case(2):
            if (day < 1 || day > 29){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;


        case(3):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(4):
            if (day < 1 || day > 30){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(5):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(6):
            if (day < 1 || day > 30){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(7):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(8):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(9):
            if (day < 1 || day > 30){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(10):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(11):
            if (day < 1 || day > 30){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        case(12):
            if (day < 1 || day > 31){
                cout << "Not Valid calender Date" << endl;
            }
            else {
                cout << "Valid Date." << endl;
            }
            break;

        default:
            cout << "Not a valid calender date."<< endl;



    }
}


int main() {

    int year;
    int day;
    int month;

    cout << "Enter the date in this format mm/dd/yyyy ? " << endl;
    cin >> month;
    cin.ignore(1);
    cin >> day;
    cin.ignore(1);
    cin >> year;


    if (year % 400 == 0 || year % 4 == 0){
        switchLeapYear(month, day);
    }

    else if (year % 100 == 0){
        switchCommonYear(month, day);
    }

    else {
        switchCommonYear(month,day);
    }





    return 0;
}
