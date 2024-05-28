#include <iostream>
#include <string>

using namespace std;


struct Data {
    string nama;
    string nim;
    Data *next;
};
    int maxData = 5;
    Data *front,*back,*newNode,*current,*del;

    
    int countData() {
        if(front== NULL){
            return 0;
        }else {
            int banyakData = 0;
            current = front;
            while(current != NULL) {
                current = current->next;
                banyakData++;
            }
            return banyakData;
        }
    }

    bool isDataFull() {
        if(countData() == maxData) {
            return true;
        }else {
            return false;
        }
    }

    bool isDataEmpty() {
        if(countData() == 0) {
            return true;
        }else {
            return false;
        }
    }

    void enqueueData(string nama, string nim) {
        if(isDataFull()) {
            cout << "data penuh!:" << endl;
        }else {
            if(isDataEmpty()) {
                front = new Data(); 
                front->nama = nama;
                front->nim = nim;
                front->next = NULL;
                back = front;
                cout << "Antrian telah ditambahkan!" << endl;
            }else {
                newNode = new Data();
                newNode->nama = nama;
                newNode->nim = nim;
                newNode->next = NULL;
                back->next = newNode;
                back = newNode;
                cout << "Antrian telah ditambahkan!" << endl;
            }
        }
    }

    void dequeueData() {
        del = front;
        front = front->next;
        del->next = NULL;
        delete del;
        cout << "1 data dihapus" << endl;
    }

    void clearData() {
        current = front;
        while(current != NULL) {
            newNode = current;
            current = current->next;
            newNode = NULL;
        }
        front = back = NULL;
        
    }

    void viewData() {
        int i = 1;
        
        if(isDataEmpty()) {
            cout << "data masih kosong! " <<endl;
        }else {
            current = front;
        cout << "Data Mahasiswa: " <<endl;
        while(current != NULL) {
            cout << i++ << ". " << current->nama << " - " << current->nim << endl;
            current = current->next;
        }
        }
    }
int main()
{
    int pilih;
    string nama,nim;
    while (true)
    {
        cout << "Data Mahasiswa : " << endl;
        cout << "1. Tambah Data Mahasiswa" << endl;
        cout << "2. Hapus Data Mahasiswa" << endl;
        cout << "3. View Data" << endl;
        cout << "4. Clear Data" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            cout << "Masukkan Nama : ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan Nim : ";
            cin >> nim;
            enqueueData(nama,nim);
            
            break;
        case 2:
            dequeueData();
            break;
        case 3:
            viewData();
            break;
        case 4:
            clearData();
            cout << "Data dibersihkan " <<endl;
            break;
        case 5:
            return 0;
            break;
        default:
            break;
        }
    } 
    return 0;
}
