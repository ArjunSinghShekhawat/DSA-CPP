#include <iostream>
using namespace std;

char getGrade(int marks)
{
    if (marks > 90)
    {
        return 'A';
    }
    else if (marks > 80 && marks <= 90)
    {
        return 'B';
    }
    else if (marks > 70 && marks <= 80)
    {
        return 'C';
    }
    else if (marks > 60 && marks <= 70)
    {
        return 'D';
    }
    else if (marks > 50 && marks <= 60)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}
int main()
{

    int marks;
    cout << "Enter the marks :" << endl;
    cin >> marks;

    cout << "Student Grade will be :" << getGrade(marks) << endl;

    // for (int i = 0; i <= 100; i++)
    // {
    //     cout << "Student marks " << i << " Then grade will be :" << getGrade(i) << endl;
    // }

    return 0;
}