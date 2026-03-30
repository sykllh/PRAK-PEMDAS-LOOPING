#include <iostream>
using namespace std;

//Deklarasi variabel global
int kodeJurusan;
string namaJurusan;
string statusKouta;

//prosedur input
void input() {
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" << endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" << endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;   
}

//prosedur untuk pengecekan kondisi
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "Teknologi Informasi";
            statusKouta = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "Teknik Elektro";
            statusKouta = "Kouta Penuh!";
            break;
        case 3:
            namaJurusan = "Sistem Informasi";
            statusKouta = "Tersedia (5 Kursi)";
            break;
        default:
        namaJurusan = "Tidak Diketahui";
        statusKouta = "Error: Kode Tidak Valid";
    }
}