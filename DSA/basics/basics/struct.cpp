#include<iostream>
using namespace std;
typedef struct student{
    char name[100];
    int age;
    float marks;
};

int main(){
student s1={"karthik",20,99.3};
cout<<s1.name<<endl;
cout<<s1.age<<endl;
cout<<s1.marks<<endl;


}
