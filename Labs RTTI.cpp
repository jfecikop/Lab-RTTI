#include <iostream>
#include <typeinfo>
using namespace std;

class Spoon {
public:
    virtual void show() {
        cout << "This is from Spoon"<<endl;
    }
};
class Fork {
public:
    virtual void show() {
        cout << "This is from Fork"<<endl;
    }
};
class Spoork : public Spoon, public Fork {
public:
    void show() {
        cout << "This is from Spoork" << endl;
    }
};


int main() {
    int j, k;
    float b;
    char z, x;

    const type_info& ti1 = typeid(j);
    const type_info& ti2 = typeid(k);
    const type_info& ti3 = typeid(b);
    const type_info& ti4 = typeid(z);
    const type_info& ti5 = typeid(x);

    cout << "Type of 'i' is: " << ti1.name() << endl;
    cout << "Type of 'l' is: " << ti2.name() << endl;
    cout << "Type of 'j' is: " << ti3.name() << endl;
    cout << "Type of 'c' is: " << ti4.name() << endl;
    cout << "Type of 'w' is: " << ti5.name() << endl;

    if (ti1.name() == ti2.name()){
        cout << "Type of j and k are the same type" << endl;
    }
    else {
        cout << "Type of j and k are not the same type" << endl;
    }
    if (ti1.name() == ti3.name()) {
        cout << "Type of j and b are the same type" << endl;
    }
    else {
        cout << "Type of j and b are not the same type" << endl;
    }    
    if (ti1.name() == ti4.name()) {
        cout << "Type of j and z are the same type" << endl;
    }
    else {
        cout << "Type of j and z are not the same type" << endl;
    }
    if (ti1.name() == ti5.name()) {
        cout << "Type of j and x are the same type" << endl;
    }
    else {
        cout << "Type of j and x are not the same type" << endl;
    }
    if (ti2.name() == ti3.name()) {
        cout << "Type of k and b are the same type" << endl;
    }
    else {
        cout << "Type of k and b are not the same type" << endl;
    }
    if (ti2.name() == ti4.name()) {
        cout << "Type of k and z are the same type" << endl;
    }
    else {
        cout << "Type of k and z are not the same type" << endl;
    }
    if (ti2.name() == ti5.name()) {
        cout << "Type of k and x are the same type" << endl;
    }
    else {
        cout << "Type of k and x are not the same type" << endl;
    }
    if (ti3.name() == ti4.name()) {
        cout << "Type of b and z are the same type" << endl;
    }
    else {
        cout << "Type of b and z are not the same type" << endl;
    }
    if (ti3.name() == ti5.name()) {
        cout << "Type of b and x are the same type" << endl;
    }
    else {
        cout << "Type of b and x are not the same type" << endl;
    }
    if (ti4.name() == ti5.name()) {
        cout << "Type of z and x are the same type" << endl;
    }
    else {
        cout << "Type of z and x are not the same type" << endl;
    }

    Spoon* a = new Spoon;
    Fork* h = new Fork;
    Spoork* c = new Spoork;
    a->show();
    h->show();
    c->show();

    a = c;
    a->show();
    h = dynamic_cast<Fork*>(a);
    h->show();

    return 0;
}