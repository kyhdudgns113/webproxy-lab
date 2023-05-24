#include <stdio.h>

int main(int argc, char **argv) {
    char test[] = "test string is first=53";
    char cbuf[128];
    int ibuf = 1;

    sscanf(test, "%s %*s %*s first= %d", cbuf, &ibuf);

    printf("Result is %s\n", cbuf);
    printf("Result is %d\n", ibuf);

}