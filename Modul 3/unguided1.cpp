#include <iostream>

using namespace std;

// deklarasi single linked list
struct Data{

  // komponen / member
  string nama;
  int umur;

  Data *next;

};

  Data *head, *tail, *cur, *newNode, *del, *before;

// create single linked list
void createSingleLinkedList(string nama,  int umur){
  head = new Data;
  head->nama = nama;
  head->umur = umur;
  head->next = NULL;
  tail = head;
}


// print single linked list
int countSingleLinkedList(){
  cur = head;
  int jumlah = 0;
  while( cur != NULL ){
    jumlah++;
    cur = cur->next;
  }
  return jumlah;
}

// tambahAwal Single linked list
void addFirst(string nama,  int umur){
  newNode = new Data;
  newNode->nama = nama;
  
  newNode->umur = umur;
  newNode->next = NULL;
  if(head == NULL) {
    head = tail = newNode;
  } else {
newNode->next = head;
  head = newNode;
  }
}

// tambahAkhir Single linked list
void addLast(string nama,  int umur){
  newNode = new Data;
  newNode->nama = nama;
  
  newNode->umur = umur;
  newNode->next = NULL;
  if(head == NULL) {
    head = tail = newNode;
  } else {
tail->next = newNode;
  tail = newNode;
  }
  
}

// tambah tengah single linked list
void addMiddle(string nama,  int umur, int posisi){
  if( posisi < 1 || posisi > countSingleLinkedList() ){
    cout << "Posisi diluar jangkauan" << endl;
  }else if( posisi == 1){
    cout << "Posisi bukan posisi tengah" << endl;
  }else{
    newNode = new Data;
    newNode->nama = nama;
    
    newNode->umur = umur;

    // tranversing
    cur = head;
    int nomor = 1;
    while( nomor < posisi - 1 ){
      cur = cur->next;
      nomor++;
    }
    newNode->next = cur->next;
    cur->next = newNode;
  }
}


// Remove First
void removeFirst(){
  del = head;
  head = head->next;
  delete del;
}

// Remove Last
void removeLast(){
  del = tail;
  cur = head;
  while( cur->next != tail ){
    cur = cur->next;
  }
  tail = cur;
  tail->next = NULL;
  delete del;
}

// remove middle
void removeMiddle(int posisi){
  if( posisi < 1 || posisi > countSingleLinkedList() ){
    cout << "Posisi diluar jangkauan" << endl;
  }else if( posisi == 1){
    cout << "Posisi bukan posisi tengah" << endl;
  }else{
    int nomor = 1;
    cur = head;
    while( nomor <= posisi ){
      if( nomor == posisi-1 ){
        before = cur;
      }
      if( nomor == posisi ){
        del = cur;
      }
      cur = cur->next;
      nomor++;
    }
    before->next = cur;
    delete del;
  }
}

// ubahAwal Single linked list
void changeFirst(string nama,  int umur){
  head->nama = nama;
  head->umur = umur;
}

// ubahAkhir Single linked list
void changeLast(string nama,  int umur){
  tail->nama = nama;
  
  tail->umur = umur;
}

// ubah Tengah Single linked list
void changeMiddle(string nama,  int umur, int posisi){
  if( posisi < 1 || posisi > countSingleLinkedList() ){
    cout << "Posisi diluar jangkauan" << endl;
  }else if( posisi == 1 || posisi == countSingleLinkedList() ){
    cout << "Posisi bukan posisi tengah" << endl;
  }else{
    cur = head;
    int nomor = 1;
    while( nomor < posisi ){
      cur = cur->next;
      nomor++;
    }
    cur->nama = nama;
    
    cur->umur = umur;
  }
}

// print single linked list
void printSingleLinkedList(){
  if(head != NULL) {
  cur = head;
  while( cur != NULL ){
    cout <<  cur->nama << "\t";
   
    cout << cur->umur << endl;

    cur = cur->next;
  }
  cout << endl;
  }
}

int main(){
int choose, umur, posisi;
    string nama;
    cout << "Data Mahasiswa" << endl;
    do
    {
        cout << " 1. Tambah Depan" << endl;
        cout    << " 2. Tambah Belakang"<< endl;
        cout     << " 3. Tambah Tengah"<< endl;
        cout     << " 4. Hapus Depan"<< endl;
        cout     << " 5. Hapus Belakang"<< endl;
        cout     << " 6. Hapus Tengah"<< endl;
        cout     << " 7. Ubah Depan"<< endl;
        cout    << " 8. Ubah Belakang"<< endl;
        cout     << " 9. Ubah Tengah"<< endl;
        cout     << " 10. Tampilkan"<< endl;
        cout     << " 0. Keluar Program"<< endl;
        cout    << " Pilihan : ";
        cin >> choose;
        switch (choose)
        {
        case 1:
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan umur : ";
            cin >> umur;
            addFirst(nama,umur);
            cout << endl;
            
            break;
        case 2:
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan umur : ";
            cin >> umur;
            addLast(nama,umur);
            cout << endl;
            
            break;
        case 3:
            cout << "Masukkan Posisi : ";
            cin >> posisi;
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan umur : ";
            cin >> umur;
            addMiddle(nama,umur,posisi);
            cout << endl;
            
            break;
        case 4:
            removeFirst();
            cout << endl;
            
            break;
        case 5:
            removeLast();
            cout << endl;
            
            break;
        case 6:
            cout << "Masukkan Posisi : ";
            cin >> posisi;
            removeMiddle(posisi);
            cout << endl;
            
            break;
        case 7:
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan umur : ";
            cin >> umur;
            changeFirst(nama,umur);
            cout << endl;
            
            break;
        case 8:
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan umur : ";
            cin >> umur;
            changeLast(nama,umur);
            cout << endl;
            
            break;
        case 9:
            cout << "Masukkan Posisi : ";
            cin >> posisi;
            cout << "Masukkan Nama : ";
            cin >> nama;
            cout << "Masukkan umur : ";
            cin >> umur;
            changeMiddle(nama,umur,posisi);
            cout << endl;
            
            break;
        case 10:
            printSingleLinkedList();
            break;
        case 0:
            cout << "terimakasih";
            break;
        default:
            cout << "Pilihan Salah" << endl;
            break;
        }
    } while (choose != 0);
 

}