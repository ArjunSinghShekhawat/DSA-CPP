#include<iostream>
using namespace std;

int main(){

    int num;
    bool isPrime = true;

    cout<<"Enter number :"<<endl;
    cin>>num;

    if(num<=1){
        isPrime = false;
    }
    else{
        for(int i=2;i<num;i++){
            
            if(num%i==0){
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime){
        cout<<"Prime Number :"<<endl;
    }
    else{
        cout<<"Not Prime Number :"<<endl;
    }

    return 0;
}