#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  fstream dataNik;
  int NIK = 2005;
  int NIK1 = 03;
  int NIK2 = 12;
  
  dataNik.open("Nik.bin", ios::out | ios::binary);
  
  dataNik.write(reinterpret_cast<char*>(&NIK), sizeof(int));    
  dataNik.write(reinterpret_cast<char*>(&NIK1), sizeof(int));
  dataNik.write(reinterpret_cast<char*>(&NIK2), sizeof(int));
  
  dataNik.close();
  
  cin.get();
  return 0;
}