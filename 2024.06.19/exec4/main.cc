#include <iostream>
#include <memory>

using namespace std;

class BB {
public:
    string b_name;
    BB(string name): b_name(name){
        cout << "BB()" << endl;
    }
    ~BB(){
        cout << "~BB()" << endl;
    }
};

class AA: public BB {
public:
    string a_name;
    AA(string name): a_name(name), BB(name){
        cout << "AA()" << endl;
    }

    ~AA(){
        cout << "~AA()" << endl;
    }
};

int main() {

    // AA *aa = new AA();
    unique_ptr<AA> up(new AA("raehowe"));
    cout << "up->a_name: " << up->a_name << endl;
    cout << "up->b_name: " << up->b_name << endl;
    return 0;
}