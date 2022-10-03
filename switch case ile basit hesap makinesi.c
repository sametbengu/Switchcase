

#include <stdio.h>// c programlamay� �al��t�rabilmemiz i�in gerekli k�t�phanemiz.

//switch case ile basit hesap makinesi

int main() 
{
    char islem; //hesap makinesinde yap�lacak i�lem bir karakter oldu�u i�in de�i�ten tipini char ile tan�mlad�k.
    float sayi1,sayi2; //say� giri�i olaca�� ve i�lem sonu�lar�n�n kesirli ��kabilme ihtimalinden dolay� float ile iki de�i�ken tan�mlad�k.

    printf("Yapmak istediginiz islemi secin (+, -, *,): "); //printf ile kullan�c�ya yapmak istedi�i i�lemi �ift t�rnak i�erisinde soruyoruz.
    scanf("%c", &islem);//scanf ve & ile verilen cevab� islem adl� de�i�kenimize at�yoruz.islem adl� de�i�kenimizin t�r� char oldu�u i�in scanf in i�erisine "%c" yaz�yoruz.

    printf("iki sayi girin: ");//kullan�c�dan iki adet say� girmesini printf ile istiyoruz.
    scanf("%f %f",&sayi1, &sayi2);//girilen say�lar� scanf ve & ile sayi1,sayi2 de�i�kenlerimize at�yoruz.De�i�kenlerimizin t�r� float oldu�u i�in scanf in i�erisine "%f" yaz�yoruz. 

    switch(islem)//switch(islem) ile girilen islemi caselere sokuyoruz.
    {
        case '+':// girilen islem '+' ise burada durup bir alt sat�ra ge�er,de�ilse bir sonraki case e ge�er.
            printf("%.1f + %.1f = %.1f",sayi1, sayi2, sayi1 + sayi2);// sayi1,sayi2 ve islem sonucunu printf ile yazd�r�yoruz.yazd�rma i�lemininde say�lar�m�z� g�sterebilmek i�in 
                                                                     //t�rnak i�erisine %f ekliyoruz. virg�lden sonra bir basamak g�stermesini istedi�imiz i�in .1f �eklinde yaz�yoruz.
            break;// break komutu ile kod �al��t�ray� durur.Break komutunu eklemezsek di�er case lerde de i�lemler uygulan�r ve yazd�r�r.

        case '-':// girilen islem '-' ise burada durur 
            printf("%.1f - %.1f = %.1f",sayi1, sayi2, sayi1 - sayi2);// sayi1,sayi2 ve islem sonucunu printf ile yazd�r�yoruz.
            break;

        case '*':// girilen islem '*' ise burada duru
            printf("%.1f * %.1f = %.1f",sayi1, sayi2, sayi1 * sayi2);// sayi1,sayi2 ve islem sonucunu printf ile yazd�r�yoruz.
            break;

        case '/':// girilen islem '/' ise burada duru
            printf("%.1f / %.1f = %.1f",sayi1, sayi2, sayi1 / sayi2);// sayi1,sayi2 ve islem sonucunu printf ile yazd�r�yoruz.
            break;

        default://yukar�da belirtilen case ler d���nda herhangi bir girdi veya eksik girdi sonucu default a gelir ve kod biter.
            printf("hatal�/eksik giri� yapt�n�z.");//Eksik veya hatal� kod oldu�unu printf ile yazd�rd�k.
    }
    	
	return 0;
}
