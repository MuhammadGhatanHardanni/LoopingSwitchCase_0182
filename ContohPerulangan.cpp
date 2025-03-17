#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    int perulanganWhile = 0;
    int perulanganDO = 0;

    // Perulangan dengan for

    cout << "Perulangan for pemecah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "Nilai n = " << n << " Selamat Datang " << endl;
    }
    cout << "Nilai n terakahir = " << n << endl;
    cout << endl;

    cout << "Perulangan for pemecah turun" << endl;
    // Perulangan dengan for
    for (n = 5; n > 0; n--)
    {
        cout << "Nilai n = " << n << " Selamat Datang " >> endl;
    }
    cout << "Nilai n terakahir = " << n;
    cout << endl;
}