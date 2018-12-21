#include <stdio.h>
#include <math.h>

int even_fib(int max) {
    int first = 1;
    int second = 2;
    int total = second;
    while (second < max) {
	int temp = first;
	first = second;
	second += temp;
	if (second % 2 == 0) {
            total += second;
	}
    }
    return total;
}

int main() {
    int num = even_fib(4000000);
    int sz = (int)((ceil(log10(num)+1)*sizeof(char)));
    char str[sz];
    sprintf(str, "%d", num);
    printf(str);
    printf("\n");
    return 0;
}
