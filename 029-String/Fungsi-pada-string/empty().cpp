#include <iostream>
#include <string>
using namespace std;

int main(){
  // Fungsi string 
  // string.empty(); "kosong"
  
  string nama;
  
  cout << "masukan nama: ";
  getline(cin,nama);
  
  // atau bisa
  // string output = nama.empty();
  
  // empty atau kosong
  if (nama.empty()){ 
    cout << "nama anda kosong" << endl;
  }
  else {
    cout << "hai " << nama << endl;
  }
  
  cin.get();
  return 0;
}