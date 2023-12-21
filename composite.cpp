#include <iostream>
#include <fstream>

using namespace std;

bool isComposite(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return false;

    if (n%2 == 0 || n%3 == 0) return true;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
            return true;

    return false;
}
void addingtext(ofstream& o){
    for (int i = 1; i <= 100; i++){
        if (isComposite(i))
            cout << i << endl;
    }
}


int main() {

ofstream  myfile;
myfile.open("composite");
if(myfile.is_open()) {
    cout << "File Open Access" << endl;
}
myfile << "Writing to this file";
    addingtext(myfile);













    return 0;
}
