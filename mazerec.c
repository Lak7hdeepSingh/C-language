#include <stdio.h>
int maze(int cr,int cc,int er, int ec){
    int dwards = 0;
    int rwards = 0;

    if (cr==er && cc==ec) return 1;
    if (cc==ec ){
        dwards += maze(cr+1,cc,er,ec);
    }
    
    if(cr==er){
        rwards += maze(cr,cc+1,er,ec);
    }
    if(cr<er && cc<ec){
        dwards+=maze(cr,cc+1,er,ec);
        rwards += maze(cr+1,cc,er,ec);
    }
    int tways = dwards+rwards;
    return tways;
}
int main(){
    int n,m;
    printf("Enter the Co-Ordinates :)");
    printf("\nEnter Row: ");
    scanf("%d",&n);
    printf("Enter column : ");;
    scanf("%d",&m);
    int ans = maze(1,1,n,m);
    printf("The no. of ways are %d",ans);
 }