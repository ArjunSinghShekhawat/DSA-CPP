#include <iostream>
using namespace std;

int main()
{

    int num;

    cout << "Enter the number :" << endl;
    cin >> num;

    int k;
    cout << "Enter kth position :" << endl;
    cin >> k;

    cout<<"Ans will be :"<<(num|(1<<k))<<endl;
    
    return 0;
}