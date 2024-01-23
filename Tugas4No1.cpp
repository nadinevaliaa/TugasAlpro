#include <iostream>

int main() {
    // Deklarasi dan inisialisasi matriks
    int matriksA[2][2] = {{1, 2}, {3, 4}};
    int matriksB[2][2] = {{5, 6}, {7, 8}};
    int hasil[2][2];

    // Melakukan perkalian matriks
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = 0;
            for (int k = 0; k < 2; k++) {
            hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    // Menampilkan hasil perkalian
    std::cout << "Hasil Perkalian Matriks:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << hasil[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}