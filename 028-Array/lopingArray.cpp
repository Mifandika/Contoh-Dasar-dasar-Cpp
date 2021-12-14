#include <iostream>
using namespace std;

int main(){
  // loping array C++11 ke atas 
  /* for (deklarasi variabel : array){                  
       statment
      }
  */
  int nilaiArray[10] = {0,1,2,3,4,5,6,7,8,9};                       
  
  for (int nilai : nilaiArray){
    cout << "address: " << &nilai;
    cout << " nilainya: " << nilai << endl;
    nilai = 1; // tidak mengubah nilai
    // tetapi jika menggunakan loping biasa 
    // akan merubah
  }
  cout << endl;
  // memanipulasi array menggunakan refrensi
  for (int &nilaiRef : nilaiArray){ // loping array yang terbaru
    nilaiRef *= 2; // akan mengubah nilai
    cout << "address: " << &nilaiRef;
    cout << " nilainya: " << nilaiRef << endl;
  }
  cout << endl;
  for (int &nilaiRef : nilaiArray){
    cout << "address: " << &nilaiRef;
    cout << " nilainya: " << nilaiRef << endl;
  }
  cin.get();
  return 0;
}