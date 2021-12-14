#include <iostream>
using namespace std;

int main(){
  // multidimensi array 
  // pada [baris] akan mengambil baris kotak keberapa ?
  // pada [index] akan mengambil kolom/index angka ke berapa ?
  // tipeData namaFungsi[baris][index]
  
  int arrayMulti[3][3] = {1,2,3,4,5};
  
  cout << arrayMulti[0][0] << " ";
  // akan menggambil baris ke index 0, dan pada kolom 0
  cout << arrayMulti[0][1] << endl;
  cout << arrayMulti[0][2] << " ";
  cout << arrayMulti[0][3] << " " << arrayMulti[0][4] << endl;
  
  cout << endl;
  
  
  cin.get();
  return 0;
}