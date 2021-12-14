#include <iostream>
using namespace std;

int main(){
  // operasi komparasi
  int nilai_awal = 10;
  int nilai_akhir = 20;
  int hasil_operasi;
  
  // tidak sebanding
  hasil_operasi = (nilai_awal != nilai_akhir);
  cout << "hasilnya = " << hasil_operasi << endl;
  
  // sebanding
  hasil_operasi = (nilai_awal == nilai_akhir);
  cout << "hasilnya = " << hasil_operasi << endl;
  
  // kurang dari
  hasil_operasi = (nilai_awal < nilai_akhir);
  cout << "hasilnya = " << hasil_operasi << endl;
  
  // lebih dari
  hasil_operasi = (nilai_awal > nilai_akhir);
  cout << "hasilnya = " << hasil_operasi << endl;
  
  // kurang dari sama dengan
  hasil_operasi = (nilai_awal <= nilai_akhir);
  cout << "hasilnya = " << hasil_operasi << endl;
  
  // lebih dari sama dengan
  hasil_operasi = (nilai_awal >= nilai_akhir);            
  cout << "hasilnya = " << hasil_operasi << endl;
  
  cin.get();
  return 0;
}