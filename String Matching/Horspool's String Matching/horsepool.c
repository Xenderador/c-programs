#include <ctype.h> // Include ctype for tolower function
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int m, n;
int table[128];

void ShiftTable(char P[m])
{
    int i, j;
    for (i = 0; i < 128; i++)
    {
        table[i] = m;
    }
    for (j = 0; j <= m - 2; j++)
    {
        table[(int)tolower(P[j])] = m - 1 - j;
    }
}

int Horsepool(char T[], char P[])
{
    int i, k;
    i = m - 1;
    while (i <= n - 1)
    {
        k = 0;
        while (k <= m - 1 && tolower(P[m - 1 - k]) == tolower(T[i - k]))
        {
            k++;
        }
        if (k == m) // Pattern match found
        {
            return i - m + 1;
        }
        else
        {
            i = i + table[(int)T[i]]; // Shift amount
        }
    }
    return -1;
}

int main()
{
    int pos;
    char text[100], pattern[25];
    printf("\n Enter the text:");
    fgets(text, 200, stdin);
    printf("\n Enter the pattern:");
    fgets(pattern, 25, stdin);

    pattern[m - 1] = '\0'; // Remove newline character from pattern

    n = strlen(text);
    m = strlen(pattern) - 1; // Exclude newline character from pattern length

    ShiftTable(pattern);

    pos = Horsepool(text, pattern);

    if (pos == -1)
    {
        printf("\n Pattern not found");
    }
    else
    {
        printf("\n Pattern %s found at position %d", pattern, pos + 1);
    }
    return 0;
}
