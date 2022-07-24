#include<iostream>
#include<string>

int main(void)
{

    using namespace std;

    string firstName;
    string secondName;
    string out;
    char gradeLetter;
    int age;

    cout<<"What is your first name:";
    getline(cin,firstName);
    
    cout<<"What is your second name:";
    getline(cin,secondName);

    cout<<"What is your age:";
    cin>>age;
    cin.get();

    cout<<"What letter grade do you deserve:";
    cin>>gradeLetter;
    cin.get();


    out=secondName+","+" "+firstName;
    cout<<"Name:"<<out<<endl;
    cout<<"Grade:"<<gradeLetter<<endl;

    return 0;
}