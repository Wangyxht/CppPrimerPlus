#include<iostream>

int main(void)
{
    using namespace std;
    
    double lenLong;
    double lenYard;

    cout<<"输入以long为单位的距离:";
    cin>>lenLong;

    lenYard=lenLong*220;

    cout<<lenLong<<" long 等于"<<lenYard<<"码。";
    cout<<endl;

    system("pause");
    return 0;
}