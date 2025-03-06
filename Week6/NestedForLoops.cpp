#include <iostream>

using namespace std;

int main() {

    // 1. Introduction:
    //    - Nested loops are loops inside other loops.
    //    - The inner loop completes all its iterations for each iteration of the outer loop.
    //    - Useful for working with 2D structures (matrices, grids), patterns, etc.

    // 2. Basic Example: Printing a 2D Grid
    cout << "--- 2D Grid ---" << endl;
    for (int i = 0; i < 3; i++) { // Outer loop (rows)
        for (int j = 0; j < 4; j++) { // Inner loop (columns)
            cout << "* ";
        }
        cout << endl; // Move to the next row
    }

    // 3. Explanation:
    //    - The outer loop controls the rows.
    //    - The inner loop controls the columns.
    //    - For each row, the inner loop completes all its iterations before the outer loop moves to the next row.
    //    - Trace the execution to show how the loops interact.

    // 4. Example: Printing a Triangle Pattern
    cout << "\n--- Triangle Pattern ---" << endl;
    for (int i = 1; i <= 5; i++) { // Outer loop (rows)
        for (int j = 1; j <= i; j++) { // Inner loop (columns)
            cout << "*";
        }
        cout << endl;
    }

    // 5. Explanation:
    //    - The inner loop's condition depends on the outer loop's counter (i).
    //    - This creates a pattern where the number of stars in each row increases.

    // 6. Example: Multiplication Table
    cout << "\n--- Multiplication Table ---" << endl;
    for (int i = 1; i <= 5; i++) { // Outer loop (multiplicand)
        for (int j = 1; j <= 5; j++) { // Inner loop (multiplier)
            cout << i * j << "\t"; // Use '\t' for tab spacing
        }
        cout << endl;
    }

    return 0;
}