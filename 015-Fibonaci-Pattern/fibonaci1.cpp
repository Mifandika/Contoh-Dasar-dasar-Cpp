#include <iostream>
using namespace std;

int main(){
  // deret fibonaci
  // rumus
  // f_n = f_n1 + f_n2
  int n;
  int f_n;
  int f_n1;
  int f_n2;
  cout << "masukan nilai n: ";
  cin >> n;
  
  f_n1 = 1;
  f_n2 = 0;
  f_n = f_n1;
  cout << f_n << endl;
  for (int i = 1; i < n; i++){
    f_n = f_n1 + f_n2;
    f_n2 = f_n1;
    f_n1 = f_n;
    cout << f_n << endl;
  }
  cin.get();
  return 0;
}