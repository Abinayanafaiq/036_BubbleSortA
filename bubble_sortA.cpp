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

void bubbleSortArray() {
    int pass = 1;

    do 
    {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass += 1; //
        cout << "Pass " << pass - 1 << ": ";\
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;

    } while (pass <= n - 1); 
}

void display(){
    cout << endl;
    cout << "====================" << endl;
    cout << "Elemen array yang sudah tersusun: " << endl;
    cout << "====================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
        if (j < n - 1) {
            cout << "-->";
        }
    }
    cout << endl;
    cout << endl;

    cout << "Jumlah pass =" << n - 1 << endl;
    cout << endl;
    cout << endl;
}