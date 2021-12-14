#include <iostream>
#include <string>
using namespace std;

struct buah{ // scope global / bisa di pake lebih dari satu
  string nama;
  float berat;
  int harga;
  string rasa;
  // struct dengan array
  string stok[1];
}var_global1; // jangan lupa beri ; di akhir
//   ^            ^
// varibel global

int main(){
  // struct : sebuah data yang menampung 
  // bebagai data
  // struct ( struktur )
  cout << "fungsi struct" << endl << endl;
  buah timun, gedang;
  // nama fungsi(struct) | nama fungsi baru
  
  // cara 1
  // timun
  timun.nama = "Timun";
  timun.berat = 150;
  timun.harga = 2000;
  timun.rasa = "Asam";
  timun.stok[0] = "ada";
  
  cout << "nama buah: " << timun.nama << endl;
  cout << "berat: " << timun.berat << " gram" << endl;
  cout << "harga: " << "Rp " << timun.harga << endl;
  cout << "rasa: " << timun.rasa << endl;
  cout << "stok: " << timun.stok[0] << endl;
  cout << endl;
   
  // gedang
  gedang.nama = "Gedang";
  gedang.berat = 300;
  gedang.harga = 14000;
  gedang.rasa = "Manis";
  gedang.stok[0] = "kosong";
  
  cout << "nama buah: " << gedang.nama << endl;
  cout << "berat: " << gedang.berat << " gram" << endl;
  cout << "harga: " << "Rp " << gedang.harga << endl;
  cout << "rasa: " << gedang.rasa << endl;
  cout << "stok: " << gedang.stok[0] << endl;
  cout << endl;
  
  // cara 2
  buah apel;
  apel = {"apel", 100, 5000, "manis", {"kosong"}};
  cout << "nama buah: " << apel.nama << endl;
  cout << "berat: " << apel.berat << " gram" << endl;
  cout << "harga: Rp " << apel.harga << endl;
  cout << "rasa " << apel.rasa << endl;                               
  cout << "stok: " << apel.stok[0] << endl << endl;
  
  // cara 3
  buah lemon = {"lemon", 140, 3000, "asam", {"ada"}};
  cout << "nama buah: " << lemon.nama << endl;
  cout << "berat: " << lemon.berat << " gram" << endl;
  cout << "harga: Rp " << lemon.harga << endl;
  cout << "rasa: " << lemon.rasa << endl;                                                                       
  cout << "stok: " << lemon.stok[0] << endl << endl;                          
  
  // cara 3 ( menggunakan var global )
  buah var_global1 = {"stroberi", 50, 10000, "manisss bingit", {"kosong"}};
  cout << "nama buah: " << var_global1.nama << endl;                             
  cout << "berat: " << var_global1.berat << " gram" << endl;
  cout << "harga: Rp " << var_global1.harga << endl;
  cout << "rasa: " << var_global1.rasa << endl;
  cout << "stok: " << var_global1.stok[0] << endl;
  
  cin.get();
  return 0;
}