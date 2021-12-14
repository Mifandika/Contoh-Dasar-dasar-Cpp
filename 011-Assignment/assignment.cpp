#include <iostream>
using namespace std;

int main(){
  // assignment
  int variabel = 20;
  
  // +=
  variabel += 10;
  cout << "Result = " << variabel << endl;
  // -=
  variabel -= 10;
  cout << "Result = " << variabel << endl;
  // *= 
  variabel *= 5;
  cout << "Result = " << variabel << endl;
  // /= 
  variabel /= 5;
  cout << "Result = " << variabel << endl;
  // %= 
  variabel %= 2;
  cout << "Result = " << variabel << endl;
  
  cin.get();
  return 0;
}