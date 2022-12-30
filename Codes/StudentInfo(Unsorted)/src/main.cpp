#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include "studentInfo.cpp"

using namespace std;

void isFound(bool found)
{
    if (found)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

}
void full(bool full)
{
    if (full)
       cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
}

int main()
{
    UnsortedType <StudentInfo> studentList;
    StudentInfo student;
    StudentInfo student1;
    int id;
    std::string name;
    float cgpa;
    bool infoFound;

    cout << "Enter 5 Student records: " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> id >> name >> cgpa;
        student.InsertID(id);
        student.InsertName(name);
        student.InsertCGPA(cgpa);

        studentList.InsertItem(student);
    }

    id = 12536;

    student1.InsertID(id);
    studentList.RetrieveItem(student1,infoFound);
    isFound(infoFound);
    studentList.DeleteItem(student1);

    cout << "Printing Student Records: " << endl;
    for (int i = 0; i < studentList.LengthIs(); i++)
    {
        studentList.GetNextItem(student);
        student.printInfo();
    }
    studentList.ResetList();

}
