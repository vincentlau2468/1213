#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char input[100];
    int times, ascii, len;
    while (gets(input) != 0)
    {
        int a[257] = {0};
        len = strlen(input);
        for (times = 0; times < len; times++)
        {
            a[input[times]]= a[input[times]] + 1;

        }
        for (times = 1; times < len; times++)
        {
            for (ascii = 256; ascii >= 0; ascii--)
            {
                if (a[ascii] == times)
                {
                    printf("%d %d\n", ascii, times);
                }
            }
        }
        printf("\n");
    }
}
