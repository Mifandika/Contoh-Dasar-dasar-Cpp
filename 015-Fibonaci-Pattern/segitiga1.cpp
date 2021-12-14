#include <iostream>
using namespace std;

int main(){
  // latihan segitiga 1 & 2 
  /* *
     **
     ***
     ****
     *****
  */
  /* *****
     ****
     ***
     **
     *
  */
  int n;
  
  cout << "masukan nilai n: ";
  cin >> n;
  
  cout << "segitiga 1" << endl;
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= i; j++){
      cout << "*";
    }
    cout << endl;
  }
  cout << "segitiga 2" << endl;
  for (int m = 1; m <= n; m++){
    for (int k = n; k >= m; k--){
      cout << "*";
    }
    cout << endl;
  }
  cin.get();
  return 0;
}