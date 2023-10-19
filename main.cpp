#include <iostream>

using namespace std;

int main()
{
    int firstValue = 10;
    int secondValue = 8;

    // tukar kedua value variabel menggunakan temp(variabel tambahan)
    int temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    cout << "first value: " << firstValue << endl;
    cout << "second value: " << secondValue << endl << endl;

    int nilaiPertama = 10;
    int nilaiKedua = 8;

    nilaiPertama = nilaiPertama + nilaiKedua;
    nilaiKedua = nilaiPertama - nilaiKedua;
    nilaiPertama = nilaiPertama - nilaiKedua;

    cout << "nilai pertama: " << nilaiPertama << endl;
    cout << "nilai kedua: " << nilaiKedua << endl << endl;


    int N, M;

    cout << "Sekor Bebek Pak Tatang: ";
    cin >> N;

    cout << "Dibagi ke temannya: ";
    cin >> M;

    int jumlah_bebek_yang_dikasih = N / M;
    int sisa_bebek = N % M;

    cout << "Jumlah bebek yang harus pak tatang kasih ke temannya: " << jumlah_bebek_yang_dikasih << endl;
    cout << "jumlah sisanya: " << sisa_bebek << endl;

    return 0;
}
