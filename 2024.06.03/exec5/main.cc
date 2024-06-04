#include <iostream>

using namespace std;

class School {
protected:
    string s_moneys;
    void SetMoney(string money) {
        s_moneys = money;
    }
public:
    string s_subject;
    string s_class;
    School(string subject, string class_name): s_subject(subject), s_class(class_name) {
        
    }

};

class Student: protected School {
public:
    string t_name;
    int t_age;
    Student(string name, int age) {
        t_name = name;
        t_age = age;
    }

    void ShowInfo() {   
        cout << "Name: " << t_name << endl;
        cout << "Age: " << t_age << endl;
        cout << "Money: " << s_moneys << endl;
    }
};

int main() {

    Student s("John", 18);
    s.SetMoney("2000");
    s.ShowInfo();

    return 0;
}