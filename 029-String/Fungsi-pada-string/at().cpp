#include <iostream>
#include <string>
using namespace std;

int main(){
  // Fungsi string
  // string.at(kata yang akan di ambil)
  
  string nama_awal, nama_tengah, nama_akhir;
  
  cout << "masukan nama depan: ";
  getline(cin,nama_awal);
  cout << "masukan nama tengah: ";
  getline(cin,nama_tengah);
  cout << "masukan nama akhir: ";
  getline(cin,nama_akhir);
  
  char kata1 = nama_awal.at(0);
  char kata2 = nama_tengah.at(0);
  char kata3 = nama_akhir.at(0);
  
  cout << "nama anda: " << kata1 << kata2 << kata3 << endl;
  
  cin.get();
  return 0;
}