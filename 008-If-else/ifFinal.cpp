#include <iostream>
using namespace std;

int main(){
  // final if
  int nilai;
  
  cout << "masukan nilai = ";
  cin >> nilai;
  
  if (nilai == 5){
    cout << "work this is 5" << endl;
  }if (nilai == 10){
    cout << "horee.." << endl;
  }else if(nilai <= 4){
    cout << "hello bro" << endl;
  }else {
    cout << "somthing wrong" << endl;
  }
  cin.get();
  return 0;
}