#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	int x, y, data[9], ulang=1, pilihan;

	srand(time(NULL));
	for	(int i=0; i<9; i++){
		x = rand()%11+1;
		data[i]=x;
	}
	printf("\nAngka = ");
	for	(int i=0; i<9; i++){
		printf("%d\t", data[i]);
	}
	printf("\n");
	while (ulang==1){
		printf("\n============ 1. Ascending  ============");
		printf("\n============ 2. Descending ============");
		printf("\n============ 3. Exit       ============");
		printf("\nMasukkan Pilihan Anda = ");scanf("%d",& pilihan);
		switch (pilihan){
			case 1:{
				for (int i=0; i<8; i++){
					for (int j=8; j>=0; j--){
						if (data[j]<data[j-1]&&j>0){
							y = data[j];
							data[j] = data[j-1];
							data[j-1] = y;
						}
					}
				}
				printf("\nAngka = ");
				for	(int i=0; i<9; i++){
					printf("%d\t", data[i]);
				}
				break;
			}
			case 2:{
				for (int i=0; i<8; i++){
					for (int j=0; j<9; j++){
						if (data[j]<data[j+1]&&j<8){
							y = data[j];
							data[j] = data[j+1];
							data[j+1] = y;
						}
					}
				}
				printf("\nAngka = ");
				for	(int i=0; i<9; i++){
					printf("%d\t", data[i]);
				}
				break;
			}
			case 3:
				ulang=0;
				break;
		}
	}
	return 0;
}
