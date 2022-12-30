#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

using namespace std;
class StudentInfo
{
public:
    StudentInfo();
    void InsertID(int);
    void InsertName(string);
    void InsertCGPA(float);

    int GetID();
    string GetName();
    float GetCGPA();
    void GetInfo(StudentInfo &);
    void printInfo();

private:
    int ID;
    string name;
    float CGPA;
    int length;
    int info[MAX_ITEMS];
};
#endif // STUDENTINFO_H_INCLUDED
