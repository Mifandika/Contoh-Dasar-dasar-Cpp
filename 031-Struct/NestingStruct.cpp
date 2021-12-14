#include <iostream>
#include <string>
using namespace std;

struct aktor{
  string nama;
  string peran;
};
struct film{
  string judul;
  string genre;
  int tahun;
  // struct aktor
  aktor pemeran_1;
  aktor pemeran_2;
};

int main(){
  // nesting struct
  // struct di dalam struct
  cout << "nesting struct" << endl;
  cout << endl;
  film film_1;
  aktor aktor_1, aktor_2;
  // aktor_1
  aktor_1.nama = "Optimus Prime";
  aktor_1.peran = "Tokoh utama";
   // aktor_2
  aktor_2.nama = "Megatron";
  aktor_2.peran = "Penjahat";
  // film
  film_1.judul = "TRANSFORMERS THE LAST KNIGHT";
  film_1.genre = "Action";
  film_1.tahun = 2018;
  film_1.pemeran_1 = aktor_1;
  film_1.pemeran_2 = aktor_2;
  
  cout << "Judul film: " << film_1.judul << endl;                                                        
  cout << "genre: " << film_1.genre << endl;
  cout << "tahun: " << film_1.tahun << endl;
  cout << "aktor: " << endl;
  cout << "aktor 1: " << film_1.pemeran_1.nama << endl;
  cout << "peran: " << film_1.pemeran_1.peran << endl;
  cout << "aktor 2: " << film_1.pemeran_2.nama << endl;
  cout << "peran: " << film_1.pemeran_2.peran << endl;

  cin.get();
  return 0;
}