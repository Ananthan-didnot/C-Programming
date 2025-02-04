/*Write a C Program to check Whether a Character is Vowel or Consonant*/

#include <stdio.h>

int main()
{
    char character;
    printf("Enter a character: ");
    character = getchar();

    if (character == 'a' || character == 'e' || character == 'i' ||
        character == 'o' || character == 'u' || character == 'A' ||
        character == 'E' || character == 'I' || character == 'O' ||
        character == 'U')
    {
        printf("The character is a vowel");
    }
    else
    {
        printf("The character is a consonant");
    }

    return 0;
}