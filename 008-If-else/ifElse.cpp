#include <iostream>
using namespace std;

int main(){
  // if else
  int value;
  // if (kondisi){
  //  statment
  // }else if(kondisi){
  // statment
  // }
  cout << "masukan nilai = ";
  cin >> value;
  
  if (value <= 10){
    cout << "exelent" << endl;
  }else if(value == 20){
    cout << "you are the best bro.." << endl
  }else{
    cout << "somthing wrong" << endl;
  }
  cin.get();
  return 0;
}