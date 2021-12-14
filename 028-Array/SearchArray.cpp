#include <iostream>
#include <algorithm>
#include <array>

const size_t arraySize = 10;

void tampilkan(std::array <int, arraySize> &angka){
  std::cout << "array ";
  for (int &nilai : angka){
    std::cout << nilai << " ";   
  }
}


int main(){
  // search array 
  std::array <int, arraySize> angka = {9,8,4,6,7,5,3,1,2};
  std::sort(angka.begin(), angka.end());
  tampilkan(angka);
  std::cout << std::endl;
  
  // search array 
  // syntak
  // binary_search(nilai.begin(), nilai.end(), nilaiCari);
  int angkaCari;
  bool hasilCari;
  
  std::cout << "masukan nilai di atas: ";
  std::cin >> angkaCari;
  hasilCari = std::binary_search(angka.begin(), angka.end(), angkaCari);
  if (hasilCari){
    std::cout << "ketemu" << std::endl;
  }
  else {
    std::cout << "tidak ketemu" << std::endl;
  }
  
  
  std::cin.get();
  return 0;
}