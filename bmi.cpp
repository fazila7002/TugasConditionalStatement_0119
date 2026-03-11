#include <iostream>
#include <string>
using namespace std;

void inputData(float berat, float tinggi){
    cout << "Selamat Datang Mahasiswa Kelas A 2025" <<  endl;
    cout << "Masukkan Berat Badan (kg) : ";
    cin >> berat ;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;

}

float hitunganBMI(float berat, float tinggi){
    return berat / (tinggi * tinggi);

}

string cekStatus(float bmi){
  if (bmi <= 18.5) {
    return "berat badan kurang ";
  } 
  else if (bmi < 25) {
    return "berat badan normal";
  }
  else if (bmi < 30) {
    return "berat badab kelebihan";
  }
  else if (bmi >= 30){ return "obesitas";}



}

int main (){ 
    float berat, tinggi, bmi;

return 0;
inputData(berat, tinggi);

bmi = hitunganBMI(berat, tinggi);

cout << "Hasil" << endl;
cout << "BMI anda : " << bmi << endl;
cout << "status : " << cekStatus(bmi) << endl;
return 0;

}



