#include <iostream>
using namespace std;

int main(){
  // Array 
  int value[10] = {0,1,2,3,4,5,6,7,8,9};                                        
  
  cout << "address " << &value[0] << " nilai " << value[0] << endl;
  cout << "address " << &value[1] << " nilai: " << value[1] << endl;
  cout << "address " << &value[2] << " nilai: " << value[2] << endl;
  cout << "address " << &value[3] << " nilai: " << value[3] << endl;
  cout << "address " << &value[4] << " nilai: " << value[4] << endl;
  cout << "address " << &value[5] << " nilai: " << value[5] << endl;
  cout << "address " << &value[6] << " nilai: " << value[6] << endl;
  cout << "address " << &value[7] << " nilai: " << value[7] << endl;
  cout << "address " << &value[8] << " nilai: " << value[8] << endl;
  cout << "address " << &value[9] << " nilai: " << value[9] << endl;
  cout << endl;
  int *ptr = value;
  *(ptr + 3) = 6;
  // mengganti nilai dengan cara
  value[6] = 10;
  
  cout << &value[0] << " nilai: " << value[0] << endl;
  cout << &value[1] << " nilai: " << value[1] << endl;
  cout << &value[2] << " nilai: " << value[2] << endl;
  cout << &value[3] << " nilai: " << value[3] << endl;
  cout << &value[4] << " nilai: " << value[4] << endl;
  cout << &value[5] << " nilai: " << value[5] << endl;
  cout << &value[6] << " nilai: " << value[6] << endl;
  cout << &value[7] << " nilai: " << value[7] << endl;
  cout << &value[8] << " nilai: " << value[8] << endl;
  cout << &value[9] << " nilai: " << value[9] << endl;
  cout << endl;
  
  cin.get();
  return 0;
}