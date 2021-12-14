#include <iostream>
using namespace std;

int main(){
  // latihan segitiga siku²
  // r = 2 * ( beda - 1 )
  /*         *
            ***
           *****
         ******** // 1
         ******** // 2
          *****
           ***
            *
  */
  int n;
  cout << "Segitiga Siku Siku" << endl;
  cout << "masukan nilai n: ";
  cin >> n;
  
  cout << "segitiga siku-siku 1" << endl;
  for (int i = 1; i <= n; i++){
    for (int j = n; j >= i; j--){
      cout << " ";
    }
    for (int k = 1; k <= (2 * i - 1); k++){
      cout << "*";
    }
    cout << endl;
  }
  // r = 2 * i - n
  cout << "segitiga siku-siku 2" << endl;
  for (int j = 1; j <= n; j++){
    for (int l = 1; l <= j; l++){
      cout << " ";
    }
    for (int a = n; a >= (2*j - n); a--){
      cout << "*";
    }
    cout << endl;
  }
  cin.get();
  return 0;
}