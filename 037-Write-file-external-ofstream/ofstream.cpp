#include <iostream>
#include <fstream>// ifstream, ofstream, fstream              
using namespace std;

int main(){
  // menulis file external
  ofstream myFile;
  // 
  // ofstream >> untuk menulis data ke file
  // ifstream >> untuk membaca data dari file
  // method fstream
  // ios::out >> untuk menulis data ke file
  // ios::in >> untuk membaca data dari file 
  // dan menampilkan ke consol
  // ios::app >> akan menuliskan data baru 
  // ios::binary >> fungsi untuk menulis/membaca
  // file binary
  // ios::trunc >> menghapus file jika ada, 
  // lalu dibuatkan file baru
  //
  
  myFile.open("data1.text", ios::out);
  // ios::out = default, boleh di tulis boleh tidak
  myFile << "\nmenulis data pada file data1";
  myFile.close();
  
  myFile.open("data2.txt", ios::trunc);
  // ios::trunc = default, boleh di tulis holeh tidak
  myFile << "menulis data baru di file data2";
  myFile.close();
  
  // app = append
  myFile.open("data3.txt", ios::app);
  // jika app akan menulis data pada baris baru, 
  // dan text yang telah di tulis tetap ada dan tidak
  // hilang
  myFile << "\noperasi menulis file external dengan fstream";
  myFile.close();
  
  cin.get();
  return 0;
}