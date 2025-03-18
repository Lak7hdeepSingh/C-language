#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Laksh is The Smartest Guy In C lang";
    printf("%s",str);
    printf("\n");
    puts(str);
    /////////////////////////
    char str2[40];
    scanf("%s",str2); //only first word is considered
    gets(str2) // Entire Sentence Is considered
    printf("Your Input Was : %s",str2);
    ////////////////////////////
    char str3[40];
    scanf("%[^\n]s",str3);
}