#include <stdio.h>
#include <string.h>
int jumlah;
void urutkanstring(char msg[jumlah][100]){
    char temp[jumlah][100];
    int i, j, k;
    int n[jumlah];
    printf("String telah diurutkan : \n");
    for(i = 0; i < jumlah; i++){
        n[i] = strlen(msg[i]);
        for(j = 0; j < n[i]-1; j++){
            for(k = j+1; k < n[i]; k++){
                if(msg[i][j] > msg[i][k]){
                    temp[i][j] = msg[i][j];
                    msg[i][j] = msg[i][k];
                    msg[i][k] = temp[i][j];
                }
            }
        }
        
		for(j = 0; j < jumlah-1; j++){
            for(k = j+1; k < jumlah; k++){
                if(strlen(msg[j]) > strlen(msg[k])){
                    strcpy(temp[j],msg[j]);
                    strcpy(msg[j],msg[k]);
                    strcpy(msg[k],temp[j]);
                }
            }
        }
		printf("%s \n", msg[i]);
    }
}

int main(){
	int i;
	printf("Jumlah data : ");
	scanf("%d", &jumlah);
    printf("Masukkan data : \n");
    char pesan[jumlah][100];
	for(i = 0; i < jumlah; i++){
		scanf("%s", pesan[i]);
	}
	urutkanstring(pesan);
    return 0;
}