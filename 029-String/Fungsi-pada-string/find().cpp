#include <iostream>
#include <string>
using namespace std;

int main(){
  // Fungsi string
  // string.find(string-cariKata)
  
  string nama, cari_nama;
  
  cout << "masukan nama: ";
  getline(cin,nama);
  
  cout << "cari kata: ";
  getline(cin,cari_nama);
  
  int posisi = nama.find(cari_nama);
  
  cout << "posisi kata adalah: " << posisi << endl;
  
  cin.get();
  return 0;
}