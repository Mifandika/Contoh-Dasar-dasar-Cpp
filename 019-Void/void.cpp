#include <iostream>
using namespace std;

int fungsi(int x){
  int a;
  a = x * x;
  return a;
}
// void (tidak menggunakan return)
// void (fungsi tampa kembalian)
void tampilkan(int input){
  cout << "menampikan dengan void" << endl;
  cout << input << endl;
}
int main(){
  // void (kosong tidak memiliki tipe data)
  int hasil, y;
  cout << "masukan kuadrat dari: ";
  cin >> y;
  
  hasil = fungsi(y);
  tampilkan(hasil);
  
  cin.get();
  return 0;
}