#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ifstream dataNik;// baca data file
  int bacaNIK;// NIK 
  int bacaNIK1;// NIK 1
  int bacaNIK2;// NIK 2
  
  // open file Nik.bin
  dataNik.open("Nik.bin", ios::in | ios::binary);                 
  
  // baca data NIK
  dataNik.read(reinterpret_cast<char*>(&bacaNIK), sizeof(int));        
  // baca data NIK 1
  dataNik.read(reinterpret_cast<char*>(&bacaNIK1), sizeof(int));
  // baca data NIK 2 
  dataNik.read(reinterpret_cast<char*>(&bacaNIK2), sizeof(int));
  // tampilkan data NIK dari file Nik.bin 
  cout << "Nik " << bacaNIK << endl;// NIK 
  cout << "Nik 1 " << bacaNIK1 << endl;// NIK 1
  cout << "Nik 2 " << bacaNIK2 << endl;// NIK 2
  
  dataNik.close();
  
  cin.get();
  return 0;
}