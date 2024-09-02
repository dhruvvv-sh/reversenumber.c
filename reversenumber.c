#include <stdio.h>
int main(){
    int d;
    printf("enter your digits:");
    scanf("%d",&d);
    int no = d;
    int rev = 0;
    int rd;
    while (d>0){
        rd = d % 10;
        rev = rev * 10 + rd;
        d = d / 10;
    }
    printf("reversed digit is:%d \n",rev);
    if (rev == no){
        printf("its a pallindrome \n");
    }
    else {
        printf("its not a pallindrome \n");
    }
    return 0 ;
}
