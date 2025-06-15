/*
ID : 22011828
Name : Nurin Najwa Binti Zamri
Lab : 2
*/

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    int matrix[100][100];
    cout << "Enter elements of the matrix (" << m << "x" << n << "):\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    int rotated[100][100];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            rotated[n - 1 - j][i] = matrix[i][j];
        }
    }

    cout << "\n Rotated 90 degrees matrix :\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

