#include <iostream>
#include <string>
using namespace std;

int main(){
  // getline pada string 
  // mamsukan input yang menggunakan spasi
  // getline masuk ke library iostream
  // getline(cin, variabel)
  string kalimat;
  cout << "masukan kalimat: ";
  getline(cin,kalimat);
  cout << "kalimat anda: ";
  cout << kalimat << endl;
  
  // jumlah kata dari input
  int kata = 0;
  int jumlah = 0;
  
  while (true){
    kata = kalimat.find(" ", kata + 1);
    jumlah++;
    if (kata < 0){
      break;
    }
  }
  cout << "jumlah kata: " << jumlah << endl;
  
  cin.get();
  return 0;
}