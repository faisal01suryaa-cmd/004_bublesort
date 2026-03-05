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

void bubbleSortArray()
{ //prosedur mengurutkan array dengan bubble sort
   int pass = 1; //step1

   do
   {
    for (int j = 0; j <= n - 1 - pass; j++)
    { //step 2
       if (arr[j] > arr[j + 1])
       { //step3
        int temp;
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
       }
    }
    pass += 1; //step4

    cout << "\npass " << pass -1 << ": "; //number of pass
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " "; //menampilkan data pada number of pass
    }
    cout << endl;

   } while (pass <= n -1); //step5
   
}
void display()
{
    cout << endl;
    cout << "==========" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================" << endl;
    cout << endl;
    for ( int j = 0; j < n; j++)
    {
        cout << arr[j]; //menampilkan array
        if (j < n - 1)
        {
            cout <<"-->";
        }
    }
    cout << endl;
    cout << endl;

    cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    input();

    bubbleSortArray();
    display();

    system("pause");
    return;

}