#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{4,3,2,7,8,2,3,1};
    vector<int> ans;


     for(int i=0;i<arr.size();i++){
        int index = abs(arr[i]);

        if(arr[index-1]<0){
          ans.push_back(index);
        }
        arr[index-1]*=-1;
     }
     
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             ans.push_back(arr[i]);
    //         }
    //     }
    // }

    cout << "Dispaly the duplicate element :" << endl;
    for (auto value : ans)
    {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}