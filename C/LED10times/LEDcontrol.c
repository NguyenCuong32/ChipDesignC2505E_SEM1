// Chớp tắt LED 10 lần với khoảng dừng.
#include <stdio.h>
#include <unistd.h> 
// #include <windows.h>
int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("LED ON\n");
        sleep(1); 
        printf("LED OFF\n");
        sleep(1); 
    }
    return 0;
}