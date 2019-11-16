#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //variabel untuk masukkan
    int x, y;
    int i, j, k;
    int temp;
    div_t jumlahLembar[100];
	//daftar lembaran uang yang tersedia
    int listHarga[10] = {50000, 20000, 10000, 5000, 2000, 1000, 500};
    printf("Total Belanja Pembelian: ");
    scanf("%d", &x);
    printf("Uang Yang Dimasukkan Ke Mesin: ");
    scanf("%d", &y);
    int total = y - x;
    printf("Total Kembalian: %d\n", total);
    i = 0;
    temp = total;

    printf("Uang Pecahan:\n");
    while(temp >= 500){
        if(temp >= listHarga[i]){
            jumlahLembar[i] = div(temp,listHarga[i]);
            temp = temp % listHarga[i];
            printf("%d x %d\n",jumlahLembar[i].quot, listHarga[i]);
        }else{
          i++;
        }
    }
    return 0;
}
