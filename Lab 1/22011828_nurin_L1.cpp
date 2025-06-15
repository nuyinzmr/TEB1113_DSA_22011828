/*
ID : 22011828
Name : Nurin Najwa Binti Zamri
Lab : 1
*/
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int id;
    string email;
    string phone;
};

int main() {
    Student students[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, students[i].name);

        cout << "ID: ";
        cin >> students[i].id;
        cin.ignore();

        cout << "Email: ";
        getline(cin, students[i].email);

        cout << "Contact: ";
        getline(cin, students[i].phone);

    }

    cout<<"\n";
    cout<<"********************************************************\n";

    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << "\n";
        cout << "Name: " << students[i].name << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Email: " << students[i].email << endl;
        cout << "Contact: " << students[i].phone << endl;
        cout<<"********************************************************\n";
    }

    return 0;
}
