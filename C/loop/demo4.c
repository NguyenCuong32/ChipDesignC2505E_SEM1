#include<stdio.h>
int main(){
    while(1){
        int x =0;
        int y =0;
        printf("Enter x = \n");
        scanf("%d",&x);
        printf("Enter y = \n");
        scanf("%d",&y);
        int sum = x+y;
        printf("Sum of x and y =%d\n",sum);
    }
}