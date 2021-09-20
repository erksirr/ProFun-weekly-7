#include <stdio.h>
int main()
{
    float x= 0, y;
    for (int i = 0; i < 10; i++)
    {
        scanf_s("%f", &y);
        x += y;
    }
    printf("%f", x / 10);
    return 0;
}