// Illustrate Dynamic Memory allocation using a 2d array and pointers

#include "assignment.h"

using namespace std;

int main()
{
    int row, col;

    assignment(1);
    
    // get size of rows and columns from user.
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int **parent_array = (int**)malloc(row * sizeof(int*));

    // allocate memory for sub arrays
    for (int i = 0; i < row; i++)
    {
        parent_array[i] = (int*)malloc(col * sizeof(int));
    }

    // Populate arrays
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element (" << i << ", " << j << "): ";
            cin >> parent_array[i][j];
        }
    }

    // Print arrays
    for (int i = 0; i < row; i++)
    {
        cout << "[";
        for (int j = 0; j < col; j++)
        {
            cout << " " << parent_array[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 1;
}