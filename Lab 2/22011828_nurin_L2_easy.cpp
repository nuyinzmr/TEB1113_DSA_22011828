/*
ID : 22011828
Name : Nurin Najwa Binti Zamri
Lab : 2
*/

#include <iostream>
using namespace std;

int main() {
    int a[100], b[100]; 
    int m , n = 0;

    cout << "Enter size of array a[]: ";
    cin >> m;
    cout << "Enter elements of array a[]: ";
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    cout << "Enter size of array b[]: ";
    cin >> n;
    cout << "Enter elements of array b[]: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    bool subset = true;

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < m; j++) {
            if (b[i] == a[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            subset = false;
            break;
        }
    }

    if (subset) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
