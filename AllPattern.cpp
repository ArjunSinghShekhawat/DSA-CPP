#include <iostream>
using namespace std;

// squre pattern
void squre()
{
    int num;
    cout << "Enter Number :" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
// hallow_squre pattern
void hallow_squre()
{

    int num;
    cout << "Enter Number :" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == 0 || j == 0 || i == (num - 1) || j == (num - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
// rectangular pattern
void rectangular()
{

    int row, col;
    cout << "Enter row and coloum:" << endl;
    cin >> row >> col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
// hallow_rectangular pattern
void hallow_rectangular()
{
    int row, col;
    cout << "Enter row and coloum:" << endl;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || i == (row - 1) || j == (col - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
// left triangular pattern
void left_triangular()
{
    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
// right triangular pattern
void right_triangular()
{

    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int space = 0; space < (num - i - 1); space++)
        {
            cout << " ";
        }
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
// inverted left triangular
void inverted_left_triangular()
{

    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (num - i); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
// inverted right triangular
void inverted_right_triangular()

{

    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int space = 0; space < (i); space++)
        {
            cout << " ";
        }
        for (int j = 0; j < (num - i); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
// butterFly pattern
void butter_fly()
{
    int num;
    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        // first triangle
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int space = 0; space < (2 * (num - i) - 2); space++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // bottom
    for (int i = 0; i < num; i++)
    {
        // first
        for (int j = 0; j < (num - i); j++)
        {
            cout << "*";
        }
        // space
        for (int space = 0; space < (2 * i); space++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (num - i); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}
// full pyramid
void full_pyramid()
{

    int num;
    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        // space
        for (int space = 0; space < (num - i - 1); space++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
// inverted full pyramid
void inverted_full_pyramid()
{

    int num;
    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        // space
        for (int space = 0; space < (i); space++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (num - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
}
// hallow full pyramid
void hallow_full_pyramid()
{
    int num;
    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        // space
        for (int space = 0; space < (num - i - 1); space++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (i + 1); j++)
        {
            if (j == 0 || i == (num - 1) || j == (i))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
// hallow inverted full pyramid
void inverted_hallow_full_pyramid()
{
    int num;
    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        // space
        for (int space = 0; space < (i); space++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (num - i); j++)
        {
            if (i == 0 || j == 0 || j == (num - i - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
// hallow left triangle
void hallow_left_triangle()
{
    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            if (j == 0 || j == (i) || i == (num - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
// inverted hallow left triangle
void inverted_hallow_inverse_half_triangle()
{
    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (num - i); j++)
        {
            if (i == 0 || j == 0 || j == (num - i - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
// numric triangle
void numeric_triangle_left_side()
{
    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}
// numeric counting triangular left side
void numeric_triangle_counting()
{
    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    int count = 1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (i + 1); j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    cout << endl;
}
// numeric and after reverse triangle
void numeric_revese_counting()
{
    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int j;
        for (j = 0; j < (i + 1); j++)
        {
            cout << j + 1 << " ";
        }
        j = j - 1;

        for (; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}
// katli pattern
void katli_pattern()
{
    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        // space
        for (int space = 0; space < (num - i - 1); space++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (i + 1); j++)
        {
            if (j == 0 || j == (i))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    // bottom
    for (int i = 0; i < num; i++)
    {
        // space
        for (int space = 0; space < (i); space++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (num - i); j++)
        {
            if (j == 0 || j == (num - i - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    squre();
    hallow_squre();
    rectangular();
    hallow_rectangular();
    left_triangular();
    right_triangular();
    inverted_left_triangular();
    inverted_right_triangular();
    butter_fly();
    full_pyramid();
    inverted_full_pyramid();
    hallow_full_pyramid();
    inverted_hallow_full_pyramid();
    hallow_left_triangle();
    inverted_hallow_inverse_half_triangle();
    numeric_triangle_left_side();
    numeric_triangle_counting();
    numeric_revese_counting();
    katli_pattern();

    return 0;
}