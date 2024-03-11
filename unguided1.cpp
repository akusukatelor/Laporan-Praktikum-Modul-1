#include <iostream>

using namespace std;

string nama() {
    string name = "Alfin";
    string alamat = "Bogor";

    string tampung = name + alamat;

    return tampung;
}

int angka() {
    int num1,num2;

    cout << "masukan angka 1 dan 2: ";
    cin >> num1 >> num2;
    int hasil = num1+num2;
    cout << "hasilnnya adalah: ";
    return hasil;
}

int main()
{
    cout << nama();
    cout << angka();
    return 0;
}
