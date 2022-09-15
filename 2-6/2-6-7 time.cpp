#include<iostream>

void PrintTime(int,int);

int main(void)
{
    using namespace std;

    int hours;
    int minutes;

    cout<<"Enter the number of hours:";
    cin>>hours;

    cout<<"Enter the number of minutes:";
    cin>>minutes;

    PrintTime(hours,minutes);

    system("pause");
    return 0;
}

void PrintTime(int hours ,int minutes)
{
    using namespace std;

    cout<<"Time:"<<hours<<":"<<minutes;
    cout<<endl;

    return ;
}