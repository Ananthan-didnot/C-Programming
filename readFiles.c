/*Write a C program to read a file and count number of words,lines and characters in it*/

#include <stdio.h>
int main()
{
    FILE *fp;
    int words = 0, lines = 0, character = 0;
    fp = fopen("text.txt", "r");
    char ch;
    while (fscanf(fp, "%c", &ch) == 1)
    {
        character++;

        if (ch == '\n')
        {
            lines++;
            words++;
        }

        if (ch == ' ' || ch == '.')
        {
            words++;
        }
    }
    if (character > 1)
    {
        lines += 1;
    }
    fclose(fp);
    printf("Words = %d\nLines = %d\nCharacters = %d\n", words, lines, character);
    return 0;
}
