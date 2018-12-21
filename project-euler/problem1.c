#include <stdio.h>
#include <math.h>

int multiples(int a, int b, int max) {
    int count = 0;
    for (int i = 1; i < max; i++) {
	if (i % a == 0 || i % b == 0) {
	    count += i;
	}
    }
    return count;   
}

int main() {
    int num = multiples(3, 5, 1000);
    int sz = (int)((ceil(log10(num)+1)*sizeof(char)));
    char str[sz];
    sprintf(str, "%d", num);
    printf(str);
    printf("\n");
    return 0;
}
