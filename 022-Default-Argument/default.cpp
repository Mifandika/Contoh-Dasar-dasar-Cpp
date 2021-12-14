#include <iostream>
using namespace std;
// default argumen atau nilai standard
// prototipe
// p, l, t ( merupakan nilai default jika variabel tidak di isi)
double volume_kubus(double p = 1, double l = 2, double t = 3);                                
int main(){
  cout << "volume kubus: " << volume_kubus(2,3,6) << endl;
  cout << "volume kubus: " << volume_kubus(2,3) << endl;
  cout << "volume kubus: " << volume_kubus(2) << endl;
  cout << "volume kubus: " << volume_kubus() << endl;
  
  cin.get();
  return 0;
}
// fungsi
double volume_kubus(double p, double l, double t){
  return p * l * t;
}