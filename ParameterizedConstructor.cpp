#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    float cgpa;
};
void print(student s){
    cout<<s.name<<", "<<s.rollno<<", "<<s.cgpa<<" \n";
}
int main(){
    student s1;
    s1.name = "raunak singh";
    s1.rollno =219;
    s1.cgpa = 7.4;

    student s2;
    s2.rollno =025;
    s2.name = "om patel";
    s2.cgpa = 7.5;
    print (s1);
    print(s2);
}