#include <iostream>
using namespace std;

int LuasPersegi (int p, int l)
{
	int luas;
    luas = p*l;
    return luas;
}

int main()
{
    int a,b;
    cout << " Agustin Dwinurcahyani \n";
    cout << " D4 Manajemen Informatika \n";
    cout << "=============================== \n\n";

    cout << "masukkan panjang: "; cin >> a;
    cout << "masukkan lebar: "; cin >> b;

    cout << "Luas Persegi: " << LuasPersegi(a,b);
    return 0;
}
