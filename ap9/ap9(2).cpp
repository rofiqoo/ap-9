#include <iostream>
#include <cmath>

// Definisikan tipe data Record/struktur untuk titik
struct Point {
    double x;
    double y;
};

// Fungsi untuk menghitung jarak antara dua titik
double hitung_jarak(const Point& titik1, const Point& titik2) {
    double jarak = sqrt(pow(titik2.x - titik1.x, 2) + pow(titik2.y - titik1.y, 2));
    return jarak;
}

int main() {
    // Input koordinat titik pertama
    double x1, y1;
    std::cout << "Masukkan koordinat x titik pertama: ";
    std::cin >> x1;
    std::cout << "Masukkan koordinat y titik pertama: ";
    std::cin >> y1;

    // Input koordinat titik kedua
    double x2, y2;
    std::cout << "Masukkan koordinat x titik kedua: ";
    std::cin >> x2;
    std::cout << "Masukkan koordinat y titik kedua: ";
    std::cin >> y2;

    // Buat objek titik pertama
    Point titik1 = {x1, y1};

    // Buat objek titik kedua
    Point titik2 = {x2, y2};

    // Hitung jarak antara dua titik
    double jarak = hitung_jarak(titik1, titik2);

    // Output hasil
    std::cout << "Jarak antara dua titik adalah: " << jarak << std::endl;

return 0;
}
