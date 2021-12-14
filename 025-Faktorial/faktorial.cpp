#include <iostream>
using namespace std;

// prototipe
int faktorial(int n);

int main(){
  // Faktorial
  // example
  // 5!  = 5 * 4 * 3 * 2 * 1 
  int nilai, hasil;
  cout << "hitung faktorial dari: ";
  cin >> nilai;
  hasil = faktorial(nilai);
  cout << "\nhasilnya adalah: " << hasil << endl;
  
  cin.get();
  return 0;
}
int faktorial(int n){
  if (n <= 1){
    cout << n;
    return n;
  }
  else {
    cout << n << "*";
    return n * faktorial(n - 1);
  }
}