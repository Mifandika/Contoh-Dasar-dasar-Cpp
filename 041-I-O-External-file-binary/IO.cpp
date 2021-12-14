// Deklarasi Awal
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Fungsi global data siswa
struct Siswa{
  int NIS;
  string nama;
  string jurusan;
  string kelas;
};
// Fungsi untuk menulis data
void printData(Siswa &data, fstream &dataFile){
  dataFile.write(reinterpret_cast<char*>(&data), sizeof(Siswa));
};

int main(){
  fstream File;// deklarasi File
  
  // deklarasi membuat File data.bin tipe binary
  File.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
  // mengambil fungsi dari struct Siswa
  Siswa siswa1, siswa2, siswa3, siswa4, siswa5;
  
  siswa1.NIS = 12344; // data siswa1
  siswa1.nama = "Kipli";
  siswa1.jurusan = "Kuli";
  siswa1.kelas = "XTKj A";
  
  siswa2.NIS = 12345; // data siswa2
  siswa2.nama = "Jamet";
  siswa2.jurusan = "Pertanian";
  siswa2.kelas = "XTPN A";
 
  siswa3.NIS = 12346; // data siswa3
  siswa3.nama = "Sopo";
  siswa3.jurusan = "Arsitek";
  siswa3.kelas = "XTA A";
  
  siswa4.NIS = 12347; // data siswa4
  siswa4.nama = "Onichan";
  siswa4.jurusan = "Kewibuan";
  siswa4.kelas = "XTK A";
  
  siswa5.NIS = 12348;
  siswa5.nama = "Sunade";
  siswa5.jurusan = "Kemabhokan";
  siswa5.kelas = "XTKB A";
  
  
  // Menulis data dengan fungsi
  printData(siswa1,File);
  printData(siswa2,File);
  printData(siswa3,File);
  printData(siswa4,File);
  printData(siswa5,File);

  // penutup file
  File.close();
  // footet
  cin.get();
  return 0;
}