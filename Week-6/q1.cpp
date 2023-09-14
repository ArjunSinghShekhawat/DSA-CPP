#include <iostream>
using namespace std;

int main()
{

    int arr[] = {6, 2, 5, 3};
    int N = 4;
    int count = 0;
    int i = 0;
    int j = i + 1;

    while (j < N && i < j)
    {
        int val1 = arr[i] & arr[j];
        int val2 = arr[i] ^ arr[j];

        if (val1 > val2 && j != N - 1)
        {
            count++;
        }
        else if (val1 > val2 && j == N - 1)
        {
            i++;
            j = i + 1;
            count++;
        }
        else if (val2 > val1)
        {
            j++;
        }
        else
        {
            i++;
            j = i + 1;
        }
    }
    cout << count << endl;
}