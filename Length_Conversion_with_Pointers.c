#include <stdio.h>
#include <stdlib.h>
//Girilen karakter dizisinin boyunu bulan kod
int main()
{
char dizi[100],*pointer;
printf("Lutfen metin giriniz:");
gets(dizi);
for(pointer=dizi;*pointer;pointer++);
{

}
printf("Girdiginiz metnin boyutu=%d",pointer-dizi);

}
