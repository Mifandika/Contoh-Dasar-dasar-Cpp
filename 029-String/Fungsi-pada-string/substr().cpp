#include <iostream>
#include <string>
using namespace std;

int main(){
  // Fungsi string
  // string.substr(index-awal, index-akhir)
  
  string nama;
  
  cout << "masukan nama: ";
  getline(cin,nama);
  
  // akan mengambil kata dari index 0 - 4
  string output = nama.substr(0,4);
  
  cout << "nama anda: " << output << endl;
  
  cin.get();
  return 0;
}