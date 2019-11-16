#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hitungVoucher(char voucher[100], int harga){
    int bayar, diskon, kembalian;
    //mengecek apakah voucher sesuai
    if(strcmp(voucher,"DumbWaysAsik") == 0){
        //mengecek untuk harga minimum
        if(harga >= 20000){
            diskon = harga*0.5;
            if(diskon > 20000){
                diskon = 20000;
            }
            bayar = harga-diskon;
            kembalian = harga - bayar;
            //printf("%s\n", voucher);
            printf("Uang yang harus dibayar: %d\n", bayar);
            printf("Diskon: %d\n", diskon);
            printf("Kembalian: %d\n", kembalian);   
        }else{
            diskon = 0;
            bayar = harga-diskon;
            kembalian = harga - bayar;
            printf("Uang yang harus dibayar: %d\n", bayar);
            printf("Diskon: %d\n", diskon);
            printf("Kembalian: %d\n", kembalian);
        }
    }
    //mengecek apakah voucher sesuai
    else if(strcmp(voucher,"DumbWaysMantap") == 0){
        //mengecek untuk harga minimum
        if(harga >= 50000){
            diskon = harga*0.3;
            if(diskon > 40000){
                diskon = 40000;
            }
            bayar = harga-diskon;
            kembalian = harga - bayar;
            //printf("%s\n", voucher);
            printf("Uang yang harus dibayar: %d\n", bayar);
            printf("Diskon: %d\n", diskon);
            printf("Kembalian: %d\n", kembalian);
        }else{
            diskon = 0;
            bayar = harga-diskon;
            kembalian = harga - bayar;
            printf("Uang yang harus dibayar: %d\n", bayar);
            printf("Diskon: %d\n", diskon);
            printf("Kembalian: %d\n", kembalian);
        }
    }else{
        diskon = 0;
        bayar = harga-diskon;
        kembalian = harga - bayar;
        printf("Uang yang harus dibayar: %d\n", bayar);
        printf("Diskon: %d\n", diskon);
        printf("Kembalian: %d\n", kembalian);
    }
}

int main(){
    //variabel untuk masukkan
    int harga;
    char voucher[100];
    printf("masukkan kode voucher: ");
    scanf("%s", voucher);
    printf("masukkan harga: ");
    scanf("%d", &harga);
    hitungVoucher(voucher, harga);
    
    return 0;
}
