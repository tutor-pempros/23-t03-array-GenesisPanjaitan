// 12S23012 - Genesis Tombak Dapot Tua Panjaitan

#include <stdio.h>

int main(int _argc, char **_argv) {
    int angka, n, min, max;
    float total = 0.0;
    
    min = 101;
    max = -101;

    scanf("%d", &angka);

    for (n = 0; n < angka; n++) {
        int angka2;

        scanf("%d", &angka2);
        total += angka2; // Menambahkan angka2 ke total

        if (angka2 < min) {
            min = angka2;
        }
        else if (angka2 > max){
            max = angka2;
        }
    }
  
    float rata_rata = total / angka; // Menghitung rata-rata
    printf("%d\n", min);
    printf("%d\n", max);
    printf("%.2f\n", rata_rata); // Menampilkan rata-rata dengan 2 digit presisi
  
    return 0;
}
