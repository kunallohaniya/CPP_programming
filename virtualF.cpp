#include<iostream>
using namespace std;
class base {
    public :
    virtual void print ()
    {
        cout <<"print base class " << endl;
    }
    void show () 
    {
        cout << "show base class " << endl;
    }
};
class derived : public base {
    public :
    void print ()
    {
        cout <<"print derived class " << endl;
    }
    void show () 
    {
        cout << "show derived class " << endl;
    }
};
int main() {
    base *bptr;
    derived d;
    bptr = &d;
    // virtual function binded at run time
    bptr -> print();

    // non-vertual function binded at compile time 
    bptr -> show();
    return 0;
}
