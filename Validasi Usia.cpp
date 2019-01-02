#include <iostream>
using namespace std;
int main () {
    int lahir, usia;

cout<<"==============================================================================================="<<endl;
cout<<"======================Program Validasi Usia Untuk Memasuki Pencak Silat ======================="<<endl;
cout<<"==============================================================================================="<<endl;
cout<<endl;

cout<<"Silahkan Masukkan Tahun Kelahiran Anda = ";
cin>>lahir;

//untuk menghitung usia maka tahun ini - tahun lahir
usia = 2018 - lahir;
cout<<"Usia Anda Saat Ini Adalah = "<<usia<<"Tahun"<<endl;
cout<<endl;

if (usia < 18 ){
        cout<<"MAAF, ANDA BELUM BISA MEMASUKI OLAHRAGA INI KARENA MASIH TERLALU KECIL"<<endl;
}
else if (usia > 18 && usia <60){
        cout<<"SELAMAT, PENDAFTARAN ANDA DITERIMA. SILAHKAN MENUNGGU INFO SELENGKAPNYA"<<endl;
}
else {
        cout<<"MAAF, PENDAFTARAN ANDA DITOLAK KARENA ANDA TERLALU TUA UNTUK INI"<<endl;
}
}
