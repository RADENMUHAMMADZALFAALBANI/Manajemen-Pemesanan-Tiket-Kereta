#include <iostream>
using namespace std;

string kodeTiket[100];
string nama[100];
string tujuan[100];
string tanggal[100];
string jam[100];
string kelas[100];

int gerbong[100];
int kursi[100];
int harga[100];

int jumlahData = 0;

void tambahData() {
    int banyak;

    cout << "\n===== TAMBAH DATA TIKET =====\n";
    cout << "Masukkan jumlah data yang ingin ditambahkan : ";
    cin >> banyak;

    for (int i = 0; i < banyak; i++) {
        cout << "\nData Tiket ke-" << jumlahData + 1 << endl;

        cout << "Kode Tiket            : ";
        cin >> kodeTiket[jumlahData];

        cin.ignore();

        cout << "Nama Penumpang        : ";
        getline(cin, nama[jumlahData]);

        cout << "Tujuan                : ";
        getline(cin, tujuan[jumlahData]);

        cout << "Tanggal Keberangkatan : ";
        getline(cin, tanggal[jumlahData]);

        cout << "Jam Keberangkatan     : ";
        getline(cin, jam[jumlahData]);

        cout << "Kelas Kereta          : ";
        getline(cin, kelas[jumlahData]);

        cout << "Nomor Gerbong         : ";
        cin >> gerbong[jumlahData];

        cout << "Nomor Kursi           : ";
        cin >> kursi[jumlahData];

        cout << "Harga Tiket           : ";
        cin >> harga[jumlahData];

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
        cout << "Kode Tiket            : " << kodeTiket[i] << endl;
        cout << "Nama Penumpang        : " << nama[i] << endl;
        cout << "Tujuan                : " << tujuan[i] << endl;
        cout << "Tanggal Keberangkatan : " << tanggal[i] << endl;
        cout << "Jam Keberangkatan     : " << jam[i] << endl;
        cout << "Kelas Kereta          : " << kelas[i] << endl;
        cout << "Nomor Gerbong         : " << gerbong[i] << endl;
        cout << "Nomor Kursi           : " << kursi[i] << endl;
        cout << "Harga Tiket           : Rp" << harga[i] << endl;
    }

    cout << "\n==============================================================\n";
}

void cariData() {

    if (jumlahData == 0) {
        cout << "\nData tiket masih kosong.\n";
        return;
    }

    string cari;
    bool ditemukan = false;

    cout << "\n===== CARI DATA TIKET =====\n";
    cout << "Masukkan Kode Tiket : ";
    cin >> cari;

    for (int i = 0; i < jumlahData; i++) {

        if (kodeTiket[i] == cari) {

            cout << "\n===== DATA DITEMUKAN =====\n";
            cout << "Kode Tiket            : " << kodeTiket[i] << endl;
            cout << "Nama Penumpang        : " << nama[i] << endl;
            cout << "Tujuan                : " << tujuan[i] << endl;
            cout << "Tanggal Keberangkatan : " << tanggal[i] << endl;
            cout << "Jam Keberangkatan     : " << jam[i] << endl;
            cout << "Kelas Kereta          : " << kelas[i] << endl;
            cout << "Nomor Gerbong         : " << gerbong[i] << endl;
            cout << "Nomor Kursi           : " << kursi[i] << endl;
            cout << "Harga Tiket           : Rp" << harga[i] << endl;

            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "\nData dengan Kode Tiket " << cari << " tidak ditemukan.\n";
    }
}

void bubbleSort() {

    if (jumlahData == 0) {
        cout << "\nData tiket masih kosong.\n";
        return;
    }

    string tempKode, tempNama, tempTujuan, tempTanggal;
    string tempJam, tempKelas;
    int tempGerbong, tempKursi, tempHarga;

    for (int i = 0; i < jumlahData - 1; i++) {

        for (int j = 0; j < jumlahData - i - 1; j++) {

            if (harga[j] > harga[j + 1]) {

                // Tukar Harga
                tempHarga = harga[j];
                harga[j] = harga[j + 1];
                harga[j + 1] = tempHarga;

                // Tukar Kode Tiket
                tempKode = kodeTiket[j];
                kodeTiket[j] = kodeTiket[j + 1];
                kodeTiket[j + 1] = tempKode;

                // Tukar Nama
                tempNama = nama[j];
                nama[j] = nama[j + 1];
                nama[j + 1] = tempNama;

                // Tukar Tujuan
                tempTujuan = tujuan[j];
                tujuan[j] = tujuan[j + 1];
                tujuan[j + 1] = tempTujuan;

                // Tukar Tanggal
                tempTanggal = tanggal[j];
                tanggal[j] = tanggal[j + 1];
                tanggal[j + 1] = tempTanggal;

                // Tukar Jam
                tempJam = jam[j];
                jam[j] = jam[j + 1];
                jam[j + 1] = tempJam;

                // Tukar Kelas
                tempKelas = kelas[j];
                kelas[j] = kelas[j + 1];
                kelas[j + 1] = tempKelas;

                // Tukar Gerbong
                tempGerbong = gerbong[j];
                gerbong[j] = gerbong[j + 1];
                gerbong[j + 1] = tempGerbong;

                // Tukar Kursi
                tempKursi = kursi[j];
                kursi[j] = kursi[j + 1];
                kursi[j + 1] = tempKursi;
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
    cout << "Masukkan Kode Tiket : ";
    cin >> cari;

    for (int i = 0; i < jumlahData; i++) {

        if (kodeTiket[i] == cari) {

            cin.ignore();

            cout << "Nama Penumpang        : ";
            getline(cin, nama[i]);

            cout << "Tujuan                : ";
            getline(cin, tujuan[i]);

            cout << "Tanggal Keberangkatan : ";
            getline(cin, tanggal[i]);

            cout << "Jam Keberangkatan     : ";
            getline(cin, jam[i]);

            cout << "Kelas Kereta          : ";
            getline(cin, kelas[i]);

            cout << "Nomor Gerbong         : ";
            cin >> gerbong[i];

            cout << "Nomor Kursi           : ";
            cin >> kursi[i];

            cout << "Harga Tiket           : ";
            cin >> harga[i];

            cout << "\nData berhasil diubah.\n";

            ditemukan = true;
            break;
        }
    }

    if (ditemukan == false) {
        cout << "\nData tidak ditemukan.\n";
    }
}

void hapusData() {

    if (jumlahData == 0) {
        cout << "\nData tiket masih kosong.\n";
        return;
    }

    string cari;
    bool ditemukan = false;

    cout << "\n===== HAPUS DATA TIKET =====\n";
    cout << "Masukkan Kode Tiket : ";
    cin >> cari;

    for (int i = 0; i < jumlahData; i++) {

        if (kodeTiket[i] == cari) {

            for (int j = i; j < jumlahData - 1; j++) {

                kodeTiket[j] = kodeTiket[j + 1];
                nama[j] = nama[j + 1];
                tujuan[j] = tujuan[j + 1];
                tanggal[j] = tanggal[j + 1];
                jam[j] = jam[j + 1];
                kelas[j] = kelas[j + 1];
                gerbong[j] = gerbong[j + 1];
                kursi[j] = kursi[j + 1];
                harga[j] = harga[j + 1];

            }

            jumlahData--;

            cout << "\nData berhasil dihapus.\n";

            ditemukan = true;
            break;
        }
    }

    if (ditemukan == false) {
        cout << "\nData tidak ditemukan.\n";
    }
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
        cout << "Masukkan pilihan : ";
        cin >> pilih;

        switch (pilih) {

        case 1:
            tambahData();
            break;

        case 2:
            tampilData();
            break;

        case 3:
            cariData();
            break;

        case 4:
            bubbleSort();
            break;

        case 5:
            editData();
            break;

        case 6:
            hapusData();
            break;

        case 7:
            cout << "\nTerima kasih telah menggunakan program.\n";
            break;

        default:
            cout << "\nPilihan tidak tersedia!\n";
        }

    } while (pilih != 7);

    return 0;
}
