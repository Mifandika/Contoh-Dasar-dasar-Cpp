#include <iostream>
using namespace std;

int main(){
  // operasi logika not, or and
  int value_1 = 5;
  int value_2 = 10;
  bool result;
  
  // not
  result = !(value_1 == value_2);
  cout << "hasilnya = " << result << endl;
  
  // and ( and / &&)
  // kedua nilai harus true jika ingin menghasilkan true
  result = (value_1 == 5) and (value_2 == 10);
  cout << "hasilnya = " << result << endl;
  result = (value_1 == 10) and (value_2 == 10);
  cout << "hasilnya = " << result << endl;
  result = (value_1 = 5) && (value_2 == 7);
  cout << "hasilnya = " << result << endl;
  result = (value_1 == 8) && (value_2 == 3);
  cout << "hasilnya = " << result << endl;
yaitu diya bermain  // or ( or / ||)
  // salah satu nilai true maka hasilnya true
  result = (value_1 == 5) or (value_2 == 20);
  cout << "hasilnya = " << result << endl;
  result = (value_1 == 5) or (value_2 == 9);
  cout << "hasilnya = " << result << endl;
  result = (value_1 == 2) || (value_2 == 10);
  cout << "hasilnya = " << result << endl;
  result = (value_1 == 7) || (value_2 == 3);
  cout << "hasilnya = " << result << endl;
  
  cin.get();