#include <iostream>
#include <string>

using namespace std;

//struct
struct mahasiswa {
    //deklarasi variabel
    string nama;
    __INT64_TYPE__ nim;
    string jurusan;
};

class pelajar{

//tipe class
public:
    //deklarasi variabel
    string nama;
    int absen;
    string jurusan;
    
    }
;


int main() {
    //deklarasi key atau kata kunci
    mahasiswa mhs;
    pelajar student;
   
    
    cout << "mahasiswa" <<endl;
    //input data mahasiswa
    cout <<"nama: ";
    //untuk menginput yang mengandung spasi
    getline(cin,mhs.nama);
    cout << "nim: ";
    cin >> mhs.nim;
    cout << "jurusan: ";
    //jika menggunakan getline lebih dari sekali harus ditambahkan cin ignore agar tidak terjadi kesalahan
    cin.ignore();
    getline(cin,mhs.jurusan);

    cout << endl;

    cout << "pelajar: " <<endl;
    //input data pelajar
    cout <<"nama: ";
    //untuk menginput yang mengandung spasi
    getline(cin,student.nama);
    cout << "absen: ";
    cin >> student.absen;
    cout << "jurusan: ";
    //jika menggunakan getline lebih dari sekali harus ditambahkan cin ignore agar tidak terjadi kesalahan
    cin.ignore();
    getline(cin,student.jurusan);

    cout << endl;

    //menampilkan hasil data mahasiswa
    cout << "data mahasiswa: " << endl;
    cout << "nama: "<<mhs.nama << endl;
    cout << "nim: "<<mhs.nim << endl;
    cout << "jurusan: "<<mhs.jurusan << endl;

    cout << endl;
    //menampilkan hasil data pelajar
    cout << "data pelajar: " << endl;
    cout << "nama: "<<student.nama << endl;
    cout << "absen: "<<student.absen << endl;
    cout << "jurusan: "<<student.jurusan << endl;
}
