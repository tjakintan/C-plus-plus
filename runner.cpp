#include <iostream>

using namespace std;

int main() {

string firstRunnerName;
string secondRunnerName;
string thirdRunnerName;
double firstRunnerTime;
double secondRunnerTime;
double thirdRunnerTime;

cout << "To calculate the placement of the runners."<<endl;
cout << "Input the requested information."<<endl;

cout << "Please enter the name of runner 1: "<<endl;
cin >> firstRunnerName;

cout << "Please enter the time of runner 1: "<<endl;
cin >> firstRunnerTime;

cout << "Please enter the name of runner 2: "<< endl;
cin >> secondRunnerName;

cout << "Please enter the time of runner 2: "<<endl;
cin >> secondRunnerTime;

cout << "Please enter the name of runner 3: "<< endl;
cin >> thirdRunnerName;

cout << "Please enter the time of runner 3: "<<endl;
cin >> thirdRunnerTime;

 if (firstRunnerTime > 0 && secondRunnerTime > 0 && thirdRunnerTime > 0) {

     if (firstRunnerTime < secondRunnerTime && firstRunnerTime < thirdRunnerTime) {
         if (secondRunnerTime < thirdRunnerTime) {
             cout << firstRunnerName << " finished 1st with a time of " << firstRunnerTime << " sec." << endl;
             cout << secondRunnerName << " finished 2nd with a time of " << secondRunnerTime << " sec." << endl;
             cout << thirdRunnerName << " finished 3rd with a time of " << thirdRunnerTime << " sec." << endl;
         }
         else {
             cout << firstRunnerName << " finished 1st with a time of " << firstRunnerTime << " sec." << endl;
             cout << thirdRunnerName << " finished 2nd with a time of " << thirdRunnerTime << " sec." << endl;
             cout << secondRunnerName << " finished 3rd with a time of " << secondRunnerTime << " sec." << endl;
         }
     }
     if (secondRunnerTime < firstRunnerTime && secondRunnerTime < thirdRunnerTime) {
         if (firstRunnerTime < thirdRunnerTime) {
             cout << secondRunnerName << " finished 1st with a time of " << secondRunnerTime << " sec." << endl;
             cout << firstRunnerName << " finished 2nd with a time of " << firstRunnerTime << " sec." << endl;
             cout << thirdRunnerName << " finished 3rd with a time of " << thirdRunnerTime << " sec." << endl;
         }
         else {
             cout << secondRunnerName << " finished 1st with a time of " << secondRunnerTime << " sec." << endl;
             cout << thirdRunnerName << " finished 2nd with a time of " << thirdRunnerTime << " sec." << endl;
             cout << firstRunnerName << " finished 3rd with a time of " << firstRunnerTime << " sec." << endl;

         }
     }
     if (thirdRunnerTime < firstRunnerTime && thirdRunnerTime < secondRunnerTime) {
         if (secondRunnerTime < firstRunnerTime) {
             cout << thirdRunnerName << " finished 1st with a time of " << thirdRunnerTime << " sec." << endl;
             cout << secondRunnerName << " finished 2nd with a time of " << secondRunnerTime << " sec." << endl;
             cout << firstRunnerName << " finished 3rd with a time of " << firstRunnerTime << " sec." << endl;
         }
         else {
             cout << thirdRunnerName << " finished 1st with a time of " << thirdRunnerTime << " sec." << endl;
             cout << firstRunnerName << " finished 2nd with a time of " << firstRunnerTime << " sec." << endl;
             cout << secondRunnerName << " finished 3rd with a time of " << secondRunnerTime << " sec." << endl;
         }
     }
 }
 else{
     cerr << "Invalid Input! Time(s) cannot be less than zero";
 }
    return 0;
}
