#include <iostream>
using namespace std;

int main()
{   
    int data;
    //menentukan panjang array
    cout << "masukan data array: ";
    cin >> data;
    int array[data];

    for(int i = 0; i < data; i++) {
        //menginput data array
        cout << "masukan angka ke "<<i+1 << ": ";
        cin >> array[i];
    }
    cout << endl;
    cout << "data array: ";
    for(int i = 0; i < data; i++) {
        //menampilkan data array
        cout << array[i] << ",";
    }

    cout << endl;
    cout << "data genap: ";
    for(int i = 0; i < data; i++) {
        //perkondisian jika genap
       if(array[i] %2 == 0) {
        cout << array[i] << ",";
       }
    }

    cout << endl;
    cout << "data ganjil: ";
    for(int i = 0; i < data; i++) {
        //perkondisian jika ganjil
       if(array[i] %2 == 1) {
        cout << array[i] << ",";
       }
    }

    
    return 0;
}
