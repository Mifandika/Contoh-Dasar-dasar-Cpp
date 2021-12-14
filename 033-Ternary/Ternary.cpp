#include <iostream>
#include <string>
using namespace std;

int main(){
  // ternary operator: 
  // suatu kondisi tru dan false
  int val_1, val_2;
  string hasil_1, hasil_2, output;
  
  hasil_1 = "yameteh";
  hasil_2 = "kudasai";
  
  val_1 = 10;
  val_2 = 5;
  
  // syntak ternary operator
  output = (val_1 > val_2) ? hasil_1 : hasil_2;
  // output = kondisi    ?    true      false
 
  cout << "hasilnya: " << output << endl;
 
  cin.get();
  return 0;
}