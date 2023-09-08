#include<iostream>
using namespace std;

int main(){

    int num = 12;

    cout<<"The value of a is :"<<num<<endl;
    cout<<"The size of int is :"<<sizeof(num)<<endl;

    char ch = 'A';

    cout<<"The value of ch is :"<<ch<<endl;
    cout<<"The size of char is :"<<sizeof(ch)<<endl;

    float marks = 98.78;

    cout<<"The value of marks :"<<marks<<endl;
    cout<<"The sizeof float is :"<<sizeof(marks)<<endl;


    double height = 171.897655;

    cout<<"The value of height is :"<<height<<endl;
    cout<<"The size of double is :"<<sizeof(height)<<endl;


    bool isPrime = true;

    cout<<"The value is isPrime is :"<<isPrime<<endl;
    cout<<"The sizeof bool is :"<<sizeof(isPrime)<<endl;


    long long data = 1234345;

    cout<<"The value of data is :"<<data<<endl;
    cout<<"The sizeof long long is :"<<sizeof(data)<<endl;


    short value = 32;

    cout<<"The value of value is :"<<value<<endl;
    cout<<"The sizeof short is :"<<sizeof(value)<<endl;

    return 0;
}