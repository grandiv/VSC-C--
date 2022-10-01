#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;


int main()
{
    //Menghitung Luas Bangun Datar
    int bangundatar; float r; float t; float p; float l; 

    cout << "Pilih bangun ruang yang dihitung" << endl;
    cout << "1. Kubus\n" "2. Balok\n" << "3. Bola\n" << "4. Tabung\n" << "5. Kerucut\n";
    cout << "Masukkan nomor : ";
    cin >> bangundatar;

    switch (bangundatar)
    {
        case (1) :
            cout << "Panjang sisi : ";
            cin >> p;
            cout << "Luas kubus : " << 6 * p * p;
            break;

        case (2) :
            cout << "Panjang balok : ";
            cin >> p;
            cout << "Lebar balok : ";
            cin >> l;
            cout << "Tinggi balok : ";
            cin >> t;
            cout << "Luas balok : " << (2 * p * l) + (2 * p * t) + (2 * l * t);
            break; 

        case (3) : 
            cout << "Jari-jari bola : ";
            cin >> r ;
            cout << "Luas bola : " << 4 * PI * r * r;
            break;
        
        case (4) : 
            cout << "Jari-jari tabung : ";
            cin >> r;
            cout << "Tinggi tabung : ";
            cin >> t;
            cout << "Luas tabung : " << (2 * PI * r * t) + (2 * PI * r * r);
            break;
        
        case (5) : 
            cout << "Jari-jari kerucut : ";
            cin >> r;
            cout << "Tinggi kerucut : ";
            cin >> t;
            cout << "Luas kerucut : " << ((PI * r * sqrt((r * r) + (t * t))) + (PI * r * r));
            break;
    }

}