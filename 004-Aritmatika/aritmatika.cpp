#include <iostream>
using namespace std;

int main(){
  // operasi aritmatika
  int pertama = 50;
  int kedua = 30;
  int hasil;
  
  // operasi penjumlahan
  hasil = pertama + kedua;
  cout << "hasilnya = " << hasil << endl;
  
  // operasi pengurangan
  hasil = pertama - kedua;
  cout << "hasilnya = " << hasil << endl;
  
  // operasi perkalian
  hasil = pertama * kedua;
  cout << "hasilnya = " << hasil << endl;
  
  // operasi pembagian
  hasil = pertama / kedua;
  cout << "hasilnya = " << hasil << endl;
  
  // operasi modulus / hasil pembagian
  hasil = pertama % kedua;
  cout << "hasilnya = " << hasil << endl;
  
  cin.get();
  return 0;
}