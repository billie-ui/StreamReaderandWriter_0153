#include <iostream>
using namespace std;

int main()
{
    // membuat isi dari try untuk pengujian error
    try
    {
        cout << "Selamat belajar di prodi TI UMY" << endl;
        // throw 0.5; // melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan ditampilkan" << endl;
    }
     // kondisi jika terjadi error di dalam try
    catch (exception& e)
    {
        cout << e.what() << endl;
    }

    cout << "Baris program terakhir" << endl; // penanda 2
    return 0;
}