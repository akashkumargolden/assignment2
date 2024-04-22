#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the square 2D array: ";
    cin >> size;

    int arr[size][size];
    
    cout << "Enter the elements of the " << size << "x" << size << " array:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }
    

    int mainDiagonalSum = 0;
    for (int i = 0; i < size; ++i) {
        mainDiagonalSum += arr[i][i];
    }
    

    int secondaryDiagonalSum = 0;
    for (int i = 0; i < size; ++i) {
        secondaryDiagonalSum += arr[i][size - 1 - i];
    }
    cout << "Sum of main diagonal elements: " << mainDiagonalSum << endl;
    cout << "Sum of secondary diagonal elements: " << secondaryDiagonalSum << endl;
    
    return 0;
}
