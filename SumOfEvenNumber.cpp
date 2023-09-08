#include <iostream>
using namespace std;

int sumEvenNumber(int num)
{
    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{

    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    int sum = sumEvenNumber(num);

    cout << "The sum of " << num << " will be :" << sum << endl;
    return 0;
}