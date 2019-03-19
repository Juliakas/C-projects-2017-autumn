//Julius Rupsys
#include <stdio.h>

int main()
{
    int max, min, count = 0, sk;
    do {
        scanf("%d",&sk);
        if(sk < min || count == 0) min = sk;
        if(sk > max || count == 0) max = sk;
        count++;
    } while(max<min*2);
    printf("Max: %d, min: %d, count: %d\n", max, min, count);
    return 0;
}
