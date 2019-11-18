#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct bank{
	int norek;
	char bank[15];
	char nama[40];
	long saldo;
	
	struct ttl{
		int tgl;
		int bln;
		int tahun;
	}tl;
	
	struct alamat{
		char jln[30];
		char kota[15];
		char provinsi[15];
	}al;
}akun[100];

int main(){
	int pil,b,ulang=1,i=0,total=0;
	
	while(ulang==1){
	printf("==========  Selamat Datang di Sistem Informasi Perbankan  ==========");
	printf("\n===== 1. Input Data                                            =====");
	printf("\n===== 2. Tampilkan Semua Data                                  =====");
	printf("\n===== 3. Tampilkan Jumlah Saldo Total                          =====");
	printf("\n===== 4. Cari Data Sesuai Dengan Kota/Prov                     =====");
	printf("\n===== 5. Cari Data Sesuai Dengan Umur                          =====");
	printf("\n===== 6. Cari Data Sesuai Dengan No Rekening                   =====");
	printf("\n===== 7. Tampilkan Data Dengan Saldo Terbanyak Dan Tersedikit  =====");
	printf("\n===== 8. Exit                                                  =====");
	printf("\n====================================================================");
	printf("\nMasukkan Pilihan Anda : ");
	scanf("%d",&pil);
	system("cls");
	
	switch(pil){
		case 1:
		{
		system("cls");
			printf("===== |Selamat Datang Di SI Perbankan| =====");
			fflush(stdin);
			printf("\nMasukkan Nama Bank         : ");
			gets(akun[i].bank);
			printf("\nMasukkan No Rekening       : ");
			scanf("%d",&akun[i].norek);
			fflush(stdin);
			printf("\nMasukkan Nama Nasabah      : ");
			gets(akun[i].nama);
			printf("\nMasukkan TTL (xx-xx-xxxx)  : ");
			scanf("%d-%d-%d",&akun[i].tl.tgl,&akun[i].tl.bln,&akun[i].tl.tahun);
			fflush(stdin);
			printf("\nMasukkan Alamat Nama Jalan : ");
			gets(akun[i].al.jln);
			printf("\nMasukkan Alamat Nama Kota  : ");
			gets(akun[i].al.kota);
			printf("\nMasukkan Alamat Nama Prov  : ");
			gets(akun[i].al.provinsi);
			printf("\nMasukkan Saldo             : ");
			scanf("%d", &akun[i].saldo);
			fflush(stdin);
			i++;
			printf("\n==========================================");
			getch();
			system("cls");
			break;
		}
		case 2:
		{
			if(i!=0){
				printf("============= |Data Nasabah| =============");
				for(b=0;b<i;b++){
					printf("\n\n Nasabah ke-%d",b+1);
					printf("\n------------------------------------------");
					printf("\n| Bank         : %s",akun[b].bank);
					printf("\n| No Rekening  : %d",akun[b].norek);
					printf("\n| Nama         : %s",akun[b].nama);
					printf("\n| TTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
					printf("\n| Alamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
					printf("\n| Saldo        : %d",akun[b].saldo);
					printf("\n------------------------------------------");
				}
			}
			else{
				printf("============= |Data Kosong| =============");
			}getch();
			system("cls");
			break;
		}	
		case 3:
			for(b=0;b<i;b++){
				total+=akun[b].saldo;
			}		
			printf("--------------------------------------");
			printf("\nTotal Nasabah : %d",i);
			printf("\nTotal Saldo   : %d",total);
			printf("\n--------------------------------------");
			getch();
			system("cls");
			break;	
			
		case 4:
			{
			char lokasi[15];
			int ada=0;
			printf("---------------------------------------------------------------");
			fflush(stdin);
			printf("\nMasukkan Nama Kota/Provinsi : ");
			gets(lokasi);
			printf("\n---------------------------------------------------------------");
			for(b=0;b<i;b++){
				if(strcmp(akun[b].al.kota,lokasi)==0){
					ada++;
			        printf("\n\n Nasabah yg tinggal di kota %s",lokasi);
					printf("\n------------------------------------------");
					printf("\n| Bank         : %s",akun[b].bank);
					printf("\n| No Rekening  : %d",akun[b].norek);
					printf("\n| Nama         : %s",akun[b].nama);
					printf("\n| TTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
					printf("\n| Alamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
					printf("\n| Saldo        : %d",akun[b].saldo);
					printf("\n------------------------------------------");
				}
				if(strcmp(akun[b].al.provinsi,lokasi)==0){
					ada++;
			        printf("\n\n Nasabah yg tinggal di provinsi %s",lokasi);
					printf("\n------------------------------------------");
					printf("\n| Bank         : %s",akun[b].bank);
					printf("\n| No Rekening  : %d",akun[b].norek);
					printf("\n| Nama         : %s",akun[b].nama);
					printf("\n| TTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
					printf("\n| Alamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
					printf("\n| Saldo        : %d",akun[b].saldo);
					printf("\n------------------------------------------");
				}
			}
			if(ada==0){
				printf("============= |Data Kosong| =============");
			}getch();
			system("cls");
			break;
		}
		case 5 :
		{
			int umur1,umur2,tahun1,tahun2;
			int ada1=0,ada2=0;
			printf("\n------------------------------------------------------------");
    		fflush(stdin);
			printf("\n Masukkan umur kurang dari : ");
    		scanf("%d",&umur1);
    		fflush(stdin);
			printf("\n Masukkan umur lebih dari : ");
    		scanf("%d",&umur2);
			printf("\n------------------------------------------------------------");
			tahun1 = 2019-umur1;
			tahun2 = 2019-umur2;
			for(b=0;b<i;b++){
				if(akun[b].tl.tahun > tahun1){
					ada1++;
					printf("\n\n------------------------------------------------------------");
	    			printf("\n Nasabah yang umurnya kurang dari %d tahun",umur1);			
					printf("\n------------------------------------------------------------");
					printf("\n| Bank         : %s",akun[b].bank);
					printf("\n| No Rekening  : %d",akun[b].norek);
					printf("\n| Nama         : %s",akun[b].nama);
					printf("\n| TTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
					printf("\n| Alamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
					printf("\n| Saldo        : %d",akun[b].saldo);
					printf("\n------------------------------------------------------------");
				}
		
			}
			if(ada1==0){
				printf("\n====== |Data Tidak Ditemukan| ======",umur1);
	    	}
			for(b=0;b<i;b++){
				if(akun[b].tl.tahun > tahun1){
				ada2++;
				printf("\n\n------------------------------------------------------------");
	    		printf("\n Nasabah yang umurnya lebih dari %d tahun",umur2);			
				printf("\n------------------------------------------------------------");
				printf("\n| Bank         : %s",akun[b].bank);
				printf("\n| No Rekening  : %d",akun[b].norek);
				printf("\n| Nama         : %s",akun[b].nama);
				printf("\n| TTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
				printf("\n| Alamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
				printf("\n| Saldo        : %d",akun[b].saldo);
				printf("\n------------------------------------------------------------");
	    		}
			}
			if(ada2==0){
			printf("\n====== |Data Tidak Ditemukan| ======",umur2);
				}
				getch();
				system("cls");
				break;	
		}
		case 6:
		{
			int norekening,temu=0;
			printf("------------------------------------------------------------");
    		fflush(stdin);
			printf("\n Masukkan No rekening : ");
    		scanf("%d",&norekening);
			printf("\n------------------------------------------------------------");
			for(b=0;b<i;b++){
			if(akun[b].norek==norekening){
				temu++;
				printf("\n\n------------------------------------------------------------");
				printf("\n| Bank         : %s",akun[b].bank);
				printf("\n| No Rekening  : %d",akun[b].norek);
				printf("\n| Nama         : %s",akun[b].nama);
				printf("\n| TTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
				printf("\n| Alamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
				printf("\n| Saldo        : %d",akun[b].saldo);
	        	printf("\n------------------------------------------------------------");
				}
			}
			if(temu==0){
				printf("\n====== |No Rekening Tidak Ditemukan| ======");
				}
			getch();
    		system("cls");
    		break;
    	}
    	
    	case 7:
    	{
    		float min = akun[0].saldo, max = akun[0].saldo;
			int b, ketemu = 0;
			for(b=0;b<i;b++){
				if(max < akun[b].saldo){
				max = akun[b].saldo;
				}
				else{
					max = max;
				}		
			}
			for(b=0;b<i;b++){
				if(min > akun[b].saldo){
				min = akun[b].saldo;
			}
			else{
			min = min;
				}	
			}
			for(b=0;b<i;b++){
			if(akun[b].saldo == min){
			ketemu++;
			printf("\n\n------------------------------------------------------------");
	    	printf("\n Nasabah saldo minimal");			
			printf("\n\n------------------------------------------------------------");
			printf("\n| Bank         : %s",akun[b].bank);
			printf("\n| No Rekening  : %d",akun[b].norek);
			printf("\n| Nama         : %s",akun[b].nama);
			printf("\n| TTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
			printf("\n| Alamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
			printf("\n| Saldo        : %d",akun[b].saldo);
	        printf("\n------------------------------------------------------------");
			}
			if(akun[b].saldo == max){
			ketemu++;
			printf("\n\n------------------------------------------------------------");
	    	printf("\n Nasabah saldo maksimal");			
			printf("\n\n------------------------------------------------------------");
			printf("\n| Bank         : %s",akun[b].bank);
			printf("\n| No Rekening  : %d",akun[b].norek);
			printf("\n| Nama         : %s",akun[b].nama);
			printf("\n| TTL          : %d-%d-%d",akun[b].tl.tgl,akun[b].tl.bln,akun[b].tl.tahun);
			printf("\n| Alamat       : %s, %s, %s",akun[b].al.jln,akun[b].al.kota,akun[b].al.provinsi);
			printf("\n| Saldo        : %d",akun[b].saldo);
	        printf("\n------------------------------------------------------------");
	    		}	
			}
			if(ketemu==0){
			printf("\n====== |Data Tidak Ditemukan| ======");
	    	}
			getch();
			system("cls");
			break;
		}
		
		case 8:
			printf("======== Terima Kasih Telah Menggunakan Program Ini ========");
			ulang=0;
		}
		
	}
		
	return 0;
}
