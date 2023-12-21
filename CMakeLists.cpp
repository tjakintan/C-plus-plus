#include <iostream>

using namespace std;

int main() {


    int Temp;
    char Freeze, Boil;


cout << "What is the temperature ? " << endl;
cin  >> Temp;


    if (Temp <= -362)
        Freeze = 'O';
    else if (Temp < -306)
        Freeze = 'E';
    else if (Temp <= -173)
    {
        Freeze = 'E';
        Boil = 'O';
    }
    else if (Temp <= -38)
    {
        Freeze = 'M';
        Boil = 'O';
    }
    else if (Temp <= 32)
    {
        Freeze = 'W';
        Boil = 'O';
    }
    else if (Temp > 32 && Temp < 172)
        Boil = 'O';
    else if (Temp >= 676)
        Boil = 'M';
    else if (Temp >= 212)
        Boil = 'W';
    else if (Temp >= 172)
        Boil = 'E';

    switch(Freeze)
    {
        case 'O' : cout << "Oxygen will freeze at " << Temp << endl;
        case 'E' : cout << "Ethyl alcohol will freeze at "<< Temp << endl;
        case 'M' : cout << "Mercury will freeze at "<< Temp << endl;
        case 'W' : cout << "Water will freeze will freeze at "<< Temp << endl;
    }
    switch(Boil)
    {

        case 'M' : cout << "Mercury will boil at " << Temp << endl;
        case 'W' : cout << "Water will boil at " << Temp << endl;
        case 'E' : cout << "Ethyl alcohol will boil at " << Temp << endl;
        case 'O' : cout << "Oxygen will boil at " << Temp << endl;
    }

































    return 0;
}
