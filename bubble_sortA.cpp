#include <iostream>
#include <string>

using namespace std;


int arr[20]
int n;

void input() {
    int d;
    while(true){
        cout << "Masukan banyaknya elemnt (max 20): ";
        cin >> n;
        if (n <= 20) 
            break;
        else
        {
            cout << "Maksimal banyaknya elemen adalah 20";
        }
    }

    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan elemen array" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}