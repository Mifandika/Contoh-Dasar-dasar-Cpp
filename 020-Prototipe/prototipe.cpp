#include <iostream>
using namespace std;

// prototipe
double operasi(double p, double l);
void tampilkan(double x);

int main(){
  // operasi prototipe
  double panjang, lebar, hasil;
  cout << "masukan nilai panjang: ";
  cin >> panjang;
  cout << "masukan nilai lebar: ";
  cin >> lebar;
  
  hasil = operasi(panjang, lebar);
  tampilkan(hasil);
  
  cin.get();
  return 0;
}
// fungsi ada di bawah
double operasi(double p, double l){
  return p * l;
}
void tampilkan(double x){
  cout << "hasilnya adalah: " << x << endl;
}