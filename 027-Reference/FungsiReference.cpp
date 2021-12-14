#include <iostream>
using namespace std;
// prototipe
// ketika menggunakan fungsi reference
// hanya menggunakan simbol (  &  )
void tampilkan(int &);
void kuadrat(int &);

int main(){
  // fungsi dengan reference
  int nilai_1 = 40;
  cout << "address nilai_1: " << &nilai_1 << endl;
  cout << "value nilai_1  : " << nilai_1 << endl;
  cout << endl;
  tampilkan(nilai_1);
  cout << endl;
  kuadrat(nilai_1);
  cout << "nilai kuadrat : " << nilai_1 << endl;
  
  cin.get();
  return 0;
}
void tampilkan(int &fungsi){
  cout << "address fungsi: " << &fungsi << endl;
  cout << "value fungsi  : " << fungsi << endl;
}
void kuadrat(int &drat){
   drat = drat * drat;
  
}