#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentId;
    string fullName;
    float averageScore;

public:
    // Hàm khởi tạo mặc định
    Student() {
        studentId = "";
        fullName = "";
        averageScore = 0.0;
    }

    // Hàm khởi tạo có tham số
    Student(string id, string name, float score) {
        studentId = id;
        fullName = name;
        averageScore = score;
    }

    // Nhập thông tin sinh viên
    void input() {
        cout << "Enter student ID: ";
        getline(cin, studentId);
        cout << "Enter full name: ";
        getline(cin, fullName);
        cout << "Enter average score: ";
        cin >> averageScore;
        cin.ignore(); // Xóa ký tự '\n' sau khi nhập số
    }

    // Hiển thị thông tin sinh viên
    void display() {
        cout << "Student ID: " << studentId << endl;
        cout << "Full Name: " << fullName << endl;
        cout << "Average Score: " << averageScore << endl;
    }

    // Hàm kiểm tra học lực
    string rank() {
        if (averageScore >= 8.0)
            return "Good";
        else if (averageScore >= 6.5)
            return "Fair";
        else if (averageScore >= 5.0)
            return "Average";
        else
            return "Poor";
    }
};

// Hàm main để sử dụng class
int main() {
    Student sv;
    sv.input();

    cout << "\n--- Student Information ---\n";
    sv.display();
    cout << "Rank: " << sv.rank() << endl;

    return 0;
}
