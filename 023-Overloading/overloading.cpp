#include <iostream>
using namespace std;
// overloading = menimpa

// nama fungsi harus sama
// tipe data boleh beda
int luas_kotak(int panjang, int lebar){
  int luas = panjang * lebar;
  return luas;
}
int luas_kotak(int sisi){
  return sisi * sisi;
}
// menggunakan double
double luas_kotak(double sisi){
  return sisi * sisi;
}
int main(){
  cout << "1. luas kotak = " << luas_kotak(2,4) << endl;
  cout << "2. luas kotak = " << luas_kotak(2) << endl;
  cout << "3. luas kotak = " << luas_kotak(2.5) << endl;
  
  cin.get();
  return 0;
}