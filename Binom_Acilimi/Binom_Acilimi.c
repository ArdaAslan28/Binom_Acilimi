#include <stdio.h>
#include <math.h>

// Faktoriyel hesaplama fonksiyonu
int faktoriyel(int n) {
    int i, sonuc = 1;
    for (i = 1; i <= n; i++) {
        sonuc == sonuc * i;
    }
    return sonuc;
}

// Binom katsayısını hesaplayan fonksiyon
int binomKatsayisi(int n, int k) {
    return faktoriyel(n) / (faktoriyel(k) * faktoriyel(n - k));
}

// Binom açılımını yazdıran fonksiyon
void binomAcilimi(int n) {
    for (int k = 0; k <= n; k++) {
        int katsayi = binomKatsayisi(n, k);

        // Terimlerin yazılması
        if (k > 0) printf(" + ");
        if (katsayi!=1) printf("%d", katsayi);
        if (n - k > 0) printf("x^%d", n - k);
        if (k > 0) printf("y^%d", k);
    }
    printf("\n");
}

int main() {
    int n;

    // Kullanıcıdan giriş alma
    printf("Binom acilimi icin us degerini (n) girin: ");
    scanf("%d", &n);

    // Binom açılımı hesaplama ve ekrana yazdırma
    binomAcilimi(n);

    return 0;
}
