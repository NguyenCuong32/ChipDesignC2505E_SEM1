#include<stdio.h>
int main(){
    int sum = 0;
    float avg=0;
    int i=0;
    int temp =0;
    while (i<10)
    {
        scanf("%d",&temp);
        printf("Enter %d equal %d:\n",i,temp);
        sum = sum+temp;
        i++;
    }
    avg = sum/10.0;
    printf("Avgerage = %f\n",avg);

}