#include <stdio.h>
int findMax(int a, int b){
    if (a>b)
    {
        return a; 
    }
    else
    {
        return b; 
    }
}
int main(){
    while (1)
    {
        int choice;
        int a, b;
        int max = 0;
        printf("Enter a choice (1 : find max, 2: find min):\n");
        scanf("%d",&choice);
        printf("Enter a:\n");
        scanf("%d",&a);
        printf("Enter b:\n");
        scanf("%d",&b);
        switch (choice)
        {
        case 1:
            max = findMax(a, b);
            printf("Max = %d\n",max);
            break;
        case 2:
            break;
        
        default:
            printf("Only input 1 or 2\n");
            break;
        }
        /* code */
    }
    
}