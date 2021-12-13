#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int length, width, aim, count = 0;
    scanf("%d%d%d", &length, &width, &aim);
     int input[length][width];
    int *pointer = &input[0][0];
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            scanf("%d",&input[i][j]);
        }
    }
    for (int i = 0; i < length*width; i++)
    {
            if (aim ==*( pointer+i))
            {
                count = count + 1;
            }
        }
    
    printf("%d", count);
}
