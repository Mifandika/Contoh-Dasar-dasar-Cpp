#include <iostream>
#include <bitset> // standard library bitwise
#include <string>
using namespace std;

void println(unsigned short nilai, string nama){
  cout << nama << " = " << bitset<8>(nilai) << endl;
}
int main(){
  unsigned short val1 = 7;
  unsigned short val2 = 10;
  unsigned short valHasil;
  cout << bitset<8>(val2) << endl;
  // menampilkan bit dengan syntak
  // bitset<jumlah bit>(variabel yang akan di tampilkan)
  // AND
  cout << "\nBitwise AND" << endl;
  valHasil = val1 & val2;
  println(val1, "A");
  println(val2, "B");
  println(valHasil, "C");
  cout << "hasil: " << valHasil << endl;
  // OR
  cout << "\nBitwise OR" << endl;
  valHasil = val1 | val2;
  println(val1, "A");
  println(val2, "B");
  println(valHasil, "C");
  cout << "hasil: " << valHasil << endl;
  // XOR
  cout << "\nBitwise XOR" << endl;
  valHasil = val1 ^ val2;
  println(val1, "A");
  println(val2, "B");
  println(valHasil, "C");
  cout << "hasil: " << valHasil << endl;
  // NOT
  cout << "\nBitwise NOT" << endl;
  valHasil = ~val1;
  println(val1, "A");
  println(valHasil, "C");
  cout << "hasil: " << valHasil << endl;
  // SHL
  cout << "\nBitwise SHL" << endl;
  valHasil = val1 << 3;
  println(val1, "A");
  println(valHasil, "C");
  cout << "hasil: " << valHasil << endl;
  // SHR
  cout << "\nBitwise SHR" << endl;
  valHasil = val1 >> 2;
  println(val2, "A");
  println(valHasil, "C");
  cout << "hasil: " << valHasil << endl;
  
  
  cin.get();
  return 0;
  // operasi bitwise
  // & = bitwise AND
  // | = bitwise inclusive OR
  // ^ = bitwise exclusive XOR
  // ~ = bitwise not
  // << = bitwise SHL (shift bits left)
  // >> = bitwise SHR (shift bits right)
}