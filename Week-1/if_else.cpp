#include<iostream>
using namespace std;

int main(){

    int score;

    cout<<"Enter score :"<<endl;
    cin>>score;

    if (score>120){
        cout<<"India wins"<<endl;
    }
    else{
        cout<<"Pakistan wins"<<endl;
    }
    
    return 0;
}