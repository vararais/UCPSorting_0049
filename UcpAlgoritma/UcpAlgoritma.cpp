// 1. Yaitu dengan membandingkan semua elemen dengan elemen lain kemudian menukar posisinya urut 
// sesuai ukuran dari yang terkecil ke terbesar maupun sebaliknya tergantung apa yang dibutuhkan 

// 2. Yaitu dengan mengelompokkan data menjadi beberapa bagian kemudian mengurutkannya, setelah itu mengelompokkan
// kembali namun dengan skala yang lebih kecil hingga data tersortir secara berurutan

// 3. Dengan menggunakan Insertion Sort dikarenakan algoritma ini lebih efektif digunakan saat beberapa data sudah
// berurutan sehingga hanya memerlukan 1 kali perbandingan dalam 1 kali langkah 



#include <iostream>
using namespace std;

int Anan[49];
int n;

void input() {
    while (true) {
        cout << "Masukkan Banyaknya Elemen Pada Array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";

        }
    }

    cout << endl;
    cout << "=================" << endl;
    cout << "Masukkan Elemen Array Nya" << endl;
    cout << "=================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> Anan[i];
    }
}


void InsertionSort() {
    int i, temp, j;


    for (i = 1; i <= n - 2; i++) {

        temp = Anan[i];

        j = i - 1;

        while (j >= 0 && Anan[j] > temp)
        {
            Anan[j + 1] = Anan[j];
            j--;
        }

        Anan[j + 1] = temp;
    }
}
  

void display() {
    cout << endl;
    cout << "==============" << endl;
    cout << "Jumlah Pass = " << n - 1 << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << Anan[j];
        if (j < n - 1) {
            cout << " --> ";
        }
    }

    cout << endl;
    cout << endl;
    cout << "Jumlah Pass = " << n - 1 << endl;
    cout << endl;
        
}



int main()
{
    input();
    InsertionSort();
    display();
    system("pause");

    return 0;
   
}

