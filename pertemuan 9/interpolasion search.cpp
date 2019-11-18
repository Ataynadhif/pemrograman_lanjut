#include<stdio.h>
#include<conio.h>

int ulang(int data[],int cari,int high,int low,int pss){
	pss=(cari-data[low])/(data[high]-data[low])*(high-low)+low;
		if(data[pss] == cari){
			printf("data berada pada indeks ke %d",pss);
		}
		else{
			if(pss>high){
				printf("Data tidak ditemukan");
			}
			else if(data[pss]>cari){
				high=pss-1;
				return ulang(data, cari, high, low, pss); 
			}
			else if(data[pss]<cari){
				low=pss+1;
				return ulang(data, cari, high, low, pss); 
			}
		}
	}

int main(){
	int data[9]={3,9,11,12,15,17,23,31,35};
	int cari,high=8,low=0,pss;
	printf("Data yang ada : \n");
	for(int a=0;a<9;a++){
		printf("%d\t",data[a]);
	}
	printf("\nMasukkan data yang ingin dicari : ");
	scanf("%d",&cari);
	
	return ulang(data, cari, high, low, pss);
	
	return 0;
}
