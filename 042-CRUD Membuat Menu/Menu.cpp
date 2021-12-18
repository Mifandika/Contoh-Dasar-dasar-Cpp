#include <iostream>
#include <string>
using namespace std;

int getOption(){
  int input;
  system("clear");
  cout << "\nProgram CRUD siswa\n";
  cout << "[1] Tampilkan data\n";
  cout << "[2] Tambah data\n";
  cout << "[3] Ubah data\n";
  cout << "[4] Hapus data\n";
  cout << "[5] Selesia\n";
  
  cout << "Masukan pilihan [1-5] : ";
  cin >> input;
  
  return input;
}

int main(){
  int pilihan = getOption();
  char menuLanjut;
  
  enum keyword{READ = 1, CREATE, UPDATE, DELETED, FINISH};
  
  while (pilihan != FINISH){
    switch(pilihan){
      case READ:
          cout << "Tampilkan data" << endl;
          break;
      case CREATE:
          cout << "Tambah data" << endl;
          break;
      case UPDATE:
          cout << "Ubah data" << endl;
          break;
      case DELETED:
          cout << "Hapus data" << endl;
          break;
      default:
          cout << "Pilihan tidak ditemukan" << endl;
    }
    
    begin:
    
    cout << "Lanjutkan (y/n) : ";                             
    cout >> menuLanjut;
    if ( (menuLanjut == 'y') || (menuLanjut == 'Y')){
      pilihan == getOption();
    }
    if ( (menuLanjut == 'n') || (menuLanjut == 'N') ){
      break;
    }
    else {
      goto begin;
    }
  }
  
  
  cin.get();
  return 0;
}