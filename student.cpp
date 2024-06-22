class student{
    private:
        int rollNumber;
        int age = 10;
    public:
    student(int age, int rollNumber){
            this->rollNumber = rollNumber;
            this->age = age;
    }
    int getAge(){
        return this->age;
    }
    void setAge(int age){
        this->age = age;
    }
};