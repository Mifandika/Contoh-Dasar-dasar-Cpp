#include <iostream>
// include: mengambil libary 
// iostream: libary cpp
using namespace std;
// std: mengambil standart libary cpp
// int main: fungsi
int main(){ // body
  int a = 20; // asisgment
  int b;
  cout << "masukan input = "; // cout: c output 
  cin >> b; // cin: c input/mengambil input dari pengguna
  cout << "hasilnya = " << b << endl;
  
  cin.get(); // benrguna untuk windows agar tidak forclose
  return 0;
}