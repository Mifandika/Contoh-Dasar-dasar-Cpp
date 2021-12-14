#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  // membaca file external
  // ios::in = (default)
  // ios::ate = membaca file dari akhir, belakang
  // ios::binary = membaca file biner(berupa hexadecimal)
  
  ifstream myFile;
  string output, buffer;
  bool isData = false;
  int no;
  string nama;
  
  myFile.open("data.txt", ios::in);
  // ios::in = default, boleh di tulis boleh tidak
  
  while(!isData){
    getline(myFile, buffer);
    // membaca myFile dan memasukan nya ke buffer
    // menggunakan getline agar membaca satu baris dan membaca spasi
    output.append("\n" + buffer);
    if (buffer == "data"){
      isData = true;
    }
  }
  cout << output << endl;
  int jumlahData;
  getline(myFile, buffer);
  while(!myFile.eof()){
    // eof (end of file, membaca file hingga selesai)
    myFile >> no;
    myFile >> nama;
    cout << no << "\t" << nama << endl;
    jumlahData++;
  }
  cout << "jumlah data: " << jumlahData << endl;
  
  cin.get();
  return 0;
}