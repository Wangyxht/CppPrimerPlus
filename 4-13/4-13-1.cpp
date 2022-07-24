#include<iostream>
#include<string>

int main(void)
{

    using namespace std;

    string firstName;
    string secondName;
    string out;
    int age;

    char gradeLetter;

    cout<<"What letter grade do you deserve:";


    cin>>gradeLetter;
    cin.get();


    out=secondName+","+" "+firstName;
    cout<<"Name:"<<out<<endl;
    cout<<"Grade:"<<gradeLetter<<endl;
    cout<<"Age:"<<age<<endl;


    return 0;
}