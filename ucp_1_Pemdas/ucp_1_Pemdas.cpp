#include <iostream>
using namespace std;

int main()
{
    float nMat, nBing, rerata;
    string status;

    cout << " nilai matematika Asroni = 90";
    cin >> nMat;
    cout << " nilai matematika Lia = 89";
    cin >> nMat;
    cout << " nilai matematika Joko = 60";
    cin >> nMat;
    cout << " nilai bing Asroni = 85 ";
    cin >> nBing;
    cout << " nilai bing Lia = 92";
    cin >> nBing;
    cout << " nilai bing Joko = 65";
    cin >> nBing; 



    rerata = (nBing + nMat) / 2;

    if (rerata >= 70) {
        status = " Diterima jalur rerata";
    }
    else if (nMat > 80) {
        status = " Diterima jalur matematika";
    }
    else
    {
        status = " Diterima ";
    }

    cout << "Statusnya adalah " << status << endl;

    system("pause");
}


// 1. int, float, string
// 2. untuk menentukan dimana kondisi itu di awal, kondisi di akhir, dan pengubah kondisi
// 3. contoh: sruct mahasiswa, untuk mengisi data mahasiswa seperti nim, nama, alamat, dll
// 4. langkah-langkah untuk menyelesaikan sesuatu (prosesnya seperti apa), lalu digunakannya di pemrograman utama. Contoh: library, #include <iostream>, using namespace std;
// 5. while yang merupakan contoh dari proses perulangan dan merupakan sebuah fungsi
