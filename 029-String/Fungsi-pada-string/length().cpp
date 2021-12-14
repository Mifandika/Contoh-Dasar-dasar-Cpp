#include <iostream>
#include <string>
using namespace std;

int main(){
  // Fungsi string
  // string.length()
  
  string nama;
  
  cout << "masukan nama: ";
  getline(cin,nama);
  // atau bisa
  // string output = nama.length();
  
  // menentukan jumlah kata dalam suatu kalimat
  if (nama.length() > 15){
    cout << "nama anda lebih dari 15 kata" << endl;
  }
  else {
    cout << "nama anda " << nama << endl;
  }
  
  cin.get();
  return 0;
}