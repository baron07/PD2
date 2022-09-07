#include <iostream>

using namespace std;

struct total{
    int angka;
};

int fibonacci(int angka){
    if (angka == 0 || angka == 1){
        return angka;
      } else {
        return (fibonacci(angka-1) + fibonacci(angka-2));
      }
}

int main(){
    struct total hasil[25];
    //buat deret
    for(int i = 0;i<=25;i++){
        int bil;
        bil = fibonacci(i);
        hasil[i].angka = bil;
    }
    //cetak semua hasil
    for(int i = 0; i <= 25; i++){
        if(hasil[i].angka <= 10000){
            cout << hasil[i].angka<<"\n";
        }
    }
    //cetak hasil ganjil
    for(int i = 0; i <= 25; i++){
        if(hasil[i].angka <= 10000 && hasil[i].angka % 2 != 0){
            cout << hasil[i].angka<<"\n";
        }
    }
}