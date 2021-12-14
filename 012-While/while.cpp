#include <iostream>
using namespace std;

int main(){
  // while loop
  int nilai_awal = 20;
  
  // while (syarat = true (akan looping terus) false (stop loping)){
  //   aksi
  // }
  while (nilai_awal < 50){
    cout << "good job bro !!" << endl;
    nilai_awal += 10; // agar tidak looping terus
  }
  cin.get();
  return 0;
}