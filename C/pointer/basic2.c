#include<stdio.h>
int main(){
    int a = 10;
    int *ptr = &a;
    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Value of ptr = %p\n", ptr);
    printf("Address of ptr = %p\n", &ptr);
    printf("Value pointed by ptr = %d\n", *ptr);

    // Thay đổi giá trị của biến a
    a = 100;
    printf("After Value of a = %d\n", a);
    printf("After Address of a = %p\n", &a);
    printf("After Value of ptr = %p\n", ptr);
    printf("After Address of ptr = %p\n", &ptr);
    printf("After Value pointed by ptr = %d\n", *ptr);

    // Thay đổi giá trị thông qua con trỏ
    *ptr = 200;
    printf("After changing value through ptr:\n");
    printf("After Value of a = %d\n", a);
    printf("After Address of a = %p\n", &a);
    printf("After Value of ptr = %p\n", ptr);
    printf("After Address of ptr = %p\n", &ptr);
    printf("After Value pointed by ptr = %d\n", *ptr);

}