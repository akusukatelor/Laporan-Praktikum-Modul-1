#include <iostream>
#include <stdio.h>
using namespace std;

struct Mahasiswa {
    const char *name;
    const char *address;
    int age;
};

int main()
{
    Mahasiswa mhs1,mhs2;

    mhs1.name = "Alfin";  
    mhs1.address = "Bogor";  
    mhs1.age = 19;  
    mhs2.name = "natasya";  
    mhs2.address = "Mujur";  
    mhs2.age = 18;  


    printf("Mahasiswa 1\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("Mahasiswa 2 \n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Age: %d", mhs2.age);
    return 0;
}
