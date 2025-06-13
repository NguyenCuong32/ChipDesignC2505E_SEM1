#include <stdio.h>

    int main(){
        while (1)
        {
            printf("Enter a number: \n");
            int n=0;
            scanf("%d",&n);
            if (n==1)
            {
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
            else{
                break;
            }
        }
        return 0;
        
    }
