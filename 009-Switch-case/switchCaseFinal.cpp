#include <iostream>
using namespace std;

int main(){
  // switch case final
  // + break & continue
  // nilai awal
  int nilai;
  
  // inout pengguna
  cout << "masukan angka = ";
  cin >> nilai;
  
  // operasi switch case
  // menambahkan break & continue akan mengehentikan loop
  switch (nilai){
    case 10:
    cout << "ini angka 10" << endl;
    break; // agar case di bawah tidak di eksekusi
    case 20:
    cout << "ini angka 20" << endl;
     // continue; // akan stack
    case 30:
    cout << "ini angka 30" << endl;
    case 40:
    cout << "ini angka 40" << endl;
    case 50:
    cout << "ini angka 50" << endl;
    default: // nilai default 
    cout << "angka yang anda masukan salah" << endl;
  }
  cin.get();
  return 0;
}