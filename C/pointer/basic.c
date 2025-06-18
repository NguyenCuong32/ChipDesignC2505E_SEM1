#include <stdio.h>
int main(){
    // Ví dụ cơ bản về con trỏ.
    int a = 10;
    int *ptr = &a;
    
    // Hiển thị giá trị và địa chỉ của biến a.
    printf("Value of a = %d\n",a);
    printf("Address of a = %p\n",&a);

    // Hiển thị giá trị và địa chỉ của con trỏ ptr

    printf("Value of ptr = %p\n",ptr);
    printf("Address of ptr = %p\n",&ptr);

    // Giá trị tham chiếu của con trỏ ptr

    printf("Value pointed by ptr = %d\n",*ptr);

    *ptr +=5;
     printf("Value pointed by ptr = %d\n",*ptr);

}