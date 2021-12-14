#include <iostream>
using namespace std;

int main(){
  
  int width;
  int height;
  char symbol;
  
  cout << "Masukan Simbol : ";
  cin >> symbol;
  cout << "Masukan Lebar : ";
  cin >> width;
  cout << "Masukan Tinggi : ";
  cin >> height;
  
  for (int lop_1 = 0; lop_1 < height; lop_1++){
    for (int lop_2 = 0; lop_2 < width; lop_2++){
      for (int lop_3 = 0; lop_3 < height; lop_3++){
           cout << symbol;
           cout << lop_3;
     }
    cout << endl;
    }
  }
  
  cin.get();
  return 0;
}