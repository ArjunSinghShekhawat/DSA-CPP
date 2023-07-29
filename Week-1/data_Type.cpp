#include<iostream>
using namespace std;

int main(){

    int a;

    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    
    cout<<"Size of int will be :"<<sizeof(a)<<endl;

    cout<<"The value of a is "<<a<<endl;

    char ch = 'U';
    cout<<"The value of ch is "<<ch<<endl;
    cout<<"Size of ch will be :"<<sizeof(ch)<<endl;

    bool isPrime = true;
    cout<<"The value of isprime is "<<isPrime<<endl;
    cout<<"Size of bool will be :"<<sizeof(isPrime)<<endl;


    float marks = 98.4312;
    cout<<"The value of marks is "<<marks<<endl;
    cout<<"Size of float will be :"<<sizeof(marks)<<endl;

    double data = 98.876546;
    cout<<"The value of data is "<<data<<endl;
    cout<<"Size of double will be :"<<sizeof(data)<<endl;


    long long value = 98767898764437;
    cout<<"The value of value is "<<value<<endl;
    cout<<"Size of long long will be :"<<sizeof(value)<<endl;


    cout<<"Size of long will be :"<<sizeof(a)<<endl;

    short num = 10;
    cout<<"The value of num is :"<<num<<endl;
    cout<<"Size of short will be :"<<sizeof(num)<<endl;





    return 0;
}