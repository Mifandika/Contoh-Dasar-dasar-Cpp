#include <iostream>
#include <string>
using namespace std;

int main(){
  // Fungsi string
  // string.erase(index-awal,index-akhir)
  
  string nomer;
  
  cout << "masukan nomer: ";
  getline(cin,nomer);
  
  // akan menghapus 3 nomer dari index 0 sampai 3
  nomer.erase(0,3);
  
  cout << "nomer anda: " << nomer << endl;
  
  cin.get();
  return 0;
}