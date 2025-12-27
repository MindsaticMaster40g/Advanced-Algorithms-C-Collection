#include <math.h>
#include <stdio.h>

// Fonksiyon bildirimi
int faktoriyel(int a);

int main() {
    int k, N, x;
    double T;

    printf("Lütfen bir x değeri giriniz: "); // Kullanıcıdan x değeri istendi
    scanf("%d", &x); // Girilen değer x'e atandı

    printf("Lütfen kaçinci elemana kadar hesaplanacağini söyleyiniz: "); // Kullanıcıdan k değeri istendi
    scanf("%d", &k); // Girilen değer k'ya atandı

    T = 0.0; // Toplam değeri
    N = 0; // k değeri için sayaç

    while (N < k) {
        T = T + (pow(x, N) / faktoriyel(N)); // N. adımdaki sigma değeri hesaplandı
        N = N + 1; // N sayacı kullanıldı
    }

    printf("e^x'in değeri: %lf\n", T); // T ile hesaplanan e^x değeri ekrana yazdırıldı

    return 0;
}

// Fonksiyon tanımı
int faktoriyel(int N) {
    int i, y=1;
    for (i=1; i<=N; i++) {
        y=y*i;
    }
    return y;
}
