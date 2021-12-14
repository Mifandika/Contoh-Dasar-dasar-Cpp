#include <iostream>
#include <string>
using namespace std;

int main(){
  // operasi pada string
  string kata("ayo");
  cout << kata << endl;
  // mengambil kata dari index
  cout << "kata 1: " << kata[0] << endl;
  cout << "kata 2: " << kata[1] << endl;
  cout << "kata 3: " << kata[2] << endl;
  
  // mengubah kata dari index
  // menggunakan tanda petik (  ''  )                   
  kata[2] = 'u';
  cout << "kata yang di ubah: " << kata << endl;
  
  // menyambung kata, menambah kata concatanation
  // 1 
  string kata1(kata + " bro");
  cout << kata1 << endl;
  // 2 
  string kata2(" mabar");
  kata1.append(kata2);
  cout << kata1 << endl;
  // 3 : menggunakan assigment
  string kata3("bro");
  kata1 += " " + kata3;
  cout << kata1 << endl;
  
  cin.get();
  return 0;
}