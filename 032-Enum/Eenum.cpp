#include <iostream>
using namespace std;

enum warna {merah, kuning, hijau, biru = 6, ungu};
// variabel bisa di ubah range nya
int main(){
  // enum: menampilkan range dari variabel
  // contoh warna merah pada range 0 dan
  // ungu pada range 5 / terakhir
  warna baju;
  
  baju = merah;
  baju = kuning;
  baju = hijau;
  baju = biru;
  baju = ungu;
  
  cout << merah << endl;
  cout << kuning << endl;
  cout << hijau << endl;
  cout << biru << endl;
  cout << ungu << endl;
  
  cin.get();
  return 0;
}