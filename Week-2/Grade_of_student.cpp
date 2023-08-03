#include <iostream>
using namespace std;

char Grade(int marks)
{

    if (marks >= 90)
    {
        return 'A';
    }
    else if (marks >= 80 && marks < 90)
    {
        return 'B';
    }
    else if (marks >= 70 && marks < 80)
    {
        return 'C';
    }
    else if (marks >= 60 && marks < 70)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}
int main()
{

    int marks;

    cout << "Enter marks :" << endl;
    cin >> marks;

    cout << "Student Grade will be marks:" << marks << " Grade :" << Grade(marks) << endl;

    return 0;
}