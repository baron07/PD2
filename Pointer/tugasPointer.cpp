#include <iostream> 
#include <cmath>
//M_PI untuk nilai pi

using namespace std;

int persegi(int& x){
    return x * x;}

int persegi_panjang(int& x, int& y){
    return x * y;}

double segitiga(int& x, int& y){
    return 0.5*(x * y);}

double lingkaran(int& x){
    return x*x*M_PI;}

int main(){
    int p,l,opsi;
    bool kondisi = true;
    while(kondisi){
        cout<<"1. Persegi panjang\n2. persegi\n3. Segitiga Sama Kaki\n4. lingkaran"<<endl;
        cout<<"Masukkan Pilihan: ";
        cin>>opsi;
        switch(opsi){
            case 1:
                cout<<"Masukkan Panjang: ";
                cin>>p;
                cout<<"Masukkan Lebar: ";
                cin>>l;
                cout<<"Luasnya adalah "<<persegi_panjang(p, l)<<endl;
                kondisi=false;break;
            case 2:
                cout<<"Masukkan Sisi: ";
                cin>>p;
                 cout<<"Luasnya adalah "<<persegi(p)<<endl;
                kondisi=false;break;
            case 3:
                cout<<"Masukkan Alas: ";
                cin>>p;
                cout<<"Masukkan Tinggi: ";
                cin>>l;
                 cout<<"Luasnya adalah "<<segitiga(p, l)<<endl;
                kondisi=false;break;
            case 4:
                cout<<"Masukkan Jari - jari: ";
                cin>>p;
                 cout<<"Luasnya adalah "<<lingkaran(p)<<endl;
                kondisi=false;break;
            default:
                cout<<"Pilihan Salah Masukkan lagi"<<endl;
        }
    }
}