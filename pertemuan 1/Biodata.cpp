#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void){
	
	
	char nama[35], ttl[25], alamat[50] , agama[10], status[10], jenis[9];
	int nohp[13],nik[16],pil;
	
	printf("Selamat Datang di Perpustakaan Kota Surabaya\n\n");
	printf("Apakah anda sudah menjadi anggota diperpustakaan ini ?\n");
	printf("1. Iya\n");
	printf("2. Tidak\n");
	printf("Pilihan anda : ");
	scanf("%d",&pil);
	system("cls");
	fflush(stdin);
	switch(pil){
		case 1:
			printf("\nAnda dapat meminjam dan membaca buku\n");
			printf("Diharapkan tenang didalam perpustakaan!!!");
			break;
			
		case 2:
			printf("Untuk dapat meminjam dan membaca buku\n");
			printf("\nDimohon untuk mendaftar sebagai anggota terlebih dahulu\n");
			printf("\nSilahkan isi biodata anda dibawah ini\n");
			printf("\nNama : ");
			gets(nama);
			fflush(stdin);
			printf("NIK  : ");
			scanf("%d",&nik);
			fflush(stdin);
			printf("Tempat Tanggal Lahir : ");
			gets(ttl);
			printf("Alamat : ");
			gets(alamat);
			printf("Jenis Kelamin : ");
			gets(jenis);
			printf("Agama : ");
			gets(agama);
			printf("Status : ");
			gets(status);
			fflush(stdin);
			printf("No HP : ");
			scanf("%d",&nohp);
			printf("\nSelamat sekarang anda dapat meminjam dan membaca buku \n");
			printf("Diharap tenang didalam perpustakaan!!!");
			break;
			
		default :
			printf("Masukkan pilihan dengan benar");
	}
	return 0;
}
