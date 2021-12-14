#include <iostream>
using namespace std;                                                        

int main(){
  // foorloop
  // for (inisialisasi, kondisi loop / komparasi, increment / decrement){
  //   statment
  // }
  cout << "forloop 1" << endl;
  int poin_1 = 10;
  for (poin_1; poin_1 <= 20; poin_1++){
    cout << "exelent bro" << endl;
  }
  cout << "forloop 2" << endl;
  for (int poin_2 = 50; poin_2 < 70; poin_2++){
    cout << "good job mabro" << endl;
  }
  cout << "forloop 3" << endl;
  for (int poin_3 = 20; poin_3 >= 20; poin_3--){
    cout << "selesai" << endl;
  }
  cout << "forloop 4" << endl;
  int poin_tambahan = 0;
  for (int poin_4 = 5; poin_4 <= 20; poin_4++){
    poin_tambahan += poin_4;
    cout << poin_4 << " || " << poin_tambahan << endl;
  }
  cout << "forloop 5" << endl;
  int poin_plus = 0;
  for (int poin_5 = 30; poin_5 <= 40; poin_5++, poin_plus += poin_5){
    cout << poin_5 << " || " << poin_plus << endl;
  }
  cin.get();
  return 0;
}