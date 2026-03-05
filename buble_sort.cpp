//menambahkan library
#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi variabel global array a dengan ukuran 20
int n;       //deklarsi variabel global n untuk menyimpan banyaknya elemen 

void input()
{ //procedur utnuk input
    int d;
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array : "; //output kelayar
        cin >> n;                                          //input dari pengguna
        if (n <= 20)                                       //jika n kurang atau sama dengan
            break;                                         //keluar dari loop
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "===================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" <<(i+1) <<": ";
        cin >> arr[i];
    }
}