#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

int main() {
    string nama, status;
    int nilai_tes_tulis, nilai_wawancara;
    double nilai_akhir, total_nilai_lulus = 0, rata_rata = 0;
    int data_valid = 0, data_tidak_valid = 0, pelamar_lulus = 0;
    double max1 = 0, max2 = 0;

    cout << "=== PROGRAM SISTEM SELEKSI ===" << endl;
    cout << "Ketik 'STOP' pada nama untuk mengakhiri input." << endl;
    cout << "----------------------------------------------" << endl;

    while (true) {
        cout << "\nMasukkan Nama: ";
        getline(cin, nama);

        if (nama == "STOP" || nama == "stop") {
            break;
        }

        cout << "Masukkan Nilai Tes Tulis (0-100): ";
        cin >> nilai_tes_tulis;
        cout << "Masukkan Nilai Wawancara (0-100): ";
        cin >> nilai_wawancara;
        cin.ignore(); 

        if ((nilai_tes_tulis > 100 || nilai_tes_tulis < 0) || (nilai_wawancara > 100 || nilai_wawancara < 0)) {
            cout << ">> Data Tidak Valid! (Nilai harus 0-100)" << endl;
            data_tidak_valid++;
        } else {
            data_valid++;

            nilai_akhir = (0.6 * nilai_tes_tulis) + (0.4 * nilai_wawancara);

            if (nilai_akhir >= 75) {
                status = "SELAMAT ANDA LULUS";
                pelamar_lulus++;
                total_nilai_lulus += nilai_akhir;
            } else {
                status = "ANDA TIDAK LULUS";
            }

            if (nilai_akhir > max1) {
                max2 = max1;
                max1 = nilai_akhir;
            } else if (nilai_akhir > max2) {
                max2 = nilai_akhir;
            }

            cout << "Hasil untuk " << nama << ":" << endl;
            cout << "- Nilai Akhir: " << fixed << setprecision(2) << nilai_akhir << endl;
            cout << "- Status     : " << status << endl;
        }
        cout << "----------------------------------------------" << endl;
    }

    if (pelamar_lulus > 0) {
        rata_rata = total_nilai_lulus / pelamar_lulus;
    }

    cout << "\n========== RINGKASAN STATISTIK ==========" << endl;
    cout << "Jumlah Data Valid       : " << data_valid << endl;
    cout << "Jumlah Data Tidak Valid : " << data_tidak_valid << endl;
    cout << "Jumlah Pelamar Lulus    : " << pelamar_lulus << endl;
    cout << "Rata-Rata Nilai (Lulus) : " << fixed << setprecision(2) << rata_rata << endl;
    cout << "Dua Nilai Tertinggi     : " << max1 << " dan " << max2 << endl;
    cout << "=========================================" << endl;

    return 0;
}