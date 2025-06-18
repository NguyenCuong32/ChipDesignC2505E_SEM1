// Khai báo và hiển thị dữ liệu trong mảng
#include<stdio.h>

int main(){
    // int array[7] = {10,20,50,1,0,99,100};
    // for(int i; i<7;i++){
    //     printf("Array [%d], Value = %d\n",i,array[i]);
    // }
    // Khai báo một mảng có 7 phần tử.
    int array[7];
    // Nhập dữ liệu cho từng phần tử trong mảng.
    for(int i =0;i<7;i++){
        printf("Enter value for array[%d] \n",i);
        scanf("%d",&array[i]);
    }
    // Hiển thị dữ liệu của mảng ra màn hình.
    for(int i =0;i<7;i++){
       printf("Array [%d], Value = %d\n",i,array[i]);
    }
    return 0;
}