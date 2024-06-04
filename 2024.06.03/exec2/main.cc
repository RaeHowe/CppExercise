#include <iostream>

using namespace std;

class Student {
    friend int main();
    public:
        string s_name;
        int s_age;
        void show() {
            cout << "Name: " << s_name << endl;
            cout << "Age: " << s_age << endl;
        }
    
        void show(string addr){
            if (addr != ""){
                setAddress(addr);
            }

            cout << "Enter here!!!" << endl;
            cout << "Name: " << s_name << endl;
            cout << "Age: " << s_age << endl;
            cout << "Address: " << s_address << endl;
        }
    
        void operator+(int age){
            s_age += age;
        }
    private:
        string s_address;
        
        void setAddress(string addr) {
            s_address = addr;
        }
};

int main() {

    Student s1;
    s1.s_name = "John";
    s1.s_age = 20;
    s1.show();
    s1 + 1;
    s1.show();

    // s1.show("123 Main St");

    return 0;
}