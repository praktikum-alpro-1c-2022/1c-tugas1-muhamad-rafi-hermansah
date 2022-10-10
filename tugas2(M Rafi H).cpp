#include <iostream>
using namespace std;


int main(){
    //  Tugas 2
    //  Menukarkan 2 Variabel dengan bantuan Variabel Sementara
    int a, b, c;
    a = 10; //Variabel awal
    b = 5; //Variabel awal

    c = a; // Variabel c ditukar dengan Variabel a yang bernilai 5
    a = b; // Variabel a ditukar dengan Variabel b yang bernilai 10
    b = c; // Variabel b ditukar dengan Variabel c yang bernilai 5

    cout << "Menukarkan 2 Variabel dengan bantuan Variabel Sementara\n";
    cout << "A : " << a << endl << "B : " << b << endl;


    //  Menukarkan 2 Variabel tanpa Variabel Sementara
    int x, y;
    x = 10; //Variabel awal
    y = 5; //Variabel awal

    x = x+y; //8
    y = x-y; //3
    x = x-y; //5

    cout << "\nMenukarkan 2 Variabel tanpa Variabel Sementara\n";
    cout << "X : " << x << endl << "Y : " << y;

    return 0;
}
