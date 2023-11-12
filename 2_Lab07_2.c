#include <stdio.h>
int main()
{
    char arr[51];
    int s = 0, t = 0, i = 0, b = 1;
    scanf("%s", arr);
    while (arr[i] != '\0')
    {
        if (arr[i] == '-' || arr[i] == '+')
        {
            s += b * t;
            if (arr[i] == '-')
            {
                b = -1;
            }
            t = 0;
        }
        else
        {
            t = t * 10 + arr[i] - '0';
        }
        i++;
    }
    s += b * t;
    printf("%d\n", s);
    return 0;
}