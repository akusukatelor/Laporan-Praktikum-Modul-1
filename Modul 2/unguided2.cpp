#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    int bk,baris,kolom;
  // Deklarasi array
  cout << "nilai baris kolom: ";
  cin >> bk;
  cout << "nilai baris: ";
  cin >> baris;
  cout << "nilai kolom: ";
  cin >> kolom;
  int arr[bk][baris][kolom];
  // Input elemen
  for (int x = 0; x < bk; x++)
  {
    for (int y = 0; y < baris; y++)
    {
      for (int z = 0; z < kolom; z++)
      {
        cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
        cin >> arr[x][y][z];
      }
    }
    cout << endl;
  }
  // Output Array
  for (int x = 0; x < bk; x++)
  {
    for (int y = 0; y < baris; y++)
    {
      for (int z = 0; z < kolom; z++)
      {
        cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
      }
    }
  }
  cout << endl;
  // Tampilan array
  for (int x = 0; x < bk; x++)
  {
    for (int y = 0; y < baris; y++)
    {
      for (int z = 0; z < kolom; z++)
      {
        cout << arr[x][y][z] << ends;
      }
      cout << endl;
    }
    cout << endl;
  }
}