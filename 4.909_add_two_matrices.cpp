#include <iostream>
using namespace std;

int main()
{
    int rows = 2, columns = 2;

    // create 2D arrays
    int matrix_a[rows][columns];
    int matrix_b [rows][columns];
    int sum      [rows][columns];

    cout << "Enter the elements of the first matrix:\n";

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> matrix_a[i][j];
        }
    }

    cout << '\n' << "Enter the elements of the second matrix:\n";

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> matrix_b[i][j];
        }
    }

    cout << "The sum of the two matrices is: \n";

    // calculate and print the sum
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            sum[i][j] = matrix_a[i][j] + matrix_b[i][j];
            cout << sum[i][j] << "\t";

            if (j == columns - 1)
                cout << '\n';
        }
    }

    return 0;
}