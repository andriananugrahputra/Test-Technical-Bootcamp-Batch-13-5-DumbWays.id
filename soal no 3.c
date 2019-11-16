#include <stdio.h>
//fungsi membuat pola
void pola(int n){
	int i, j;
	for(i = 0; i < n; i++){
		if((i % 2 == 0)){
			for(j = 0; j < n; j++){
				if((i % 2 == 0) && (j % 2 == 0)){
					printf(" * ");
				}else{
					printf(" = ");
				}
			}
		}else{
			for(j = 0; j < n; j++){
				if((i % 2 != 0) && (j % 2 == 0)){
					printf(" = ");
				}else{
					printf(" * ");
				}
			}
		}
		printf("\n");
	}
}
int main(){
	int jumlah;
	printf("masukkan angka ganjil\n");
	scanf("%d", &jumlah);
	//pengecekan angka ganjil
	if(jumlah % 2 != 0){
	    //membuat pola
		pola(jumlah);
	}else{
		printf("angka harus ganjil\n");
	}
    return 0;
}
