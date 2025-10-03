#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STR_MAX 100

// Prototypes
void format(char str[]);
void combine (char dest[], char combo1[], char combo2[]);

int main()
{
    char color[STR_MAX], snack[STR_MAX], animal[STR_MAX], combo[STR_MAX];

    printf("Welcome to the Band Name Generator!\nPlease answer these 3 questions:\n\n");

    printf("1. What is your favorite color? ");
    fgets(color, STR_MAX, stdin);
    format(color);

    printf("2. What is your favorite snack? ");
    fgets(snack, STR_MAX, stdin);
    format(snack);

    printf("3. What is your favorite animal? ");
    fgets(animal, STR_MAX, stdin);
    format(animal);

    combine(combo, snack, animal);

    /*
    The Color Snack
    
    The Color Animal
    
    Snack + Animal Combo
    */

    char flair1[STR_MAX], flair2[STR_MAX], flair3[STR_MAX];

    strcpy(flair1, "Presenting... The ");
    strcpy(flair2, "The one and only... The ");
    strcpy(flair3, "You are not prepared for... The ");

    strcat(flair1, color);
    strcat(flair1, " ");
    strcat(flair1, snack);

    strcat(flair2, color);
    strcat(flair2, " ");
    strcat(flair2, animal);

    strcat(flair3, combo);

    printf("\n%s\n", flair1);
    printf("%s\n", flair2);
    printf("%s\n", flair3);
}

void format(char str[])
{

    int length = strlen(str);
    str[0] = toupper(str[0]);

    for(int i = 1; i <= length; i++){
    str[i] = tolower(str[i]);
    }
    
    char *nl = strchr(str, '\n');
    if (nl) *nl = '\0';
}

void combine (char dest[], char combo1[], char combo2[])
{
    strncpy(dest, combo1, 3);
    strncat(dest, combo2, 2);
    dest[3] = tolower(dest[3]);
}