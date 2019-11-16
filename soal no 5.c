#include <stdio.h>

void generate(int n){
    //variabel untuk looping
    int i, j, k;
    //isi random
    char alphanum[] = "abcdefghijklmnopqrstuvwxyz1234567890";
    for(i = 0; i < n; i++){
        for(j = 0; j < 4; j++){
            for (k = 0; k < 4; k++) {
                //mengecek karakter terakhir pada putaran terakhir
                if(j == 3 && k == 3){
                    //menghapus karakter terakhir dan diganti dengan x
                    alphanum[3] = '\0';
                    printf("x");
                }else{
                    printf("%c",alphanum[rand() % (sizeof(alphanum) - 1)]);
                }
            }
            if(j < 3){
                printf("-");   
            }
        }
        printf("\n");
    }
}

int main(){
    //variabel untuk masukkan
    int n;
    scanf("%d", &n);
    generate(n);
    return 0;
}
