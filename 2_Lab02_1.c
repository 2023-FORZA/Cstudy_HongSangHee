#include <stdio.h>
#include <string.h>

char* max(char* a, char* b)
{
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] < b[i])
            return b;
        if (a[i] > b[i])
            return a;
    }
    return a;
}
void substract(char* a, char* b)
{
    for (int i = 0; i < strlen(b); i++)
    {
        a[i] = a[i] - b[i] + '0';
        if (a[i] < '0')
        {
            a[i] += 10;
            a[i - 1]--;
        }
    }
    for (int i = strlen(b) - 1; i >= 0; i--)
    {
        if (a[i] < '0')
        {
            a[i] += 10;
            a[i - 1]--;
        }
    }
}
void devidesubstract(char* a, char* b, char* r, int index)
{
    r[index] = '0';

    while (a[index - 1] > '0' || max(a + index, b) == a + index)
    {
        substract(a + index, b);
        ++r[index];
    }
}
void devide(char* a, char* b, char* r)
{
    int index = 0;
    int digit = strlen(a) - strlen(b);

    while (index <= digit)
        devidesubstract(a, b, r, index++);
    r[index] = '\0';
}
int main()
{
    char a[1001], b[1001], r[1001];
    int ri = 0, ai = 0;
    scanf("%s %s", a, b);
    devide(a, b, r);
    while (r[ri] == '0')
        ri++;
    while (a[ai] == '0')
        ai++;
    if (r[0] == '\0')
    {
        r[0] = '0';
        r[1] = '\0';
    }
    if (a[ai] == '\0')
        ai--;
    if (r[ri] == '\0')
        ri--;
    printf("%s\n%s", r + ri, a + ai);
    return 0;
}