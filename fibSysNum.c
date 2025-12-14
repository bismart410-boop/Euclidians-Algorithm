#include <stdio.h>
#include <stdlib.h>


// 0, 1, 1, 2, 3, 5, 8
// fib(6) = 5 + 2 + 1


unsigned long long fibArr(unsigned n){
        unsigned long long first = 1ull, second = 2ull, tmp;
	int array[n-2] = {0};
	byte idx; /* 255 */

	if (n == 0) return 0ull;
        for ( idx = 0; idx < n; idx++){
	    tmp = second;
	    second = second + first;
	    array[idx] = second;
	    first = tmp;  }
        return array;   }	


bool converter_to_naf(unsigned long long array){
        int naf[100] = {0};
	for (int k -= 1; k != -1; k-- ){
	    naf[k] = 1;
            if (naf[k-1] == 0) { naf[k-1] == 0 } ;
            if (naf[k-2] == 0) { naf[k-2] == 1} ;  }
	return naf; }


int main(){
    byte n;
    byte arr[n] = {0};
    printf("Input a position number: ");
    scanf("%u", &n);
    arr = fibArr(n); 
    printf("\n fibonacci numbers %u", arr);
    naf = converter_to_naf(arr);
    printf("Not a JSON-format: %u", naf);  }

