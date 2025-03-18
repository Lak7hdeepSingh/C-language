#include <stdio.h>
int main(){
   char arr[5] = {'l','a','k','s','h'};
   printf("%c ",arr[1]);
   for(int i = 0;i<5;i++){
    printf("%c",arr[i]);
   }
////////////////////////////////
   int x = 0;
   char a = (char)x; //a-->> '\0'
   printf("%c",a);
///////////////////////////////////////////
   printf("\n");
   int i = 0;
   while(arr[i]!='\0')
   {
    printf("%c ",arr[i]);
    i++;
   }
//////////////////////////////////
   printf("\n");
   int j = 0;
   char arr2[]="Hello Bro What the fuck is going on !\0";
   while(arr2[j]!='\0')
   {
    printf("%c ",arr2[j]);
    j++;
   }

}