#include <iostream>
using namespace std;

// prototipe
int fibonaci(int n);

int main(){
  int nilai, hasil;
  cout << "masukan nilai: ";
  cin >> nilai;
  hasil = fibonaci(nilai);
  
  cout << "hasilnya adalah: ";
  cout << hasil << endl;
  
  cin.get();
  return 0;
}
int fibonaci(int n){
  cout << "fungsi fibonaci: " << n << endl;
  if ((n == 0) || (n == 1)){
    return n;
  }
  else {
    return fibonaci(n - 1) + fibonaci(n - 2);
  }
}