#include <iostream>
#include <string> // standard library string
using namespace std;

int main(){
  // string = sekumpulan char / kata
  char kata[5] = {'m','o','b','i','l'};
  cout << kata << endl;
  // tidak hisa di tambah karena fiks array
  
  string data = "hello";
  cout << data << endl;
  // latihan string dengan input manual
  // kalimat yang menggunakan spasi hanya kalikat awal yang akan di exsekusi
  string input;
  cout << "masukan kata: ";
  cin >> input;
  cout << "kata yang di masukan: ";
  cout << input << endl;
  cin.get();
  return 0;
}