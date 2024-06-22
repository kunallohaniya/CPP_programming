class student{
 static int totalStudents;

 public:
 int rollNumber;
 int age;

  student(){
  totalStudents++;
 }

  int getRollnumber(){
    return rollNumber;
  }
  static int gettotalStudent(){
    return totalStudents;
  }
};
int student :: totalStudents = 0;