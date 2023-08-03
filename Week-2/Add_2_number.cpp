#include<iostream>
using namespace std;


int add(int a,int b){
    int sum = a+b;
    return sum;
}
int main(){

    int a,b;
    cout<<"Enter the number a and b"<<endl;
    cin>>a>>b;

    cout<<"The sum of a and b"<<add(a,b)<<endl;


}