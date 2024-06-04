#include <iostream>

using namespace std;

string kalimat;
int banyak = 0;
char huruf;
int main()
{
    cout << "masukan kalimat: ";
    getline(cin,kalimat);

    for(int i = 0; i < kalimat.length(); i++) {
        huruf = kalimat[i];
        if(huruf == 'a'|| huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o') {
            banyak++;
        }
    }

    cout << "huruf vokal pada kalimat tersebut ada " << banyak;
    return 0;
}
