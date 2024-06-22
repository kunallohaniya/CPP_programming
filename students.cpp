/*#include<iostream>
using namespace std;
#include "student.cpp"

int main(){
    //create objects statically
    student s1;
    student s2;

    student s3, s4, s5;
    s1.age = 24;
    s2.rollnumber = 101;

    cout << s1.age <<endl;
    cout << s2.rollNumber << endl;

    s2.age = 30;

    // create objects dynamically
    student * s6 = new student; 
}*/
/*#include <iostream>
using namespace std;

class Student {
    int rollNumber;
};

int main() {
    Student s;
    cout << s.rollNumber;
}*/
     //
/*#include <iostream>
using namespace std;

class Shape{
    public : 
    int height;
    int width;
};

int main() {
    Shape *s = new Shape();
    s -> height = 1;
    cout << s -> height;
}*/
   //
/*#include <iostream>
using namespace std;

class Box{
    public :
    int width;
    int height;
    int length;
    void volume(){
        cout << length * width * height;
    }
};

int main() {
    Box b;
    b.height = 5;
    b.width = 4;
    b.volume();
}*/
    //  CONSTRUCTOR   //
#include <iostream>
using namespace std;
#include "student.cpp";
int main(){

    student s1;  // constructor 1 called

    student s2(101);  // constructor 2 called

    student s3(30,301);  // constructor 3 called

    student s4(s3);   // copy constructor

    s1 = s2;   //  copy assignment operator

    student s5 = s4;  //  copy constructor
}
    //
/*#include<iostream>
using namespace std;

class Pair{
      public :
      int first;
      int second;
};

int main(){

      Pair p1;
      p1.first = 10;
      p1.second = 20;
      Pair p2;
      p2 = p1;
      cout << p2.first << " " << p2.second << endl;
}
*/
