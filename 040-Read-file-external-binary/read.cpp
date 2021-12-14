#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  // ios::in = membaca file binary
  // ios::out = menulis file binary
  // ios::binary = untuk mengetahui file binary
  
  // membaca file binary
  fstream myFile;
  int number;
  
  myFile.open("data.bin", ios::in | ios::binary);    
  // jika membaca file binary menggunakan ios::in dan ios::binary                                           
  myFile.read(reinterpret_cast<char*>(&number), sizeof(number));
  // jika untuk membaca file binary menggunakan ( .read )
  // membaca file binary menggunakan syntak di atas
  cout << "size int: " << sizeof(number) << endl;
  cout << number << endl;
  myFile.close();
  
  cin.get();
  return 0;
}