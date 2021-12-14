#include <iostream>
using namespace std;

int main(){
  // increment & decrement
  int nilai = 10;
  
  // increment ++
  nilai++; 
  cout << "result = " << nilai << endl;
  cout << endl;
  ++nilai;
  cout << "result = " << nilai << endl;
  cout << endl;
  
  // decrement --
  nilai--; 
  cout << "result2 = " << nilai << endl;
  cout << endl;
  --nilai;
  cout << "result2 = " << nilai << endl;
  cout << endl;
  
  cin.get();
  return 0;
}