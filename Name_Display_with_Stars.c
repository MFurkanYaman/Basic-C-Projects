#include <stdio.h>
#include <stdlib.h>
//Hocam M ve N harfinde düzgün görünmesi için en sonuna bilerek * yazdırmadım.
int harfm(boyut)
{
    int i,k,j;

    for(i=1; i<=boyut; i++)
    {
        if(i==1)
        {
            for(k=1;k<boyut;k++)
            {
              printf("* ");
            }
            printf("\n");

        }
        else
        {
            printf("* ");
            for(k=1;k<=(boyut-3)/2;k++)
            {
                printf("  ");

            }
            printf("* ");
             for(k=1;k<=(boyut-3)/2;k++)
            {
                printf("  ");

            }
             printf(" *\n");


        }

 }

printf("\n\n\n");

}
int harfe(boyut)
{
int i,j,k;
for(i=1;i<boyut;i++)
{
    if(i==1)
    {
        for(j=0;j<boyut;j++)
        printf("* ");
    }
    printf("\n");
    if(i==boyut-1)
    {
     for(j=1;j<boyut;j++)
     {
       printf("* ");
     }

    }
    if(boyut%2==1 && i==(boyut-1)/2)
    {
     for(j=1;j<boyut;j++)
    {
    printf("* ");
    }
}
   if(boyut%2==0 && i==(boyut-2)/2)
    {
     for(j=0;j<boyut;j++)
    {
    printf("* ");
    }
}
else
    printf("* ");

}
printf("\n\n\n");
}
int harft(boyut)
{
       int i,j;

   for(i=1;i<boyut;i++)
   {
    if(i==1)
    {
        for(j=0;j<boyut;j++)
        {
        printf("* ");
        }
        printf("\n");
    }
    if(boyut%2==0)
    {
      for(j=1;j<=(boyut-2)/2;j++)
      {
          printf("  ");
      }
      printf("* *\n");
    }
      if(boyut%2==1)
    {
      for(j=1;j<=(boyut-1)/2;j++)
      {
          printf("  ");
      }
      printf("*\n");
    }

}
   printf("\n\n\n");
}
int harfi(boyut)
{
    int i,j;
    for(j=1;j<=(boyut-1)/2;j++)
    {
        printf("  ");
    }
    printf("***\n\n");
    for(i=1;i<=boyut-2;i++)
    {
        for(j=1;j<=(boyut-2)/2;j++)
        {
            printf("  ");
        }
        printf("***\n");
    }
printf("\n\n\n");
}
int harfn(boyut)
{
int i,j;
for(i=1; i<boyut; i++)
{
    if(i==1)
    {
        for(j=1; j<boyut; j++)
        {
            printf("* ");
        }
    }
    printf("\n");
    printf("* ");
    if(i!=1)
    {
        for(j=0; j<boyut-2; j++)
        {
            printf("  ");
        }
        printf("* ");
    }
    if(i==1)
    {
       for(j=0; j<boyut-2; j++)
        {
            printf("  ");
        }
        printf("* ");
    }
}
printf("\n\n\n");
}
int harfy(boyut)
{
    int i,j;
   for(i=1;i<=boyut;i++)
   {
       if(i==(boyut+1)/2 || i==boyut)
       {
           for(j=1;j<=boyut;j++)
           {
               printf("* ");
           }
           printf("\n");
       }
       else
       {
           if(i<=(boyut+1)/2)
           {
               printf("* ");
               for(j=1;j<=boyut-2;j++)
               {
                   printf("  ");
               }
               printf("* \n");
           }
           else
           {
               for(j=1;j<=boyut-1;j++)
               {
                   printf("  ");
               }
               printf("* \n");
           }
       }
   }
   printf("\n\n\n");
}
int harfa(boyut)
{
    int i,j;
    for(i=1; i<=boyut;i++)
    {
        printf("* ");
        for(j=1; j<boyut;j++)
        {
            if(i==boyut/2)
            {
                printf("* ");
            }
            if(i==1)
            {
                printf("* ");
            }
            if(j!=1 && i!=boyut/2 && i!=1)
            {
              printf("  ");
            }

        }
        if(j!=1 && i!=boyut/2 && i!=1)
        {
         printf("*");
        }
        printf("\n");


    }
    printf("\n\n\n");
}


int main()
{
int boyut;
printf("!Dikkat Duzgun Bir Gorunum Icin Gireceginiz Tek Degerler Bir Arttirilip Cift Hale Getirilecektir!\n!Sekli Tam Gorebilmek Icin Boyutu Minumum 5'den Baslatiniz!\nBoyut Giriniz:");
scanf("%d",&boyut);
if(boyut%2==1)
{
 boyut+=1;
}
  harfm(boyut);
  harfe(boyut);
  harft(boyut);
  harfi(boyut);
  harfn(boyut);
  harfy(boyut);
  harfa(boyut);
  harfm(boyut);
  harfa(boyut);
  harfn(boyut);
  return 0;
}

