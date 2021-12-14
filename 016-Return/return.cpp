#include <iostream>
using namespace std;

// tipe_data nama_fungsi(tipe_data nama_fungsi){
//   pengoperasian
//   return nama_fungsi;
// }
int kuadrat(int x){
  int y;
  y = x * x;
  return y;
}
// fungsi di letakan sebelum main
// return akan mengembalikan nilai ke nama fungsi
int tambah(int a, int b){
  int c;
  c = a + b;
  return c;
}
int main(){
  // fungsi dengan kembalian (return)
  // atau sering disebut reporter
  int input, hasil, a, b, hasil2;
  cout << "nilai kuadrat dari: ";
  cin >> input;
  
  hasil = kuadrat(input);
  
  cout << hasil << endl;
  
  cout << "masukan nilai a: ";
  cin >> a;
  cout << "masukan nilai b: ";
  cin >> b;
  
  hasil2 = tambah(a,b);
  cout << hasil2 << endl;
  cin.get();
  return 0;
}