#include <iostream>
using namespace std;

// rekursif
int hasil_rekursif (int a, int b){
  int hasil = a;
  for (int i = 1; i < b; i++){
    hasil = hasil * a;
  }
  return hasil;
}
// iterasi
int hasil_iterasi (int a, int b){
  if (b <= 1){
    return a;
  }
  else {
    return a * hasil_iterasi(a,(b - 1));                                                                    
  }
}
int main(){
  // rekurif = perulangan
  // recursion 
  int a, b;
  cout << "nilai = ";
  cin >> a;
  cout << "pangkat = ";
  cin >> b;
  
  cout << "hasil rekirsif: " << hasil_rekursif(a, b) << endl;
  cout << "hasil iterasi: " << hasil_iterasi(a, b) << endl;
  
  cin.get();
  return 0;
}