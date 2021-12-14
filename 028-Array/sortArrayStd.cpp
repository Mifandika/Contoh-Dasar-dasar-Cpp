#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &nilai){
  std::cout << "array int ";
  for (int &loop : nilai){
    std::cout << loop << " ";
  }
  std::cout << std::endl;
}

void printArray(std::array <char, arraySize> &nilai){
  std::cout << "array char ";
  for (char &loop : nilai){
    std::cout << loop << " ";
  }
  std::cout << std::endl;
}

int main(){
  
  std::array <int, arraySize> nilaiRayInt = {0,9,3,6,7,8,1,4,5,2};
  std::array <char, arraySize> nilaiRayChar = {'A','C','B','F','E','G','D','H','J','I'};
  
  printArray(nilaiRayInt);
  printArray(nilaiRayChar);
  
  std::cout << std::endl;
  
  //std::sort(nama_fungsi.begin(), nama_fungsi.end())
  // library <algorithm> untuk mengurutkan nilai
  std::sort(nilaiRayInt.begin(), nilaiRayInt.end());
  printArray(nilaiRayInt);
  
  std::sort(nilaiRayChar.begin(), nilaiRayChar.end());
  printArray(nilaiRayChar);
  
  
  std::cin.get();
  return 0;
}