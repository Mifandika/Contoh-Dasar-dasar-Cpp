#include <iostream>
#include <string>
using namespace std;

int main(){
  // Fungsi string                                         
  // string.append("kata baru yang akan di masukan")
  
  string email;
  
  cout << "masukan email: ";
  getline(cin,email);
  // atau bisa
  // string output = email.append("kata baru");
  
  // akan menambah kalimat baru di akhir
  email.append("@gmail.com");
  
  cout << "email anda: " << email << endl;
  cin.get();
  return 0;
}