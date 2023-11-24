#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int jumlahData = 20;
    string kode_brg[jumlahData];
    string nama_brg[jumlahData];
    int jumlah[jumlahData];
    double harga_satuan[jumlahData];

    // Input data
    cout << "Masukkan data penjualan:" << endl;
    for (int i = 0; i < jumlahData; ++i) {
        cout << "Data ke-" << i + 1 << ":" << endl;
        cout << "Kode_brg: ";
        cin >> kode_brg[i];
        cout << "Nama_brg: ";
        cin.ignore();
        getline(cin, nama_brg[i]);
        cout << "Jumlah: ";
        cin >> jumlah[i];
        cout << "Harga Satuan (Rp.): ";
        cin >> harga_satuan[i];
    }

    // Hitung total harga penjualan
    double totalHarga = 0;
    for (int i = 0; i < jumlahData; ++i) {
        totalHarga += jumlah[i] * harga_satuan[i];
    }

    // Hitung keuntungan
    double keuntungan = 0.1 * totalHarga;

    // Tampilkan output
    cout << "--------------------------------------------------------------\n";
    cout << setw(10) << "Kode_brg" << setw(15) << "Nama_brg" << setw(10) << "Jumlah" << setw(20) << "Harga Satuan" << endl;
    for (int i = 0; i < jumlahData; ++i) {
        cout << setw(10) << kode_brg[i] << setw(15) << nama_brg[i] << setw(10) << jumlah[i] << setw(10) << "Rp." << fixed << setprecision(2) << harga_satuan[i] << endl;
    }
    cout << "--------------------------------------------------------------\n";
    cout << setw(35) << "Total Harga Penjualan: Rp." << fixed << setprecision(2) << totalHarga << endl;
    cout << setw(35) << "Keuntungan (10%): Rp." << fixed << setprecision(2) << keuntungan << endl;

return 0;
}