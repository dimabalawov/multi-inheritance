

#include <iostream>
#include <vector>
using namespace std;

class Human
{
protected:
    string name;
    int age;
public:
    Human() = default;
    Human(string n, int a)
    {
        name = n;
        age = a;
    }
    void Show()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class University
{
protected:
    string uniname;
    string adress;
    string facul;
public:
    University() = default;
    University(string un, string ad, string f)
    {
        uniname = un;
        adress = ad;
        facul = f;
    }
    void Show()
    {
        cout << "University: " << uniname << endl;
        cout << "Adress of University: " << adress << endl;
        cout << "Faculty: " << facul << endl;
    }
};

class Student:public Human,public University
{
    string group;
    vector<int>grades;
public:
    Student() = default;
    Student(string n, int a, string un, string ad, string f, string gr, vector<int> gra):Human(n,a),University(un,ad,f)
    {
        group = gr;
        grades = gra;
    }
    void Show()
    {
        Human::Show();
        University::Show();
        cout << "Group: " << group << endl;
        cout << "Grades: ";
        for (size_t i = 0; i < grades.size(); i++)
        {
            cout << grades[i] << ' ';
        }
        cout << endl;
    }
}; 

int main()
{
    vector<int> grades = { 10,6,4,9,12 };
    Student a("Dmitro", 18, "Step", "Sadovaya 3", "Comp.science", "KNP221", grades);
    a.Show();
}

