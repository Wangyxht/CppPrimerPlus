#include<iostream>
#include<array>

int main(void)
{

    using namespace std;
    array<double,3> score;
    int count=0;

    for(int i=0;i<3;i++)
    {
        cout<<"Please enter the score"<<i+1<<':';
        cin>>score[i];
        count++;
    }


    double average,sum=0;
    for(int i=0;i<3;i++)
    {
        sum+=score[i];
    }
    average=sum/3;

    cout<<"Count:"<<count<<endl;
    cout<<"Average:"<<average<<endl;

    return 0;
    
}