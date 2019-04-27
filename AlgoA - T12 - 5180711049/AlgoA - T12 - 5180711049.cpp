#include <iostream>
#include <windows.h>
#include <stdio.h>
using namespace::std;
struct data{
int kamar;
char nama[20];
}z [20];
data temp;
int a,masuk,c,d;
void sorting (){
for (int r=0;r<masuk;r++){
           cout<<"data Ke - "<<r+1;cout<<endl;
           cout<<"No kamar       = ";cout<<z[r].kamar;cout<<endl;
           cout<<"Nama Pasien    = ";cout<<z[r].nama;cout<<endl;}
for (int o=0;o<masuk;o++){
    for(int b=0;b<masuk-1;b++){
        if(z[b].kamar>z[b+1].kamar){
            temp.kamar=z[b].kamar;
            z[b].kamar=z[b+1].kamar;
            z[b+1].kamar=temp.kamar;

            strcpy (temp.nama,z[b].nama);
            strcpy (z[b].nama,z[b+1].nama);
            strcpy (z[b+1].nama,temp.nama);}}}
cout<<"SETELAH DATA DI SHORTING ";cout<<endl;
for (int b=0;b<c;b++){
        cout<<"No kamar    = ";cout<<z[b].kamar;cout<<endl;
        cout<<"Nama Pasien = ";cout<<z[b].nama;cout<<endl;}
}

void search (){
int cari, ketemu;
cout<<"Masukan No Kamar = ";cin>>cari;
ketemu=0;
for (int l =0;l<=1;l++){
    if (z[l].kamar==cari){
        ketemu=1;
        cout<<"data di temukan dengan Nama Pasien "<<endl;
        cout<<"nama paisen = "<<z[l].nama<<endl;}

}
if (ketemu==0
    ) cout<<"Tidak ada";
}



int main(){
int pilih;
char w,ulang;
    do{
  cout<<"================================ PILIHAN MENU =================================";cout<<endl;
  cout<<"1. INSERT DATA";cout<<endl;
  cout<<"2. HAPUS DATA";cout<<endl;
  cout<<"3. UBAH DATA";cout<<endl;
  cout<<"4. SORTING";cout<<endl;
  cout<<"5. SEARCHING";cout<<endl;
  cout<<"Masukkan Pilihan = ";
  cin>>pilih;
  switch (pilih){
case 1 : cout<<"Masukan Jumlah Data : ";cin>>masuk;
        d=0;
        for(c=0;c<masuk;c++){
        d=d+1;
        cout<<"Data ke-"<<d<<endl;
        cout<<"No Kamar   = ";cin>>z[a].kamar;
        cout<<"Nama pasien  = ";cin>>z[a].nama;
        a++;};break;
case 2 : int x,y;
        cout<<"Hapus data ke-";cin>>x;
        y=x-1;
        a--;
        for(int i=y;i<a;i++)
        {z[i]=z[i+1];}
        cout<<"Data ke-"<<x<<" BERHASIL DI HAPUS";cout<<endl;
            break;
case 3 :int k,l;
        cout<<"Masukan Data yang akan diedit = data ke -  ";cin>>k;
        l=k-1;
        cout<<"No kamar    = ";cin>>z[l].kamar;
        cout<<"Nama Pasien = ";cin>>z[l].nama;
        cout<<"Setelah data di edit ";cout<<endl;
        cout<<"No kamar    = ";cout<<z[l].kamar;cout<<endl;
        cout<<"Nama Pasien = ";cout<<z[l].nama;
        break;
case 4 : sorting ();break;
case 5 : search ();break;
  }
   cout<<endl;
   cout<<"Ulang [y/t] = ";cin>>ulang;
   }
   while (ulang =='y'||ulang =='Y');
cout<<endl;
cout<<"Created By BAHARUDIN EFFENDI";
cout<<endl;}

