/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
//void insert(int,int,str,str);
//void display();
using namespace std;

class student{
    public:
    int roll_no;
    int age;
    string name;
    string subjects;
void insert(int r,int a,string n,string s)
{
    roll_no=r;
    age=a;
    name=n;
    subjects=s;
}
void insert(int r,int a,string n)
{
    roll_no=r;
    age=a;
    name=n;
}
int display(){
    cout<<roll_no<<" "<<age<<" "<<name<<" "<<subjects<<endl;
}
};


int main()
{
    student s1;
    student s2;
    student s3;
    student s4;
    s1.insert(23,19,"shruti");
    s2.insert(24,19,"samya","DSA");
    s3.insert(25,19,"shreya");
    s4.insert(26,19,"aastha","ES");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    return 0;
}