#include<iostream>
using namespace std;

int dividedProblem(int divided,int divisor)
{
    int start = 0;
    int end = abs(divided/2);
    int mid = start+(end-start)/2;
    int ans = 0;

    while (start<=end)
    {
        mid = start+(end-start)/2;

        if(abs(mid*divisor)  == abs(divided))
        {
            if(divided>0 && divisor>0 || divided<0 && divisor)
            {
                return mid;
            }
            else{
                return -mid;
            }
        }
        else if(abs(mid*divisor)<abs(divided))
        {
            ans = mid;
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    if(divided>0 && divisor>0 || divided<0 && divisor<0)
    {
        return ans;
    }
    else{
        return -ans;
    }
    
}
int main()
{
    int divided;

    cout<<"Enter the divided :"<<endl;
    cin>>divided;
    
    int divisor;

    cout<<"Enter the divisor :"<<endl;
    cin>>divisor;

    if(divisor == 0)
    {
        cout<<"Infinite number...."<<endl;
        return 0;
    }

    //cout<<"ans will be :"<<dividedProblem(divided,divisor)<<endl;

    double ans = dividedProblem(divided,divisor);
    int count;

    cout<<"Enter the count :"<<endl;
    cin>>count;

    double step = 0.1;

    for(int i=0;i<count;i++)
    {
        for(double j = ans;j*divisor<=divided;j=step+j)
        {
             ans = j;
        }
        step = step/10;
    }

    cout<<"Answer will be :"<<ans<<endl;



    }