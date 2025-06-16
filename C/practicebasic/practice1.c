#include <stdio.h>

void lightControl(){
    int temp = 0;
    printf("Enter temperature in Celsius:\n");
    scanf("%d",&temp);
    if(temp<0||temp >50){
        printf("Warning: Temperature\n");
    }
    else if((temp>=0 && temp <=15)||(temp>=30 && temp <=50)){
        printf("Off the light\n");
    }
    else if(temp>15 && temp<30){
        printf("On the light\n");
    }
}
int main()
{
    lightControl();
    lightControl();
    return 0;
}