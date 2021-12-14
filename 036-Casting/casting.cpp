#include <iostream>
using namespace std;                                                    

int main(){
  // casting merubah data 
  int nilai_int = 5;
  double nilai_do= 10.50;
  char nilai_char = 'a';
  
  float hasil;
  hasil = nilai_int / nilai_do;
  cout << hasil << endl;
  
  hasil = nilai_int + nilai_do;
  cout << "\n" << hasil << endl;
  // menggunakan casting
  hasil = nilai_int + (int)nilai_do;
  //  nilai_do akan berubah menjadi integer
  cout << "\n" << hasil << endl;
  
  cout  << "\n" << (char)(nilai_char + nilai_int) << endl;
  // akan merubah nilai hasil menjadi character
  // a + 5
  // a | b,c,d,e,f (5)
  cin.get();
  return 0;
}