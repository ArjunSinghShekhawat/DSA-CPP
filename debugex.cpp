#include<iostream>
using namespace std;

int ceilIndex(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int ceil = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target){
            ceil=mid;
            left = mid + 1;
        }
        else{
           
            right = mid - 1;
        }
    }

    return ceil;
}
int main(){
    int arr[] = {2,4,6,8,10};
    int size =   5;
    int target = 8;

    cout<<ceilIndex(arr,size,target)<<endl;

}