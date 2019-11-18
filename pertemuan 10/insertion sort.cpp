 #include<stdio.h>
 
int main()
{
    int j,n,y,angka[30];
    printf("Masukkan Angka Yang Ingin di Input:");
    scanf("%d",&n);
    printf("\nMasukkan Angka\n");
 
    for(int i=0;i<n;i++)
    {
    	printf("angka ke %d : ",i);
        scanf("%d",&angka[i]);
    }
 
    for(int i=1;i<=n-1;i++)
    {
        y=angka[i];
        j=i-1;
 
        while((y<angka[j])&&(j>=0))
        {
            angka[j+1]=angka[j];   
            j=j-1;
        }
 
        angka[j+1]=y;   
    }
 
    printf("\nAngka setelah diurutkan\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",angka[i]);
    }
 
    return 0;
}
