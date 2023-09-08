#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr,int key){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(start-end)/2;

    while (start<=end)
    {
        mid = start+(end-start)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    
}
int main(){
    //Binary Search

    vector<int> arr{2,4,6,8,10,12,14,16,18,20};
    int key;

    cout<<"Enter the key element :"<<endl;
    cin>>key;
    
    cout<<"The searching element "<<key<<" present at "<<BinarySearch(arr,key)<<" index"<<" :"<<endl;
    


    return 0;
}