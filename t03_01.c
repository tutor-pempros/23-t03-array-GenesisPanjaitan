// 12S23012 - Genesis Tombak Dapot Tua Panjaitan

#include <stdio.h>

int main(int _argc, char **_argv) {
  int angka, n, min, max;
    
  min = 101;
  max = -101;

  scanf("%d", &angka);

  for (n = 0; n < angka; n++) {
    int angka2;

    scanf("%d", &angka2);

    if (angka2 < min) {
      min = angka2;
    }
    else if (angka2 > max){
      max = angka2;
    }
  }
  
  printf("%d\n", min);
  printf("%d\n", max);
  
  return 0;
}