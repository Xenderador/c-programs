#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int StringMatch(char text[], char pattern[])
{
    int i, j, m, n;
    n = strlen(text);
    m = strlen(pattern);
    for (i = 0; i <= n - m; i++)
    {
        j = 0;
        while (j < m && tolower(text[i + j]) == tolower(pattern[j]))
        {
            j++;
        }
        if (j == m)
        {
            return i + 1;
        }
        else
        {
            printf("Mismatch: Text[%d] = %c, Pattern[%d] = %c\n", i + j, text[i + j], j, pattern[j]);
        }
    }
    return -1;
}

int main()
{
    char text[100], pattern[25];
    int pos;
    printf("\n enter the text:");
    fgets(text, 100, stdin);
    text[strcspn(text, "\n")] = '\0'; // Remove newline character

    printf("\n enter the pattern:");
    fgets(pattern, 25, stdin);
    pattern[strcspn(pattern, "\n")] = '\0'; // Remove newline character

    pos = StringMatch(text, pattern);
    if (pos != -1)
    {
        printf("\n The pattern %s is found at position %d", pattern, pos);
    }
    else
    {
        printf("\n Pattern not found");
    }
    return 0;
}