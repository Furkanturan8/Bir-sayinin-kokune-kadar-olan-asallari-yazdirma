#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   //  GIRILEN BIR SAYININ KOKUNU ALDIGIN SAYIYA KADAR OLAN ASALLAR..
    //  ORN: 196=>14 ISE 2,3,5,7,11,13 YAZDIRIR.

    int i,j,sayi,koksayi,kontrol;

    printf("Bir sayi giriniz:"); scanf("%d",&sayi);

    koksayi=sqrt(sayi); // pow(sayi,0.5);
    printf("\nSayinin Koku:%d\n\n",koksayi);

    for(i=2;i<=koksayi;i++){

      kontrol=0;

        for(j=2;j<i;j++){
            if(i%j==0)  kontrol++;
        }

        if(kontrol==0) printf("%d\n",i);

    }

    return 0;
}
