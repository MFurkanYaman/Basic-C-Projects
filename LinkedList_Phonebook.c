#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct rehber
{
    char ad_soyad[80];
    double tel_no;
    struct rehber *gosterici;
};

struct rehber *ilk=NULL;
struct rehber *temp;
struct rehber *yeni_ilk=NULL;

int sayac=1;

int ekle_islemi()
{

    char ad_soyad[80];
    double tel_no;
    struct rehber *ata=(struct rehber*)malloc(sizeof(struct rehber));
    printf("Ad soyad gir= ");
    scanf("%s",&ata->ad_soyad);
    printf("Tel gir= ");
    scanf("%lf",&ata->tel_no);


    if(ilk==NULL)
    {
        ata->gosterici=ata;
        ilk=ata;
    }

    else
    {
        temp=ilk;
        while(temp->gosterici!=ilk)
        {
            printf("*-*-");
            sayac+=1;
            temp=temp->gosterici;

        }
        sayac+=1;
        temp->gosterici=ata;
        ata->gosterici=ilk;
        ilk=ata;
    }
}


int listele()
{
    temp=ilk;
    while(temp->gosterici!=ilk)
    {
        printf("%s->%lf\n",temp->ad_soyad,temp->tel_no);
        temp=temp->gosterici;
    }
    printf("%s->%lf\n",temp->ad_soyad,temp->tel_no);


}






int sil()
{
    temp=ilk;
    if(temp==NULL)
    {
        printf("Rehber bos\n");
    }

    else
    {
        while(temp->gosterici!=ilk)
        {
            temp=temp->gosterici;
        }
        yeni_ilk=ilk->gosterici;
        free(ilk);
        temp->gosterici=yeni_ilk;
        ilk=yeni_ilk;
        printf("En bastaki silinmistir.\n");


    }

}





int ara()
{
    temp=ilk;
    int tercih,i,aranacak_ad,dogruluk=0,sayac=0;
    double aranacak_no;



        printf("Tel no giriniz \n");
        scanf("%lf",&aranacak_no);
        if (ilk==NULL)
        {
            printf("Rehber Bos");

        }
        else
        {
            if(sayac==0)
            {
                printf("%s->%lf\n",temp->ad_soyad,temp->tel_no);
            }
            else{

                while(temp->gosterici!=ilk)
            {

                if (aranacak_no==temp->tel_no)
                {
                    printf("%s->%lf\n",temp->ad_soyad,temp->tel_no);
                }
                sayac=1;
                temp=temp->gosterici;
            }
            }



        }

}





int main()
{

    while(1==1)
    {


        int tercih;
        long int numara;
        char ad[80];
        printf("Ekleme(1)\nArama(2)\nListele(3)\nEn bastaki kisiyi sil(4)\nCikis(5)\n");
        printf("Lutfen secim yapiniz: ");
        scanf("%d",&tercih);
        printf("--------------------------\n");

        switch(tercih)
        {
        case 1:
            ekle_islemi();
            printf("--------------------------\n");
            break;
        case 2:
            ara();
            printf("--------------------------\n");
            break;
        case 3:
            listele();
            printf("--------------------------\n");
            break;
        case 4:
            sil();
            printf("--------------------------\n");
            break;
        case 5:
            printf("Cikis islemi gerceklestirilmistir.");
            printf("--------------------------\n");
            return 0;
            break;

        }
    }



}

