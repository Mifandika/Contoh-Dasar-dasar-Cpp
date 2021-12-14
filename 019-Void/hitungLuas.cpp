#include <iostream>
using namespace std;                                                                                     
// menggunakan return
// dan void                                                 
double hitung_luas(double panjang, double lebar){
  double hasil = panjang * lebar;
  return hasil;
}
// local scope
double hitung_keliling(double panjang, double lebar){
  double hasil = 2 * (panjang + lebar);
  return hasil;
}
void tampilkan_luas(double panjang, double lebar){
  cout << "menampilkan dengan void" << endl;
  cout << hitung_luas(panjang, lebar) << endl;
}
void tampilkan_keliling(double panjang, double lebar){
  cout << "menampilkan dengan void" << endl;
  cout << hitung_keliling(panjang, lebar) << endl;
}
int main(){
  // latihan
  // menghitung luas persegi, dan keliling
  double p, l;
  cout << "masukan nilai panjang: ";
  cin >> p;
  cout << "masukan nilai lebar: ";
  cin >> l;
  
  tampilkan_luas(p, l);
  tampilkan_keliling(p, l);
  cin.get();
  return 0;
}