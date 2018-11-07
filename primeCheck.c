#include <stdio.h>
#include <math.h>
int isPrime(int n);

float main(){
  int n,p;
  for(n = 2; n < 65536; n++){
    p = isPrime(n);
    if (p == 1){
      printf("%d is prime %d \n",n,p);
    }
  }
  return 0;
}

int isPrime(int n) {
  int d;
  float dn;
  int prime = 1;
  int pivot = (int)sqrt(n);
    for (d = 2; d < pivot+1;d++){
      dn = d;
      if ((n % 2 == 0) && (n > 2)) {prime = 0; break;}
      if ((n / dn) == (n / d)) {prime = 0; break;}
    }
  return prime;
}
