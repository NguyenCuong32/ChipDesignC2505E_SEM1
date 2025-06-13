#include <stdio.h>
int main(){
    float sensor_light = 0.0;

    printf("Enter sensor value: \r\n");
    scanf("%f",&sensor_light);
    if (sensor_light<=5.0)
    {
       printf("LOW LIGHT LEVEL \n");
    }
    return 0;
}