#include <iostream>

using namespace std;
int main()
{
    char op;
    float num1, num2;

    cout << "masukan operator (+,-,*,/)";
    cin >> op;

    cout << "masukan angka ke 1: ";
    cin >> num1;
    cout << "masukan angka ke 2: ";
    cin >> num2;

    switch(op) {
        case '+':
        cout << num1 + num2;
        break;
        case '-':
        cout << num1-num2;
        break;
        case '*':
        cout << num1*num2;
        break;
        case '/':
        cout << num1/num2;
        break;
        default:
            cout << "Error operator doesn't correct";
    }
    return 0;
}
