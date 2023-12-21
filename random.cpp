#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;


int main() {

double sum = 0, total = 0, average, number;
int min, max;



ifstream inputFile("/Users/tjakintan/Desktop/random.txt");
if (!inputFile.is_open()){
    cerr << "open" << endl;
    return 1;

}
else {

      while (inputFile >> number){
          sum += number;
          total++;
          if (number > max)
              max = number;
          if (number < min)
              min = number;
      }

      average = sum / total;

    cout << "Sum: " << sum << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << setprecision(2) << average << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

}


  inputFile.close();
  cout << "File is closed" << endl;


    return 0;
}
