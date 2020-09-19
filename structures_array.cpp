#include<iostream>
#include<string>
using namespace std;

struct Person{
    string name;
    int age;
    double salary;
};

int main()
{
    Person p[2];
    cout << "Enter person details like name,age,salary" << endl;
    for(int i=0;i<2;i++)
    {
        cin >> p[i].name;
        cin >> p[i].age;
        cin >> p[i].salary;
    }
    cout << "Details of users " << endl;
    for(int i=0;i<2;i++)
    {
        cout << "Details of person:- " << (i+1)<< endl;
        cout << "name:- " << p[i].name << endl;
        cout << "age:- " << p[i].age << endl;
        cout << "salary:- " << p[i].salary << endl;
    }

    return 0;
}
