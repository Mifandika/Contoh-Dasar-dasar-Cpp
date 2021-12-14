#include <iostream>
using namespace std;
// global scope
// local scope
// block scope
//   ::   simbol untuk mengambil variabel scope global / terjauh

int x = 10; // Global scope

int ambil_global(){ // mengambil Global scope
  return x;
}

int local_fungsi(){ // local scope
  int x = 50;
  return x;
}
int main(){
  cout << "1. variabel global : " << x << endl;
  int x = 20;
  cout << "2. variabel local : " << x << endl;
  cout << "3. variabel ambil_global : " << ambil_global() << endl;
  {
    cout << "4. variabel main : " << x << endl;
    cout << "5. variabel local_fungsi : " << local_fungsi() << endl;
    // block scope
    int x = 2;
    cout << "6. variabel block scope : " << x << endl;
    cout << "7. variabel global : " << ambil_global() << endl;
    cout << "8. variabel local_fungsi : " << local_fungsi() << endl;
  }
 // mengambil scope terjauh menggunakan simbol  ::
 cout << "9. variabel Global scope : " << ::x << endl;
 
  cin.get();
  return 0;
}