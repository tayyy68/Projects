#include <iostream>
#include <limits> 

using namespace std;

int main() {
    int rows, cols;

    // Get and validate row dimension
    do {
        cout << "Enter number of rows (max 3): ";
        while (!(cin >> rows)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer (max 3): ";
        }
        if (rows < 1 || rows > 3) {
            cout << "Row count must be between 1 and 3. Please try again." << endl;
        }
    } while (rows < 1 || rows > 3);

    // Get and validate column dimension
    do {
        cout << "Enter number of columns (max 3): ";
        while (!(cin >> cols)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer (max 3): ";
        }
        if (cols < 1 || cols > 3) {
            cout << "Column count must be between 1 and 3. Please try again." << endl;
        }
    } while (cols < 1 || cols > 3);

    // Dynamically allocate 2D array
    double** array2D = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array2D[i] = new double[cols];
    }

    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            while (!(cin >> array2D[i][j])) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a numeric value: ";
            }
        }
    }

    cout << "\nArray contents:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array2D[i][j] << "\t";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] array2D[i];
    }
    delete[] array2D;

    return 0;
}