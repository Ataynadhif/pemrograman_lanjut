#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct mahasiswa{
	char nama[30];
	char npm[11];
	float nilai[10],ips;
	int matkulpilihan;	
};
typedef struct mahasiswa mhs; 

int main(){
	mhs mhs_nilai[10];
	char nama_matkul[10][30]=
	{
		"Pemrograman Lanjut",
		"Metode Numerik",
		"Pancasila",
		"Kewirausahaan",
		"Sistem Operasi",
		"Statistik komputer",
		"Bela Negara"
	};
	float sks[10]={4,3,4,3,3,4,2};
	int putar=0,pil,x=0,jumlah,matkul;
	float totalsks=0,totalnilai=0;
	while(putar==0){
		system("cls");
		puts("||| =============================== |||");
		puts("\t|Data Nilai Mahasiswa|");
		puts("\t1. Insert data");
		puts("\t2. View data");
		puts("\t3. Exit");
		puts("||| =============================== |||");
		fflush(stdin);
		printf("\nmasukkan pilihan : ");
        scanf("%d",&pil);
		system("cls");
		switch(pil){
			case 1:
				printf("Masukkan Data");
				printf("\n=============================");
				fflush(stdin);
				printf("\nMasukkan nama : ");
				gets(mhs_nilai[x].nama);
				fflush(stdin);
				printf("Masukkan NPM    : ");
				gets(mhs_nilai[x].npm);
				printf("\n=============================");
				printf("\n\t|Daftar Mata Kuliah|");
				printf("\n1. Pemrograman Lanjut \n2. Metode Numerik \n3. Pancasila\n4. Kewirausahaan \n5. Sistem Operasi \n6. Statistik komputer \n7. Bela Negara");
				printf("\n=============================");
				fflush(stdin);
				for	(int a=0;a<7;a++){
					fflush(stdin);
					printf("\nMasukkan Nilai %s : ", nama_matkul[a]);
					scanf("%f", &mhs_nilai[x].nilai[a]);
				}
				for(int b=0;b<7;b++){
					totalnilai		= totalnilai + ((mhs_nilai[x].nilai[b])*(sks[b]));
					totalsks		= totalsks	+ sks[b];
				}
				mhs_nilai[x].ips = totalnilai/totalsks;
				
				x++;
				getch();
				break;
			
			case 2:
				if(x!=0){
					printf("\n===========================================");
					printf("\n\t|Data Nilai Mahasiswa|");
					printf("\n===========================================");
					for(int y=0;y<x;y++){
						printf("\nNama Mahasiswa    : %s",mhs_nilai[y].nama);
						printf("\nNPM               : %s",mhs_nilai[y].npm);
						for	(int z=0;z<7;z++){
							printf("\nNilai Mata kuliah %s : %f", nama_matkul[z],mhs_nilai[y].nilai[z]);
						}
						printf("\nIPS               : %f\n",mhs_nilai[y].ips);
					}
				}else{
					printf("===== |Data tidak Ada| =====");
				} 
				getch();
				break;			
			case 3:
				putar=1;
		}		
	}
}
