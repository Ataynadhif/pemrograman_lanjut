#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int pangkat (int x, int y){
	if(y==0){
		return x = 1;
	}else{
		return x*pangkat(x,y-1);
	}
}
int main(void){
	int x,y,pil,p,r,ulang,hasil=1,a;
	
	ulang:
	printf("Selamat datang diaplikasi menghitung bilangan berpangkat\n");
	printf("1.Menghitung perpangkatan menggunakan fungsi rekursif\n");
	printf("2.Menghitung perpangkatan menggunakan fungsi iteratif\n");
	printf("Pilihan anda : ");
	scanf("%d",&pil);
	system("cls");
	switch(pil){
		case 1: 
			printf("Bilangan yang akan dipangkatkan : ");
			scanf("%d",&x);
			printf("Pangkat bilangan : ");
			scanf("%d",&y);
			printf("Hasil bilangan %d dipangkatkan %d adalah %d",x,y,pangkat(x,y));
			
			printf("\nIngin menghitung lagi? (y/n) : ");
			scanf("%s",&p);
			if(p =='y'){
				goto ulang;
			}
			break;
		
		case 2:
			printf("Bilangan yang akan dipangkatkan : ");
			scanf("%d",&x);
			printf("Pangkat bilangan : ");
			scanf("%d",&y);
			for(a=0;a<y;a++){
				hasil=hasil*x;
			}
			printf("Hasil bilangan yang dipangkatkan adalah %d\n",hasil);
			printf("\nIngin menghitung lagi? (y/n) : ");
			scanf("%s",&r);
			if(r =='y'){
				goto ulang;
			}			
			break;
			
		default:
			printf("Masukkan pilihan dengan benar\n");
	}
	return 0;
}
