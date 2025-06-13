#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    printf("Enter x : \r\n");
    scanf("%d",&x);

    printf("Enter y : \r\n");
    scanf("%d",&y);

    printf("Enter z: \r\n");
    scanf("%d",&z);

    printf("x =%d y =%d z= %d \r\n",x,y,z);
    int result =x+y+z;
    printf("Result =%d",result);
    return 0;
}