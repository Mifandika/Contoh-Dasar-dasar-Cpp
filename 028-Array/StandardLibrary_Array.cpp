#include <iostream>
// Standard Library Array
#include <array>
using namespace std;

int main(){
  // Standard library array di C++ 
  // example
  // array < tipe data, jumlah array > nama fungsi
  // jumlah aray 5 maka index nya { 0,1,2,3,4 }
  array <int, 5> nilai_ray;
  for (int lop = 0; lop <= 4; lop++){
    nilai_ray[lop] = lop;
    cout << "nilai [" << lop << "] = " << nilai_ray[lop];
    cout << " address : " << &nilai_ray[lop] << endl;
  }
  cout << endl;
  // mengetahui ukuran
  cout << "ukuran: " << nilai_ray.size() << endl;
  // address awal aray 
  cout << "address awal: " << nilai_ray.begin() << endl;
  // address akhir aray 
  cout << "address akhir: " << nilai_ray.end() << endl;
  // mengambil nilai aray
  cout << "nilai ke 4: " << nilai_ray.at(4) << endl;
  
  cin.get();
  return 0;
}
