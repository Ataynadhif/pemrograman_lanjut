#include<stdio.h>

int main(){
	int angka[9]={3,9,11,12,15,17,23,31,35};
	int awal,akhir,tengah,cari,a,b;
	
	a=1;
	b=1;
	awal=0;
	akhir=8;
	
	printf("Masukkan angka yang anda cari : ");
	scanf("%d",&cari);
	
	while(a!=0){
		tengah=(akhir+awal)/2;
	 	printf("\nloop ke %d",b);
	 	printf("\nawal : %d",awal);
	 	printf("\nakhir : %d",akhir);
	 	printf("\ntengah : %d",tengah);
	 	b++;
	 	if(angka[tengah]==cari)
		{
	 		printf("\nData ditemukan pada indeks ke ");
			a=0;
			break;	
		}
		else if(angka[tengah] > cari)
		{
			akhir=tengah-1;
		}
		
		else if(angka[tengah] < cari)
		{
			awal=tengah+1;		
		}
	}
	return 0;	
}

