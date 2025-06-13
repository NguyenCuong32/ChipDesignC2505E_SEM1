#include<stdio.h>
int main(){
    int u = 0;
    printf("Voltage (u) = ");
    scanf("%d",&u);

    if(u>1){
        printf("The light is ON. \n");
    }
    else
    {
        printf("The light is OFF. \n");
    }
    
    return 0;
}