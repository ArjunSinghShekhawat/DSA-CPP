#include <iostream>
using namespace std;

void row_wise(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << "Row wise sum :" << sum << " "<<endl;;
    }
}
void colum_wise(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
        cout << "Colum wise sum :" << sum << " "<<endl;;
    }
}
int main()
{

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

        row_wise(arr);

        cout<<endl;

        colum_wise(arr);



    return 0;
}