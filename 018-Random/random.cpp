#include <iostream>
#include <cstdlib> // standard libary random
using namespace std;

int main(){
  // fungsi random
  char main;
  while (true){
    cout << "main dadu acak (y/n): ";
    cin >> main;
    if (main == 'y'){
      cout << "hasilnya: " << (1 + rand() % 20) << endl;
    }
    else if (main == 'n'){
      break;
    }
    else {
      cout << "harap masukan y / n joni !!" << endl;
    }
  }
  cin.get();
  return 0;
}