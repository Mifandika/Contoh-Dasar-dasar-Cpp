#include <iostream>
using namespace std;


int main(){
  int nilai_1, nilai_2, output;                             
  
  
  output = (nilai_1=10, nilai_2=5, (nilai_1+nilai_2));
  //                                 harus di akhir 
  cout << output << endl;
  
  cin.get();
  return 0;
}