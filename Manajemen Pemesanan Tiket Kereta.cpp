#include <iostream>
using namespace std;

// Mengelompokkan data ke dalam struct agar kode tetap pendek dan rapi
struct Tiket {
    string kodeTiket;
    string nama;
    string tujuan;
    string tanggal;
    string jam;
    string kelas;
    int gerbong;
    int kursi;
    int harga;
};

Tiket dataTiket[100];
int jumlahData = 0;

// === TUGAS RADEN ===
void tambahData() {
    int banyak;
    cout << "\n===== TAMBAH DATA TIKET =====\n";
    cout << "Masukkan jumlah data yang ingin ditambahkan : ";
    cin >> banyak;

    for (int i = 0; i < banyak; i++) {
        cout << "\nData Tiket ke-" << jumlahData + 1 << endl;
        cout << "Kode Tiket            : "; cin >> dataTiket[jumlahData].kodeTiket;
        cin.ignore();
        cout << "Nama Penumpang        : "; getline(cin, dataTiket[jumlahData].nama);
        cout << "Tujuan                : "; getline(cin, dataTiket[jumlahData].tujuan);
        cout << "Tanggal Keberangkatan : "; getline(cin, dataTiket[jumlahData].tanggal);
        cout << "Jam Keberangkatan     : "; getline(cin, dataTiket[jumlahData].jam);
        cout << "Kelas Kereta          : "; getline(cin, dataTiket[jumlahData].kelas);
        cout << "Nomor Gerbong         : "; cin >> dataTiket[jumlahData].gerbong;
        cout << "Nomor Kursi           : "; cin >> dataTiket[jumlahData].kursi;
        cout << "Harga Tiket           : "; cin >> dataTiket[jumlahData].harga;
        jumlahData++;
    }
    cout << "\nData berhasil ditambahkan.\n";
}

void tampilData() {
    if (jumlahData == 0) {
        cout << "\nData tiket masih kosong.\n";
        return;
    }

    cout << "\n==============================================================";
    cout << "\n            DATA PEMESANAN TIKET KERETA";
    cout << "\n==============================================================";
    for (int i = 0; i < jumlahData; i++) {
        cout << "\n\nData Tiket ke-" << i + 1 << endl;
        cout << "Kode Tiket            : " << dataTiket[i].kodeTiket << endl;
        cout << "Nama Penumpang        : " << dataTiket[i].nama << endl;
        cout << "Tujuan                : " << dataTiket[i].tujuan << endl;
        cout << "Tanggal Keberangkatan : " << dataTiket[i].tanggal << endl;
        cout << "Jam Keberangkatan     : " << dataTiket[i].jam << endl;
        cout << "Kelas Kereta          : " << dataTiket[i].kelas << endl;
        cout << "Nomor Gerbong         : " << dataTiket[i].gerbong << endl;
        cout << "Nomor Kursi           : " << dataTiket[i].kursi << endl;
        cout << "Harga Tiket           : Rp" << dataTiket[i].harga << endl;
    }
    cout << "\n==============================================================\n";
}

// === TUGAS LINTANG ===
void cariData() {
    if (jumlahData == 0) {
        cout << "\nData tiket masih kosong.\n";
        return;
    }

    string cari;
    bool ditemukan = false;
    cout << "\n===== CARI DATA TIKET =====\n";
    cout << "Masukkan Kode Tiket : "; cin >> cari;

    for (int i = 0; i < jumlahData; i++) {
        if (dataTiket[i].kodeTiket == cari) {
            cout << "\n===== DATA DITEMUKAN =====\n";
            cout << "Kode Tiket            : " << dataTiket[i].kodeTiket << endl;
            cout << "Nama Penumpang        : " << dataTiket[i].nama << endl;
            cout << "Tujuan                : " << dataTiket[i].tujuan << endl;
            cout << "Tanggal Keberangkatan : " << dataTiket[i].tanggal << endl;
            cout << "Jam Keberangkatan     : " << dataTiket[i].jam << endl;
            cout << "Kelas Kereta          : " << dataTiket[i].kelas << endl;
            cout << "Nomor Gerbong         : " << dataTiket[i].gerbong << endl;
            cout << "Nomor Kursi           : " << dataTiket[i].kursi << endl;
            cout << "Harga Tiket           : Rp" << dataTiket[i].harga << endl;
            ditemukan = true;
            break;
        }
    }
    if (!ditemukan) cout << "\nData dengan Kode Tiket " << cari << " tidak ditemukan.\n";
}

void bubbleSort() {
    if (jumlahData == 0) {
        cout << "\nData tiket masih kosong.\n";
        return;
    }

    Tiket temp; 
    for (int i = 0; i < jumlahData - 1; i++) {
        for (int j = 0; j < jumlahData - i - 1; j++) {
            if (dataTiket[j].harga > dataTiket[j + 1].harga) {
                temp = dataTiket[j];
                dataTiket[j] = dataTiket[j + 1];
                dataTiket[j + 1] = temp;
            }
        }
    }
    cout << "\nData berhasil diurutkan berdasarkan Harga Tiket (Termurah -> Termahal).\n";
}

void editData() {
    if (jumlahData == 0) {
        cout << "\nData tiket masih kosong.\n";
        return;
    }

    string cari;
    bool ditemukan = false;
    cout << "\n===== EDIT DATA TIKET =====\n";
    cout << "Masukkan Kode Tiket : "; cin >> cari;

    for (int i = 0; i < jumlahData; i++) {
        if (dataTiket[i].kodeTiket == cari) {
            cin.ignore();
            cout << "Nama Penumpang        : "; getline(cin, dataTiket[i].nama);
            cout << "Tujuan                : "; getline(cin, dataTiket[i].tujuan);
            cout << "Tanggal Keberangkatan : "; getline(cin, dataTiket[i].tanggal);
            cout << "Jam Keberangkatan     : "; getline(cin, dataTiket[i].jam);
            cout << "Kelas Kereta          : "; getline(cin, dataTiket[i].kelas);
            cout << "Nomor Gerbong         : "; cin >> dataTiket[i].gerbong;
            cout << "Nomor Kursi           : "; cin >> dataTiket[i].kursi;
            cout << "Harga Tiket           : "; cin >> dataTiket[i].harga;
            cout << "\nData berhasil diubah.\n";
            ditemukan = true;
            break;
        }
    }
    if (!ditemukan) cout << "\nData tidak ditemukan.\n";
}

void hapusData() {
    if (jumlahData == 0) {
        cout << "\nData tiket masih kosong.\n";
        return;
    }

    string cari;
    bool ditemukan = false;
    cout << "\n===== HAPUS DATA TIKET =====\n";
    cout << "Masukkan Kode Tiket : "; cin >> cari;

    for (int i = 0; i < jumlahData; i++) {
        if (dataTiket[i].kodeTiket == cari) {
            for (int j = i; j < jumlahData - 1; j++) {
                dataTiket[j] = dataTiket[j + 1];
            }
            jumlahData--;
            cout << "\nData berhasil dihapus.\n";
            ditemukan = true;
            break;
        }
    }
    if (!ditemukan) cout << "\nData tidak ditemukan.\n";
}

int main() {
    int pilih;
    do {
        cout << "\n=========================================\n";
        cout << "   MANAJEMEN PEMESANAN TIKET KERETA\n";
        cout << "=========================================\n";
        cout << "1. Tambah Data Tiket\n";
        cout << "2. Tampilkan Data Tiket\n";
        cout << "3. Cari Data Tiket (Linear Search)\n";
        cout << "4. Urutkan Data Tiket (Bubble Sort)\n";
        cout << "5. Edit Data Tiket\n";
        cout << "6. Hapus Data Tiket\n";
        cout << "7. Keluar\n";
        cout << "=========================================\n";
        cout << "Masukkan pilihan : "; cin >> pilih;

        switch (pilih) {
            case 1: tambahData(); break;
            case 2: tampilData(); break;
            case 3: cariData(); break;
            case 4: bubbleSort(); break;
            case 5: editData(); break;
            case 6: hapusData(); break;
            case 7: cout << "\nTerima kasih telah menggunakan program.\n"; break;
            default: cout << "\nPilihan tidak tersedia!\n";
        }
    } while (pilih != 7);

    return 0;
}
