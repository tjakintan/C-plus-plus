#include <iostream>
#include <string>

using namespace std;

int partition(string first_name[], string last_name[],int score[], int low, int high)
{
    int pivot = score[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (score[j] <= pivot) {
            i++;
            string temp = first_name[i];
            first_name[i] = first_name[j];
            first_name[j] = temp;
            temp = last_name[i];
            last_name[i] = last_name[j];
            last_name[j] = temp;
            int temp1 = score[i];
            score[i] = score[j];
            score[j] = temp1;
        }
    }
    string temp = first_name[i + 1];
    first_name[i + 1] = first_name[high];
    first_name[high] = temp;
    temp = last_name[i + 1];
    last_name[i + 1] = last_name[high];
    last_name[high] = temp;
    int temp1 = score[i + 1];
    score[i + 1] = score[high];
    score[high] = temp1;
    return (i + 1);
}
void quickSort(string first_name[], string last_name[],
               int score[], int low, int high){
    if (low < high) {
        int pi = partition(first_name, last_name, score, low, high);
        quickSort(first_name, last_name, score, low, pi - 1);
        quickSort(first_name, last_name, score, pi + 1, high);
    }
}


int main() {

    int n;
    int i;
    int max = 100;
    string first_names[max];
    string last_names[max];
    int score[max];

    cout << "How many students took the test ?" << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
            cout << "Student " << (i + 1) << "# " << "Name:      " << endl;
            cin >> first_names[i];
            cin >> last_names[i];

            cout << "Student " << (i + 1) << "# " << "Score:     " << endl;
            cin >> score[i];

    }

    quickSort(first_names, last_names, score, 0, n - 1);

    cout << "RESULTS: " << endl;

for (i = 0; i < n; i++)
    cout << first_names[i] << " " << last_names[i] << " - " << score[i] << endl;
















    return 0;
}
