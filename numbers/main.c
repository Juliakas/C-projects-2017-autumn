//Julius Rupsys
#include <stdio.h>

int main()
{
    int max, min, sk, count = 1;
    scanf("%d",&sk);
    max = sk; min = sk;
    while(max<min*2) {
        scanf("%d",&sk);
        if(sk < min) min = sk;
        if(sk > max) max = sk;
        count++;
    }
    printf("Maksimalus: %d, minimalus: %d, nariu skaicius: %d\n", max, min, count);
    return 0;
}

//Keep inputting positive set of numbers until the biggest number becomes at least 2 times bigger than the smallest