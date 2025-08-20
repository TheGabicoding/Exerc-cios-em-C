#include <stdio.h>

int main() {
  double temp, C, F, K;
  char escala;
  scanf("%lf %c", &temp, &escala);
  
  if (escala == 'C'){
    C = temp;
  }
  else if (escala == 'F'){
    C = (temp - 32) / 1.8;
    
  }
    
  else if (escala == 'K'){
    C = temp - 273.15;
    
  }
  else {
    printf("Escala inválida!\n");
    return 1;
  }
  
  F = C * 1.8 + 32;
  K = C + 273.15;

  printf("Celsius: %.2lf\n", C);
  printf("Farenheit: %.2lf\n", F);
  printf("Kelvin: %.2lf\n", K);

  return 0;
  
}
