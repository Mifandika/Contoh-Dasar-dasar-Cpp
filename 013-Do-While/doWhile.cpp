#include <iostream>
using namespace std;

int main(){
  // do while 
  int nilai1 = 10;
  // menambahkan increment / decrement agar tidak loping terus
  // do {
  //   aksi
  // }while (syarat);
  do {
    cout << "selamat" << nilai1 << endl;                                                                      
    nilai1++;
  }while (nilai1 <= 20);
  
  cout << "selesai" << endl;
  cin.get();
  return 0;
}