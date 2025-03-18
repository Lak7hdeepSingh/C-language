#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    puts("Enter a String ");
    scanf("%[^\n]s",str);
    puts("The Reverse is ");//automatically /n
    int size = 0;
    int k = 0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    for(int i = 0, j=size-1;i<=j;j--,i++){
        char temp = str[i];
        str[i] = str[j];
        str[j]= temp;
    }
    puts(str);
}