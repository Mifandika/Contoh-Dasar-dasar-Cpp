#include <iostream>
using namespace std;

union data{
  int value_int;
  char value_char[5];
}; 

int main(){
  // unions: suatu blok yang menyimpan 
  // berbagai variabel
  // "jika suatu variabel di ganti maka
  // yang lain akan ikut berganti"
  data unions;
  unions.value_int = 132567;
  
  cout << "value_int: " << unions.value_int << endl;
  cout << "value_char: " << unions.value_char << endl;
  
  unions.value_char[0] = 'a';
  unions.value_char[1] = 'l';
  unions.value_char[2] = 'o';
  unions.value_char[3] = 'n';
  unions.value_char[4] = 'e';
  
  cout << "value_int: " << unions.value_int << endl;
  cout << "value_char: " << unions.value_char << endl;
  
  cin.get();
  return 0;
}