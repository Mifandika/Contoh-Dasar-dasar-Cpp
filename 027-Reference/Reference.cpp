#include <iostream>
using namespace std;

int main(){
  // Reference = dua buah variabel dengan alamat yang sama
  // & = adalah simbol Reference dslam pemrograman
  
  int x;
  cout << "address nilai x: " << &x << endl;
  cout << "nilai dari x   : " << x << endl << endl;
  int &y = x;
  cout << "address nilai y: " << &y << endl;
  cout << "nilai dari y   : " << y << endl << endl;
  y = 20; // nilai x dan y akan berubah
  cout << "nilai dari y   : " << y << endl;
  cout << "nilai dari y   : " << y << endl << endl;
  x = 30;
  cout << "nilai dari x   : " << x << endl;
  cout << "nilai dari x   : " << x << endl;
  cout << "nilai dari y   : " << y << endl;
  
  cin.get();
  return 0;
}