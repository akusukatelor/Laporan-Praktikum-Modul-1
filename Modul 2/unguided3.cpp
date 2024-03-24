#include <iostream>

using namespace std;

int main()
{
    int nilai;
    cout << "masukan nilai array: ";
    cin >> nilai;
    int isi[nilai];
    int maks=0;
    double rata;
    float total;




    for(int i = 0; i < nilai; i++) {
        cout << "masukan nilai ke " << i + 1 <<":";
        cin >> isi[i];
    }
    for(int b = 0; b < nilai; b++) {
        cout << isi[b] << " ";
    }

    cout << endl;
    for(int d = 0; d < nilai; d++) {
        if(isi[d] > maks) {
            maks = isi[d];
        }
    }
    cout << "nilai terbsesarnya adalah " << maks;

    cout << endl;
    for(int c = 0; c < nilai; c++) {
        if(isi[c] < maks) {
            maks = isi[c];
        }
    }
    cout << "nilai terkecil " << maks;
    cout << endl;

    for(int e = 0; e < nilai; e++) {
        total = total + isi[e];
        rata = total / nilai;
    }
        cout<< "rata rata adalah " << rata;
    return 0;
}
