#include <iostream>
using namespace std;

void LuasPersegi()
{
 int panjang,lebar;
 cout << " Agustin Dwinurcahyani \n";
 cout << " D4 Manajemen Informatika \n";
 cout << "=============================== \n\n";
 cout << "Masukkan panjang: "; cin >> panjang;
 cout << "Masukkan lebar: "; cin >> lebar;

 cout<<"Luas persegi: " << panjang*lebar;
}

int main()
{
 LuasPersegi();
 return 0;
}
