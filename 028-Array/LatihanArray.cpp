#include <iostream>
#include <array>
using namespace std;

int main(){
  array<int, 10> nilai;
  
  cout << "Program Grafik Nilai Mahasiswa" << endl << endl;
  for (int loop = 0; loop <= nilai.size(); loop++){
    cout << "jumlah mahasiswa dengan nilai: ";
    if (loop == 0){
      cout << "0-9: ";
    }
    else if(loop == 10){
      cout << "100:";
    }
    else {
      cout << loop*10 << "-" << (loop*10) + 9 << ": ";
    }
    cin >> nilai[loop];
  }
  
  cout << endl;
  cout << "Grafik Nilai mahasiswa" << endl << endl;
  
  for (int lop = 0; lop <= nilai.size(); lop++){
    if (lop == 0){
      cout << "0-9  : ";
    }else if (lop == 10){
      cout << "100  : ";
    }
    else {
      cout << lop*10 << "-" << (lop*10) + 9 << ": ";
    }
    for (int grafik = 0; grafik < nilai[lop]; grafik++){
      cout << "*";
    }
    cout << endl;
  }
  
  cin.get();
  return 0;
}

