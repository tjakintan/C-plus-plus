#include <iostream>

using namespace std;

int main() {

    double mass;
    double weight;

cout << "What is the mass of the object(Kg) ? ";
cin >> mass;

weight = mass * 9.8;

cout << "The weight of the object is "<< weight<< " Newtons."<< endl;


if (weight > 1000){
    cout << "Ihe object is heavy.";
}

if (weight < 10){
    cout << "The object is too light.";
}


    return 0;
}
