#include <iostream>
#include <string>
using namespace std;

int main(){
  
  // subString
  string kata_1("Saya suka pisang goyeng");
  string kata_2("Kamu suka timun yang besar");
  
  cout << "1: " << kata_1 << endl;
  cout << "2: " << kata_2 << endl;
  // mencari kata dari tengah-tengah
  // .substr(index, panjang)
  cout << kata_1.substr(10,6) << endl;
  cout << kata_2.substr(10,5) << endl;
  
  // mencari posisi kata dalam string
  // .find("kata")
  cout << "posisi pisang: ";
  cout << kata_1.find("pisang") << endl;
  cout << "posisi timun: ";
  cout << kata_2.find("timun") << endl;
  
  int a = kata_1.find("ng");
  cout << a << endl;
  cout << kata_1.find("ng", a + 1) << endl;
  // mencari kata dari belakang
  //  -> rfind
  cout << kata_2.rfind("mu") << endl;
  
  cin.get();
  return 0;
}