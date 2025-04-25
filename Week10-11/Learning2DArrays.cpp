#include <iostream>
using namespace std;

int main() {
    int numbers[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    int numRows = 3;
    int numCols = 4;

    // Iterate through each row
    for (int i = 0; i < numRows; ++i) {
       cout << "Row " << i << ": ";
        // Iterate through each column in the current row
        for (int j = 0; j < numCols; ++j) {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}