#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string fullName;
        string studentId;
        float gpa;

        public:

        Student(){
            fullName = "";
            studentId = "";
            gpa = 0.0;
        }

        Student(string id,string name, float gpa){
            studentId = id;
            fullName = name;
            this->gpa = gpa;
        }

        void showInfo(){
            cout << "Student ID: "<< studentId << endl;
            cout << "Full Name: "<< fullName << endl;
            cout << "GPA: "<< gpa << endl;
        }

};
int main() {
    Student student1("123", "John Doe", 3.5);
    student1.showInfo();

    Student student2("124","Minh Nguyen", 3.8);
    student2.showInfo();
    return 0;
}
