#include <stdio.h>
int main(){
    int ar[9] = {1,2,3,4,7,4,2,1};
    int i=0;
    int j = 8;
    while(i<j){
        if(ar[i]!=ar[j]){
            printf("Not Palindrome");
            return 0;
        }
        i++;
        j--;
    }
    printf("Palindrome");
}