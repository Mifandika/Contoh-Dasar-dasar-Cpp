#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Fungsi dari data siswa
struct Siswa{
  int NIS;
  string nama;
  string jurusan;
  string kelas;
};
// fungsi untuk menampilkan data siswa
Siswa printData(int &posisi, fstream &file){
  Siswa data;
  file.seekp((posisi - 1)*sizeof(Siswa));
  file.read(reinterpret_cast<char*>(&data),sizeof(Siswa));
  
  return data;
}

int main(){
  fstream File;// Deklarasi Input 
  Siswa outputSiswa;// Outputan dari data siswa
  int posisi = 5;// nomer/index data yang akan di baca
  // Open File data.bin
  File.open("data.bin", ios::in | ios::binary);    
  // Data Size Siswa
  cout << "Size Siswa " << sizeof(Siswa) << endl;
  cout << endl;
  // fungsi untuk menampilkan Data
  outputSiswa = printData(posisi,File);
  // 
  cout << "NIS       " << outputSiswa.NIS << endl;
  cout << "Nama      " << outputSiswa.nama << endl;
  cout << "Jurusan   " << outputSiswa.jurusan << endl;
  cout << "Kelas     " << outputSiswa.kelas << endl;
  
  // Penutup File
  File.close();
  
  // Footer
  cin.get();
  return 0;
}