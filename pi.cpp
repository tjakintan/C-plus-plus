#include <iostream>
#include <ctime>
#include <time.h>
#include <cstdlib>

using namespace std;

int main() {

int n;
int i;
double randX;
double randY;
double originDist;
double pi;
double circlePoints = 0;
double squarePoints = 0;

srand (time(NULL));

cout << "What is N"<< endl;
cin >> n;

for (i = 0; i < (n * n); i++) {
    randX = (rand() % (n + 1))/ n;
    randY = (rand() % (n + 1)) / n;

    originDist = randX * randX + randY * randY;

    if (originDist <= 1)
        circlePoints++;

    squarePoints++;

    pi = (4 * circlePoints)/squarePoints;

}
 cout << "Final estimation of pi: " << pi;

    return 0;
}
