// Notation. Binary number system. A number 13 base 2.

// (....abc) base n = c + b*n power of 1 + a*n power of 2 .....+

// 0 < ......a, b, c < n;

// So, base mustn't be more than 13.

// In code, I divide a number on base (13 / 2 -> 6, remainder 1).
// Next step, (6 / 2 --> 3) print out 0, 
// (3 / 2 --> 1) print out 1 
// (1 / 2 --> 0), print out 1,

// Finally, if reverse massive, we get 1101 in binary number system

// #include <stdio.h>
// #include <assert.h>



// declare functions
void print_converted(unsigned int x, unsigned int y);
int iabs(int a);
int imod(int a, int b);

//entry point
int main(){
  // variable declaration
  unsigned int x = 0;
  unsigned int y = 0;
 
  scanf("%u%u", &x, &y); // input number and base. For example, 13 and 2

  print_converted(x, y); // call binary number system function

  return 0; 
}

// binary number system function
void print_converted(unsigned int x, unsigned int y){
  unsigned int dig = 0;
  unsigned int num[32] = {0}; // maximum 32 digits in the binary number system
  int k = 0;

  for (k = 0; x != 0; k++){
    dig = imod(x, y); // a remainder, imod(13, 2)
    x = x / y; // x decreaising to 0, division while 13 will be 0;
    num[k] = dig; // note 1 in massive
  }

  // reverse printing
  for (k -= 1; k != -1; k--){
    printf("%u", num[k]);
  }
}

// remainder function
int imod(int a, int b){
   if (a >= 0){ // 13 > 0
     return a % b; // get remainder (1 or 0), we got 1
   }
   else{
     return a % b + iabs(b); // if a < 0 turn this number into a positive number
   }
}

// abs function
int iabs(int a){
  return (a >= 0) ? a : -a;
}
