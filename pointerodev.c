//* pointer ödevi *//

#include <stdio.h> //kütüphaneler eklendi

void point(int **ptr);  // fonksiyon belirtildi

int main(){
    int x, *ptr;

    x = 10;
    ptr = &x; // ptr pointer'ı x'in adres değerine atandı
    printf("x'in ilk adres degeri: %p\n", &x); // ekrana x'in ilk adres değeri yazdırıldı

    point(&ptr); // point fonksiyonu çağrıldı ve ptr'nin adresi gönderildi

    // x'in yeni adresini yazdırmak için doğrudan &x kullanılacak
    printf("x'in yeni adres degeri: %p\n", &x); // x'in yeni adres değeri ekrana yazdırıldı

    return 0;
}

void point(int **ptr) {
    static int y = 20;  // yeni bir değişken oluşturuldu
    *ptr = &y; // ptr'nin gösterdiği adresi yeni bir adrese değiştir
}
