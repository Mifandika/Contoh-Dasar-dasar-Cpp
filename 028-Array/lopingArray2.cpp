#include <iostream>
// standard library array 
#include <array>
using namespace std;

int main(){
  // loping array menggunakan standard library array 
  array<int, 10> nilaiRay = {0,1,2,3,4,5,6,7,8,9};
  
  for (int nilai : nilaiRay){
    cout << "address: " << &nilai;
    cout << " nilainya: " << nilai << endl;
  }
  cout << endl;
  for (int &nilaiRef : nilaiRay){
    cout << "address: " << &nilaiRef;
    cout << " nilainya: " << nilaiRef << endl;
    nilaiRef *= 2;
  }
  cout << endl;
  for (int &nilaiRef : nilaiRay){
    cout << "address: " << &nilaiRef;
    cout << " nilainya: " << nilaiRef << endl;
  }
  
  cin.get();
  return 0;
}
