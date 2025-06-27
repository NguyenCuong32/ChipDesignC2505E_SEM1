#include <iostream>
using namespace std;

// Khai báo class
class Rectangle {
private:
    int width;
    int height;

public:
    // Constructor: Hàm khởi tạo
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Setter: Gán giá trị
    void setSize(int w, int h) {
        width = w;
        height = h;
    }

    // Getter: Lấy diện tích
    int getArea() {
        return width * height;
    }

    // Hàm hiển thị thông tin
    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
        cout << "Area: " << getArea() << endl;
    }
};

// Hàm main để sử dụng class
int main() {
    Rectangle rect1(10, 5); 
    rect1.display();

    rect1.setSize(20, 8);
    cout << "New dimensions: \n";
    rect1.display();

    return 0;
}
