#include <iostream>
#include <string>
using namespace std;

int main(){
  // Fungsi string
  // string.clear()
  
  string nama;
  
  cout << "masukan nomer: ";
  getline(cin,nama);
  
  // akan menghapus kata yang di masukan
  nama.clear();
  
  cout << "nama anda: " << nama << endl;
  
  cin.get();
  return 0;
}