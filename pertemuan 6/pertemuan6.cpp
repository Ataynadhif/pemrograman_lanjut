#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	int nilai[2][3][3];
	double ab,bc,total;
	
	for(int a=0;a<2;a++){
		printf("Lintasan ke-%d\n",a+1);
		for(int b=0;b<3;b++){
			printf("Titik ke-%d\n",b+1);
			printf("Inputkan koordinat x : ");
			scanf("%d",&nilai[a][b][0]);
			printf("Inputkan koordinat y : ");
			scanf("%d",&nilai[a][b][1]);
			printf("Inputkan koordinat z : ");
			scanf("%d",&nilai[a][b][2]);			
		}
	}
	system("cls");
	for(int a=0;a<2;a++){
		printf("Lintasan ke-%d\n",a+1);
		for(int b=0;b<3;b++){
			printf("Titik ke-%d\n",b+1);
			printf("kordinat : \n");
			printf("x\ty\tz\n");
			printf("================\n");
			for(int c=0;c<3;c++){
			printf("%d\t",nilai[a][b][c]);
			}
		printf("\n\n");
		}
	printf("\n");
	ab = sqrt(pow((nilai[a][1][0]-nilai[a][0][0]),2) + pow((nilai[a][1][1]-nilai[a][0][1]),2) + pow((nilai[a][1][2]-nilai[a][0][2]),2));
	bc = sqrt(pow((nilai[a][2][0]-nilai[a][1][0]),2) + pow((nilai[a][2][1]-nilai[a][1][1]),2) + pow((nilai[a][2][2]-nilai[a][1][2]),2));		
	total = ab+bc;
	printf("panjang lintasan ke %d adalah : %lf\n",a+1,total);
	}	
}
