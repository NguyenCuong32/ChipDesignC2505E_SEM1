#include <stdio.h>
// Tạo ra một cấu trúc tên Student
struct Student{
    char name[50];
    char class[20];
    float gpa;
    int age;
};

int main(){
    // Khai báo một biến kiểu Student
    struct Student std;
    // Nhập thông tin cho sinh viên
    printf("Nhap ten sinh vien: \n");
    scanf("%s",std.name);
    printf("Nhap vao lop \n");
    scanf("%s",std.class);
    printf("Nhap vao diem GPA: \n");
    scanf("%f",&std.gpa);
    printf("Nhap vao tuoi: \n");
    scanf("%d",&std.age);

    // In ra thông tin sinh viên
    printf("Ten %s - Lop %s - GPA %f - Tuoi %d\n",std.name,std.class,std.gpa,std.age);
    return 0;
}
