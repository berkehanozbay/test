#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
 void adres(char telefon[]){
  if(telefon[0]=='3' && telefon[1]=='4'){
    printf("istanbul");}
    else if(telefon[0]=='4' && telefon[1]=='1'){
        printf("kocaeli");}
    else if(telefon[0]=='1' && telefon[1]=='6'){
        printf("bursa");}
        else{
            printf("bilinmiyor");
        }
 }
double ucret(int para,int tane)
{
    int ucret;
    ucret=tane*(para*1.2);
 return ucret;
}

   int main() {
    char cumle[100],cihaz[20];
    char ad[20],soyad[20];
    char kod[20];
    int fiyat,adet,telno;
    double k;
    printf("alisveris bilgilerini giriniz:\n");
    gets(cumle);
    sscanf(cumle,"%s %s %d kodlu birim fiyati %d TL olan %d adet %s satin almistir.",ad,soyad,&telno,&fiyat,&adet,cihaz);
    sprintf(kod,"%d",telno);
    printf("musteri bilgileri:\n");
    k=ucret(fiyat,adet);

    printf("ad soyad:%s %s",ad,soyad);
    printf("\nadres:");
    adres(kod);
    printf("\ntelefon numarasi:0%d",telno);
    printf("\nurun adi:%s",cihaz);
    printf("\nurun adeti:%d",adet);
    printf("\nurunun birim fiyati:%d",fiyat);
    printf("\nurun satis fiyati(kdv dahil):%.2lf",(fiyat*1.2));
    printf("\n%s %s adli musteri %s urununden %d adet satin almistir ve toplam %.2lf TL odemistir.",ad,soyad,cihaz,adet,k);

   return ;
}
