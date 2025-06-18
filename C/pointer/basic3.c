// Duyệt giá trị trong mảng bằng con trỏ
#include <stdio.h>
int main(){
    int array[7] = {10, 20, 50, 1, 0, 99, 100};
    int * ptr = array;
    // Duyệt mảng dùng con trỏ
    for(int i=0;i<7;i++){
        printf("Array[%d] = %d\n",i,*(++ptr));
    }
    return 0;
}