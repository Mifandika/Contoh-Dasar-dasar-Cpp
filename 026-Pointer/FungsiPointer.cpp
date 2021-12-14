#include <iostream>
using namespace std;
// menggunakan prototipe
// setelah tipe data cukup gunakan simbol
// (  *  )
void tampilkan(int *);
void kuadrat(int *);

int main(){
  // fungsi dengan pointer
  int nilai = 10;
  cout << "address kesatu: " << &nilai << endl;
  cout << "nilai kesatu  : " << nilai << endl;
  cout << endl;
  tampilkan(&nilai);
  cout << endl;
  kuadrat(&nilai);
  cout << "nilai keempat : " << nilai << endl;
  cin.get();
  return 0;
}
// menggunakan void
void tampilkan(int *value){
  cout << "address kedua: " << value << endl;
  cout << "nilai kedua  : " << *value << endl; // dereferencing
}
// (  *  ) tipe data yang tidak di gunakan
// karena hanya perhitungan nya yang akan di gunakan
void kuadrat(int *valPtr){
  // *valPtr = (*valPtr) * (*valPtr);
  *valPtr *= *valPtr; // menggunakan assignment
}