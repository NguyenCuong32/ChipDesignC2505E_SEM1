//Chuyển đổ i tố c độ truyền UART theo lự a chọ n.
#include <stdio.h>
int main(){
    int choice =0;
    int baudrate =1200;
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    baudrate = 1200;
        break;
    case 2:
    baudrate = 2400;
        break;
    case 3:
    baudrate = 4800;
        break;
    case 4:
    baudrate = 9600;
        break;
    
    default:
        printf("Invalid choice \n");
        break;
    }
    printf("Baudrate =%d\n",baudrate);
    return 0;
}