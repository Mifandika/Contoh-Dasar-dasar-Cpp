#include <iostream>
using namespace std;

int main(){
  // latihan segitiga 2 & 3 
  // baris yang kosong di isi dengan spasi
  /* *****
      ****
       ***
        **
         *
  */ 
  /*     *
        **
       ***
      ****
     *****
  */
  cout << "segitiga 2" << endl;
  int n;
  cout << "masukan nilai n: ";
  cin >> n;
  
  for (int i = 0; i <= n; i++){
    for (int k = 1; k <= i; k++){
      cout << " ";
    }
    for (int j = n; j>= i; j--){
      cout << "*";
    }
    cout << endl;
  }
  cout << "segitiga 3" << endl;
  for (int a = 1; a <= n; a++){
    for (int b = n; b >= a; b--){
      cout << " ";
    }
    for (int c = 1; c <= a; c++){
      cout << "*";
    }
    cout << endl;
  }
  cin.get();
  return 0;
}