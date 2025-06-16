#include <stdio.h>
// Viết hàm tính tổng hai số nguyên
// Kiểu dữ liệu trả vè là int
// Hai tham số là a và b
int summary(int a, int b){
    return a+b;// Trả về tổng của a và b
}
int main(){
    // Nhập dữ liệu vào biến a và b
    int a;
    int b;
    scanf("%d",&a);
    printf("Enter a = %d\n",a);

    scanf("%d",&b);
    printf("Enter b = %d \n",b);
    // Gọi hàm summary để tính tổng
    int result = summary(a,b);
    // In kết quả
    printf("Result = %d\n",result);

    int x;
    int y;
    scanf("%d",&x);
    printf("Enter x = %d\n",x);
    scanf("%d",&y);
    printf("Enter y = %d \n",y);
    // Gọi hàm summary để tính tổng
    int result2 = summary(x,y);
    // In kết quả
    printf("Result2 = %d\n",result2);
    return 0;
}