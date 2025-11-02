#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int iabs(int x){ return (x < 0) ? -x : x;}

int eu_mod(int x, int y){
    int r;
    assert(y != 0);
    r = x % y;
    if (r < 0) r += iabs(y);
    return r;
}

int gcd(int x, int y){
    int q;
    q = eu_mod(x, y);
    return (q == 0) ? iabs(y) : gcd(y, q); }

int main() {
   
   int x, n, g, res;
   printf("Input a positive integer more than 1: ");
   res = scanf("%d", &n);
   if ((res != 1) || (n < 2) || (n > 101)){
      printf("Wrong!\n");
      return 1;
   }
   printf("Input %d numbers: ", n);
   res = scanf("%d", &g);
   if ((res != 1) || (g > 30000)){
      printf("Wrong!\n");
      return 1;
   }
   for (int i = 0; i < n-1; i++){
      res = scanf("%d", &x);
      if (res != 1){
         printf("Wrong!\n");
	 return 1;
      }
      g = gcd(g, x);
   }
   printf("%d\n", g);
   return 0;
}
