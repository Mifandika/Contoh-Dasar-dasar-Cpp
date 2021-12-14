#include <iostream>
#include <string>
using namespace std;

int main(){
  double inputBegin, inputEnd, output, output1, output2;
  double output3, output4, output5, output6, output7, output8, output9, output10;
  char symbol;
  
  cout << "masukan nilai awal: ";
  cin >> inputBegin;
  cout << "masukan operator: ";
  cin >> symbol;
  cout << "masukan nilai akhir: ";
  cin >> inputEnd;
  
  output1 = inputBegin + inputEnd;
  output2;
  
  output = (symbol = '+') ? output1 : output2 ;
  cout << "hasil dari " << inputBegin << " + " << inputEnd << " = "; 
  cout << output << endl;
  
  output3 = inputBegin - inputEnd;
  output4;
  
  output = (symbol = '-') ? output3 : output4 ;
  cout << "hasil dari " << inputBegin << " - " << inputEnd << " = ";
  cout << output << endl;
  
  output5 = inputBegin * inputEnd;
  output6;
  
  output = (symbol = '*') ? output5 : output6 ;
  cout << "hasil dari " << inputBegin << " × " << inputEnd << " = ";
  cout << output << endl;
  
  output7 = inputBegin / inputEnd;
  output8;
  
  output = (symbol = '/') ? output7 : output8 ;
  cout << "hasil dari " << inputBegin << " : " << inputEnd << " = ";
  cout << output << endl;
  
  //output9 = inputBegin % inputEnd;
  //output10;
  
  //output = (symbol = '%') ? output9 : output10 ;
  //cout << "hasil dari " << inputBegin " % " << inputEnd << " = ";
  //cout << output << endl;
  
  cin.get();
  return 0;
}