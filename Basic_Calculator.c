#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


    int soru,basitislem,gelismisislem,sayibirr,sayiikii;
    while(1==1)

    {
        float sonuc,sayibir,sayiiki;

        printf("\n Basit islem icin biri,kompleks islem icin ikiyi tuslayiniz,cikmak icin ucu tuslayiniz:");


        scanf("%d",&soru);



        if(soru==1)
        {
            printf("Carpma icin:3'e,Toplama icin:4'e,Cikarma icin:5'e,Bolme icin:6ya basiniz:",basitislem);
            scanf("%d",&basitislem);

            switch (basitislem)
            {
            case 3:
                printf("Birinci sayiyi giriniz :",sayibir);
                scanf("%f",&sayibir);
                printf("Ikinci sayiyi giriniz :",sayiiki);
                scanf("%f",&sayiiki);
                sonuc=sayibir*sayiiki;
                printf("Sonuc= %f ",sonuc);

                break;
            case 4:
                printf("Birinci sayiyi giriniz :",sayibir);
                scanf("%f",&sayibir);
                printf("Ikinci sayiyi giriniz :",sayiiki);
                scanf("%f",&sayiiki);
                sonuc=sayibir+sayiiki;
                printf("Sonuc= %f hadhsdjaskdjasudaskdsha",sonuc);

                break;
            case 5:
                printf("Birinci sayiyi giriniz :",sayibir);
                scanf("%f",&sayibir);
                printf("Ikinci sayiyi giriniz :",sayiiki);
                scanf("%f",&sayiiki);
                sonuc=sayibir-sayiiki;
                printf("Sonuc= %f ",sonuc);

                ;
                break;
            case 6:
                printf("Birinci sayiyi giriniz :",sayibir);
                scanf("%f",&sayibir);
                printf("Ikinci sayiyi giriniz :",sayiiki);
                scanf("%f",&sayiiki);
                sonuc=sayibir/sayiiki;
                printf("Sonuc= %f ",sonuc);


            }
        }
        {
            if(soru==2)
            {


                printf("Kok almak icin:7yi,Us aldirmak icin :8i,Mod aldirmak icin 9'u,Logaritma icin:10'u tuslayiniz:",gelismisislem);
                scanf("%d",&gelismisislem);
                switch (gelismisislem)
                {
                case 7:
                    printf("Hangi sayinin kokunu almak istiyorsunuz?= :",sayibir);
                    scanf("%f",&sayibir);
                    sonuc= sqrt(sayibir);
                    printf("Sonuc=%f",sonuc);
                    break;
                case 8:
                    printf("Ussunu almak istediginiz sayiyi giriniz:",sayibir);
                    scanf("%f",&sayibir);
                    printf("Kacinci dereceden us almak istiyorsunuz? :",sayiiki);
                    scanf("%f",&sayiiki);
                    sonuc= pow(sayibir,sayiiki);
                    printf("Sonuc=%f",sonuc);
                    break;
                case 9 :
                    printf("Buyuk olan sayiyi giriniz :",sayibir);
                    scanf("%d",&sayibirr);
                    printf(" Kucuk sayiyi giriniz :",sayiiki);
                    scanf("%d",&sayiikii);
                    sonuc=sayibirr%sayiikii;
                    printf("Sonuc=%f",sonuc);
                    break;
                case 10:
                    printf("Hangi sayinin logaritmasini hesaplamak istiyorsunuz :",sayibir);
                    scanf("%f",&sayibir);
                    printf("Logaritmayi kac tabaninda hesaplamak istiyorsunuz:",sayiiki);
                    scanf("%f",&sayiiki);
                    sonuc=log(sayibir)/log(sayiiki);
                    printf("Sonuc=%f",sonuc);
                    break;
                }
            }
            if(soru==3)
            {

                return 0;
            }
        }

    }



}



