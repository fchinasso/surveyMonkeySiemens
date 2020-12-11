

#include <stdio.h>
#include <string.h>
#include <math.h>

int ConcatERemove(char *s, char *t, int k)
{

    int diff = abs(strlen(s) - strlen(t));
    int pos = 0;
    int remov = 0;
    int add = 0;

    if (strlen(s) < strlen(t))
    {
        //TODO Tratar alocacao de memoria
        return -1;
    }

    if (diff > k)
    {
        return 0;
    }

    int i = 0;

    while ((s[i] == t[i]) && pos < strlen(t) && pos < strlen(s))
    {
        pos++;
        i++;
    }

    for (int j = strlen(s); j > pos; j--)
    {
        s[j] = NULL;
        remov++;
    }

    add = strlen(t) - pos;

    if (add + remov > k)
        return 0;

    else
        return 1;
}

int main()
{
    char s[50] = "abcdefghijp";
    char t[50] = "abcpefgh";
    int k = 11;

    int r = ConcatERemove(s, t, k);

    if (r == 0)
        printf("nao");

    if (r == 1)
        printf("sim");
}
