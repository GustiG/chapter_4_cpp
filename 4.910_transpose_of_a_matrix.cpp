// The transpose of a matrix is a new matrix that is obtained by exchanging the rows and clumns
#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    int matrix[10][10], transpose[10][10];

    cout << "Enter the rows and columns of the matrix:\n";
    cin >> rows >> columns;

    cout << "Enter the elements of the matrix:\n";

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
        cout << "Enter element a" << i + 1 << j + 1 << ": ";
        cin >> matrix[i][j];
        }
    }

    cout << "Entered matrix: " << '\n';

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << matrix[i][j] << "\t";
            if (j == columns - 1)
                cout << '\n';
        }
    }

    cout << "Transpose of Matrix: " << '\n';

    for (int i = 0; i < columns; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            transpose[i][j] = matrix[j][i];
            cout << transpose[i][j] << "\t";
            if ( j == rows - 1)
                cout << '\n';
        }
    }

    return 0;
}
