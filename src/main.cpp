#include <iostream>
#include <string> // Tambahan wajib supaya bisa menyimpan teks berspasi

using namespace std;

int main(int argc, char ** argv) {
    string nama;
    
    // Menampilkan tulisan ke layar
    cout << "Silahkan inputkan nama Anda: ";
    
    // Mengambil inputan dari keyboard (pakai getline supaya spasi ikut terbaca)
    getline(cin, nama);
    
    // Menampilkan output sesuai format tugas
    cout << "Hello " << nama << endl;

    return 0;
}