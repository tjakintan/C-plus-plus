#include <iostream>

using namespace std;

int main() {

    int areaCircle;
    int areaRectangle;
    int areaTriangle;
    int radius;
    int lengthRectangle;
    int widthRectangle;
    int baseTriangle;
    int heightTriangle;
    const double pi = 3.14159;
    int choice;

cout << "" << endl;
cout << "Geometry Calculator"<<endl;
cout << "  1. Calculate area of a Circle"<<endl;
cout << "  2. Calculate the area of a rectangle"<< endl;
cout << "  3. Calculate the Area of a Triangle"<<endl;
cout << "  4. Quit"<< endl;
cout << "Enter your choice (1-4): "<< endl;
cin >> choice;

    switch (choice) {


        case 1:

            cout << "What is the radius of the circle ? " << endl;
            cin >> radius;

            if (radius <= 0) {
                cerr << "Radius must be positive!" << endl;break;
            } else {

                areaCircle = pi * (radius * radius);

                cout << "The area of the circle is " << areaCircle << "." << endl;
            }break;


        case 2:

            cout << "What is the length of the rectangle ? " << endl;
            cin >> lengthRectangle;

            if (lengthRectangle < 0){
                cerr << "Length must be positive!"<< endl;break;
            }
            else {

                cout << "What is the width of the rectangle ? " << endl;
                cin >> widthRectangle;
            }
            if (widthRectangle < 0) {
                cerr << "Width must be positive!"<< endl;break;
            }
            else {

                areaRectangle = lengthRectangle * widthRectangle;

                cout << "The area of the rectangle is " << areaRectangle << endl;
            }break;

        case 3:

            cout << "What is the length of the triangle's base ? " << endl;
            cin >> baseTriangle;

            if (baseTriangle < 0){
                cerr << "Length must be positive!"<< endl;break;
            }
            else {

                cout << "What is the height of the triangle ? " << endl;
                cin >> heightTriangle;
            }
            if (heightTriangle < 0){
                cerr << "Height of triangle must be positive!"<<endl;break;
            }
            else {
                areaTriangle = baseTriangle * heightTriangle * 0.5;

            cout << "The area of the triangle is " << areaTriangle << endl;

            }break;

        case 4:
            cout << "Adios";break;



        default:
            cerr << "Selection must be between 1-4!"<<endl;
    }

    return 0;
}
