#include <iostream>
using namespace std;                                                                                            

int main(){
  // pointer
  // ( & ) = ampersand (simbol untuk mengambil address)
  // ( * ) = dereferencing (berfungsi untuk mengambil nilai dari suatu variabel) 
  // 
  int a = 5;
  int b = 10;
  int *aPtr = &a;
  int *bptr = nullptr; // address kosong
  // memberikan address
  bptr = &b;
  
  // pointer = alamat ( address ) yang bisa kita manipulasi
  // address akan selalu berubah-ubah 
  // cara untuk mendefinisikan nilai dengan address kosong / blank
  // dengan (  null  )
  
  cout << "nilai int a: ";
  cout << a << endl;
  cout << "address int a: ";
  cout << &a << endl;
  cout << "addres int aPtr: ";
  cout << aPtr << endl;
  
  cout << "nilai dari aPtr: ";
  cout << *aPtr << endl;
  
  cout << "address int b ptr: ";
  cout << bptr << endl;
  // dereferencing : mengambil data sebuah pointer 
  a = 20; 
  cout << "mengambil nilai pointer aPtr: ";
  cout << *aPtr << endl; // akan mengambil nilai dari aptr
  cout << "mengambil address pointer aPtr: ";
  cout << aPtr << endl; // akan mengambil address dari aptr
  
  cin.get();
  return 0;
}