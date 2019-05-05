#include <iostream>

using namespace :: std;


char member,barang[50];
 string nomor[5]={"A001","A002","A003","A007","A008"};
 string nama[5]={"Bayu","Irvan","Susiati","Diana","Roni"};

 string namaku,cari,nonmember;
 int indeks,jumlah,jum=5,jml_brg,i;
 float harga,biaya=0,diskon,total=0;

 void id (){
    cout<<"Masukkan no id :";cin>>cari;
     for(int i=0;i<jum;i++)
         if(cari==nomor[i]){
                namaku=nama[i];
         }
        cout<<"\nAnda member";
        cout<<"\nid   :"<<cari;
        cout<<"\nNama :";cout<<namaku;


 }




double data(){
cout<<"\nmasukan jumlah unit barang : ";cin>>jumlah;
for(i=0; i<jumlah; i++){
    cout<<"\nmasukan nama barang ke-"<<i+1<<" : ";cin>>barang;
    cout<<"\nmasukan harga barang ke-"<<i+1<<" : ";cin>>harga;
    cout<<"\nmasukan jumlah barang ke-"<<i+1<<" : ";cin>>jml_brg;
    biaya=biaya+(harga*jumlah);
}}



void output(){
    cout<<"\nTotal Harga: "<<biaya;
    diskon=biaya*0.05;
    cout<<"\nDiskon           : "<<diskon;
    total=biaya-diskon;
    cout<<"\nTotal yang dibayar : "<<total;
}



 main(){

 cout<<"==================SELAMAT DATANG=======================\n";
    cout<<"\nMember atau bukan?";
    cin>>member;
    if(member=='Y'||member=='y'){
    id();
    data();
    output();
}
else if(member=='T'||member=='t'){
    cout<<"\nmasukan nama : ";cin>>nonmember;
    data();
    cout<<"total bayar : "<<biaya;

}



 }
