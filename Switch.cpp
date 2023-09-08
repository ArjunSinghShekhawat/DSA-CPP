#include <iostream>
using namespace std;

int main()
{

    int num;
    cout<<"Enter choice"<<endl;
    cin>>num;

    switch (num)
    {
    case 1:
        cout << "Hellow Arjun" << endl;
        break;

    case 2:
        cout << "Kya haal chal" << endl;
        break;

    case 3:
        cout << "Kese ho" << endl;
        break;
        ;

    default:
        cout << "Btao to kya huaa" << endl;
        break;
    }
    return 0;
}