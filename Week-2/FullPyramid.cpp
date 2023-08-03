#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter the number :"<<endl;
    cin>>num;

    for(int i=0;i<num;i++){
        for(int space=0;space<(num-i-1);space++){
            cout<<" ";
        }
        for(int j=0;j<(i+1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}