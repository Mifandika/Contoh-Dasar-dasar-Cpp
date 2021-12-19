#include <iostream>
#include <fstream>
#include <string>
#include <limits>// Libary numeric_limits
using namespace std;

// Isi data dari fileSiswa
struct fileSiswa{
  int PK;// Primary key
  string nama;
  string jurusan;
  int NIS;
};

int getOptionMenu();// Menu program
void checkData(fstream &fileCheck);// Check database
int checkSizeData(fstream &fileSize);// Check ukuran 1 buah data fileSiswa
void writeData(fstream &fileWrite, int posisi, fileSiswa &inputFileSiswa);// Menulis data ke file.bin / database
fileSiswa readFileSiswa(fstream &fileRead, int posisi);// Membaca posisi data
void tambahDataSiswa(fstream &file_Tambah);// Membuat data lalu memasukan data ke file.bin / database
void displayData(fstream &fileDisplay);// Menampilkan data dari database
void updateData(fstream &fileUpdate);// Merubah data, dan menyimpan ke dalam database

void deletedData(fstream &fileDelet){
  int nomer, size, offset;
  
  size = checkSizeData(fileDelet);
  fstream dataSementara;
  fileSiswa blankSiswa, tempSiswa;
  
  cout << "Masukan nomer data yang akan dihapus: ";
  cin >> nomer;
  
  writeData(fileDelet, nomer, blankSiswa);
  
  dataSementara.open("hapus.bin", ios::trunc | ios::out | ios::in | ios::binary);
  
  offset = 0;
  
  for (int indexLoop = 1; indexLoop <= size; indexLoop++){
    tempSiswa = readFileSiswa(fileDelet, indexLoop);
    
    if (!tempSiswa.nama.empty()){
      writeData(dataSementara, indexLoop - offset, tempSiswa);
    }
    else {
      offset++;
      cout << "Menghapus data\n";
    }
  }
  
  size = checkSizeData(dataSementara);
  fileDelet.close();
  fileDelet.open("file.bin", ios::trunc | ios::out | ios::binary);
  fileDelet.close();
  fileDelet.open("file.bin", ios::out | ios::in | ios::binary);

  for (int indexLoop2 = 1; indexLoop2 <= size; indexLoop2++){
    tempSiswa = readFileSiswa(dataSementara, indexLoop2);
    writeData(fileDelet, indexLoop2, tempSiswa);
  }
  //fileDelet.close();
}

int main(){// Body
  fstream filePrimer;// Deklarasi untuk database
  
  checkData(filePrimer);// check database
  
  int pilih = getOptionMenu();// Menu program
  char opsiLanjut;// Untuk opsi Lanjutkan ke menu program
  
  enum Keyword{// pengganti dari input angka 
    CREATE = 1,
    READ,// 2
    UPDATE,// 3
    DELETED,// 4
    FINISH// 5
  };
  // Jika input bukan 5 maka FALSE dan menjadi TRUE karena operasi !
  // jika input 5 maka TRUE menjadi false karena operasi !
  // jika input 5 maka TRUE menjadi false karena operasi !
  while (pilih != FINISH){// Kondisi dari input
    switch (pilih){
      case CREATE:
         cout << "Buat data baru ? " << endl;
         tambahDataSiswa(filePrimer);// Mengambil fungsi untuk membuat data
                                     // dan menuliskan ke database
         break;
      case READ:
         cout << "Tampilkan data ! " << endl;
         displayData(filePrimer);// Menampilkan data dari database
         break;
      case UPDATE:
         cout << "Ubah data ! " << endl;
         displayData(filePrimer);// Menampilkan data terlebih dahulu
         updateData(filePrimer);// Fungsi merubah data
         cout << "\n\nMerubah Data Berhasil !!!\n";
         break;
      case DELETED:
         cout << "Hapus data ! " << endl;
         displayData(filePrimer);
         deletedData(filePrimer);
         cout << "\nMenghapus Data Berhasil !!!\n\n";
         break;
      default :
         cout << "Input tidak ditemukan ! " << endl;
         break;
    }
    labelBegin:// Label mengulang
    
    cout << "Lanjutkan ke menu program y/n ";
    cin >> opsiLanjut;
    if ((opsiLanjut == 'y') | (opsiLanjut == 'Y')){
      pilih = getOptionMenu();// Kembali ke pemilihan pada menu program
    }
    else if ((opsiLanjut == 'n') | (opsiLanjut == 'N')){
      break;// Selesai
    }
    else {
      goto labelBegin;
    }
  }
  // Footer
  cout << "Akhir dari program\n";
  
  cin.get();
  return 0;
}

int getOptionMenu(){// Menu program
  int optionPilih;
  system("cls");// Method agar program tetap di bagian atas terminal
  cout << "\n| Daftar Siswa SMK TKM |\n";
  cout << "| ==================== |\n";
  cout << "| [1] Create data      |\n";
  cout << "| [2] Read data        |\n";
  cout << "| [3] Update data      |\n";
  cout << "| [4] Deleted data     |\n";
  cout << "| [5] Finish           |\n";
  cout << "| ==================== |\n";
  cout << "Pilih menu [1-5] : ";
  cin >> optionPilih;
  cin.ignore(numeric_limits<streamsize>::max(),'\n');
  return optionPilih;
}

void checkData(fstream &fileCheck){// Check database 
  fileCheck.open("file.bin", ios::out | ios::in | ios::binary);
     
  if (fileCheck.is_open()){// .is_open() -> method untuk mengecek apkah file sudah ada atau belum
    cout << "Database tersedia\n";
  }
  else {
    cout << "Database tidak tersedia, buat database baru\n";
    fileCheck.close();// Menutup file dulu sebelum membukanya lagi
    fileCheck.open("file.bin", ios::trunc | ios::out | ios::in | ios::binary);
  }
}

int checkSizeData(fstream &fileSize){// Check ukuran 1 buat data struct fileSiswa
  int start, end;
     
  fileSize.seekg(0, ios::beg);// Membaca posisi file pada bagin awal
  start = fileSize.tellg();// Menentukan posisi start ada pada bagin awal file.bin / database
  fileSize.seekg(0, ios::end);// Membaca posisi file pada bagian akhir 
  end = fileSize.tellg();// Menentukan posisi end pada bagin akhir file.bin / database
  return (end-start)/sizeof(fileSiswa);// ( Bagin akhir file - bagin awal file )  lalu dibagi size dari data struct
  // Rumus untuk mengetahui jumlah data pada database
}

void writeData(fstream &fileWrite, int posisi, fileSiswa &inputFileSiswa){// Menulis data ke file.bin / database
  // .seekp digunakan untuk menulis data 
  fileWrite.seekp((posisi-1)*sizeof(fileSiswa), ios::beg);
  fileWrite.write(reinterpret_cast<char*>(&inputFileSiswa), sizeof(fileSiswa));
}

fileSiswa readFileSiswa(fstream &fileRead, int posisi){
  fileSiswa readSiswa;
  // .seekg digunakan untuk membaca data
  fileRead.seekg((posisi-1)*sizeof(fileSiswa), ios::beg);
  fileRead.read(reinterpret_cast<char*>(&readSiswa), sizeof(fileSiswa));
  return readSiswa;
}

void tambahDataSiswa(fstream &file_Tambah){
  fileSiswa tambahFileSiswa, posisiFileSiswa;
     
  int posisi = checkSizeData(file_Tambah);// Check berapa banyak data yang dimasukan
     
  cout << "jumlah data = " << posisi << endl;
     
  if (posisi == 0){
    tambahFileSiswa.PK = 1;
    // cout << "PK = " << tambahFileSiswa.PK << endl;
  }
  else {
    // posisiFileSiswa sama Dengan fungsi readFileSiswa()
    posisiFileSiswa = readFileSiswa(file_Tambah, posisi);
    cout << "PK = " << posisiFileSiswa.PK << endl;
    tambahFileSiswa.PK = posisiFileSiswa.PK+1;
    // Setiap akan menulis data maka .PK akan di + 1, agar data ditulis setelahnya
  }
          
     
  cout << "masukan nama : ";
  getline(cin, tambahFileSiswa.nama);
  cout << "masukan jurusan : ";
  getline(cin, tambahFileSiswa.jurusan);
  cout << "masukan NIS : ";
  cin >> tambahFileSiswa.NIS;
     
  writeData(file_Tambah, posisi+1, tambahFileSiswa);// Tulis ke dalam database
  // posisi+1 agar setiap menulis data, Menulis data setelah data sebelumnya
}

void displayData(fstream &fileDisplay){// Menampilkan data yang ada di database
  int size = checkSizeData(fileDisplay);
  
  fileSiswa showFileSiswa;
  cout << "No. \tPk. \tNama. \t\tJurusan. \tNIS. " << endl;
  // Menampilkan data dengan looping
  for (int lopDisplay = 1; lopDisplay <= size; lopDisplay++){
    showFileSiswa = readFileSiswa(fileDisplay, lopDisplay);
    
    cout << lopDisplay << "\t";
    cout << showFileSiswa.PK << "\t";
    cout << showFileSiswa.nama << "\t\t";
    cout << showFileSiswa.jurusan << "\t\t";
    cout << showFileSiswa.NIS << endl;
  }
}

void updateData(fstream &fileUpdate){// Merubah data dan menyimpan ke dalam database
  int nomer;// Deklarasi untuk pemilihan nomer data
  
  fileSiswa updateFileSiswa;
  
  cout << "Masukan nomer data : ";
  cin >> nomer;
  cin.ignore();
  //cin.ignore(numeric_limits<streamsize>::max(), "\n");
  // Membaca data dengan fungsi readFileSiswa();
  updateFileSiswa = readFileSiswa(fileUpdate, nomer);
  
  cout << "\n\nData yang dipilih\n";
  cout << "Nama : " << updateFileSiswa.nama << endl;
  cout << "Jurusan : " << updateFileSiswa.jurusan << endl;
  cout << "NIS : " << updateFileSiswa.NIS << endl;
  
  cout << "\nMerubah data\n";
  cout << "Update Nama : ";
  getline(cin, updateFileSiswa.nama);
  cout << "Update Jurusan : ";
  getline(cin, updateFileSiswa.jurusan);
  cout << "Update NIS : ";
  cin >> updateFileSiswa.NIS;
  // Menulis data baru, dan memasukan nya ke dalam database
  writeData(fileUpdate, nomer, updateFileSiswa);
}