#include <iostream>

using namespace std;

int main() {

int row,i,j;
   cout<<"Enter the number: ";
   cin>>row;

   cout << "Pattern A"<< endl;

   for(i=1; i < row; i++)
    {
       for(j=1;j <= i;j++)
        {
         cout<<"+";
         }
         cout<<endl;
    }

   cout << ""<<endl;

   cout << "Pattern B"<<endl;

   for (i = 0; i < row; i++){
       for (j = 0; j < row - i; j++){
           cout <<"+";
       }
       cout <<endl;
   }

    return 0;
}