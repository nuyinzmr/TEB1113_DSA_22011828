/*
ID : 22011828
Name : Nurin Najwa Binti Zamri
Lab : 2
*/

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    int mat[100][100];
    int row[100] = {0};
    int col[100] = {0};

    cout << "Enter 0 or 1:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (mat[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (row[i] == 1 || col[j] == 1)
                mat[i][j] = 1;

    cout << "\nModified Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}

