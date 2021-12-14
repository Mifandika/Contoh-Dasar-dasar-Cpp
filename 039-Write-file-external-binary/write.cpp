#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  // ios::in = membaca file binary
  // ios::out = menulis file binary
  // ios::binary = untuk mengetahui file binary
  
  // menulis file binary berupa henxadecimal                           
  fstream myFile;
  int number = 2345;
  
  myFile.open("data.bin", ios::out | ios::binary);
  // jika menulis file binary menggunakan ios::out dan ios::binary
  myFile.write(reinterpret_cast<char*>(&number), sizeof(number));
  // untuk menulis file binary menggunakan ( .write )
  //                              address varibel       variabel
  // untuk menulis file binary dengan syntak di atas
  myFile.close();
  
  cin.get();
  return 0;
}