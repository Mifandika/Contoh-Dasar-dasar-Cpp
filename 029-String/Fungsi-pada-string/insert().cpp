#include <iostream>
#include <string>
using namespace std;

int main(){
  // Fungsi string 
  // string.insert(index,"kata baru yang akan di masukan")
  
  string nama;
  
  cout << "masukan nama: ";
  getline(cin,nama);
  
  // akan menambahkan @ ke index 0 / pertama
  nama.insert(0,"@");
  
  cout << "nama anda: " << nama << endl;
  
  cin.get();
  return 0;
}