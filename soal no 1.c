#include <stdio.h>
//mencari nilai maksimal
int nilaiMinimal(int arr[6]){
	int i, min = arr[1];
	for(i = 2; i < 6; i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	return min;
}
//mencari nilai maksimal
int nilaiMaksimal(int arr[6]){
	int i, min = arr[1];
	for(i = 2; i < 6; i++){
		if(min < arr[i]){
			min = arr[i];
		}
	}
	return min;
}

int main(){
	int str[10];
	int temp[10];
	int i;
	//input sebanyak 5 kali
	for(i = 1; i < 6; i++){
	    printf("input array ke %d : ", i);
	    scanf("%d", &str[i]);
	}
	//hard code
	temp[1] = str[2] + str[3] + str[4] + str[5];
	temp[2] = str[1] + str[3] + str[4] + str[5];
	temp[3] = str[1] + str[2] + str[4] + str[5];
	temp[4] = str[1] + str[2] + str[3] + str[5];
	temp[5] = str[1] + str[2] + str[3] + str[4];
	//hard code
	printf("angka %d : %d + %d + %d + %d = %d \n", str[1], str[2], str[3], str[4], str[5], temp[1]);
	printf("angka %d : %d + %d + %d + %d = %d \n", str[2], str[1], str[3], str[4], str[5], temp[2]);
	printf("angka %d : %d + %d + %d + %d = %d \n", str[3], str[1], str[2], str[4], str[5], temp[3]);
	printf("angka %d : %d + %d + %d + %d = %d \n", str[4], str[1], str[2], str[3], str[5], temp[4]);
	printf("angka %d : %d + %d + %d + %d = %d \n", str[5], str[1], str[2], str[3], str[4], temp[5]);
	
	int mini = nilaiMinimal(temp);
	int maks = nilaiMaksimal(temp);
	printf("Maka angka terkecilnya adalah %d dan angka terbesarnya adalah %d", mini, maks);

    return 0;
}
