#include <iostream> //header input dan output
 
using namespace std; //mendifinisikan standar (std) agar tidak selalu didefinisikan disetiap inputan, jika tidak ada akan error
 
int main() //memulai program
{
  char huruf; //char digunakan untuk menampung 1 digit karakter, entah itu berupa huruf maupun angka.
  huruf = 'D'; //huruf inputan yang sudah di definisikan
  cout << "Huruf yang tersimpan adalah: " << huruf << endl; //cout adalah sebuah output untuk menampilkan teks yang ada didalamnya
 
  return 0; //return 0 dalam main() menyatakan bahwa program berakhir dengan normal.
}
