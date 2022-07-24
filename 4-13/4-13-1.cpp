#include<iostream>
#include<string>

int main(void)
{

    using namespace std;

    string firstName;
    string secondName;
    string out;
<<<<<<< HEAD
    char gradeLetter;
=======
    char gardeLetter;
>>>>>>> 966fec70791bc293be803247f72d5b4a09cfb58d
    int age;

    cout<<"What is your first name:";
    getline(cin,firstName);
    
    cout<<"What is your second name:";
    getline(cin,secondName);

    cout<<"What is your age:";
    cin>>age;
    cin.get();

    cout<<"What letter grade do you deserve:";
<<<<<<< HEAD
    cin>>gradeLetter;
    cin.get();

    gradeLetter+=1;

    out=secondName+","+" "+firstName;
    cout<<"Name:"<<out<<endl;
    cout<<"Grade:"<<gradeLetter<<endl;
=======
    cin>>gardeLetter;
    cin.get();

    gardeLetter+=1;

    out=secondName+","+" "+firstName;
    cout<<"Name:"<<out<<endl;
    cout<<"Grade:"<<gardeLetter<<endl;
>>>>>>> 966fec70791bc293be803247f72d5b4a09cfb58d
    cout<<"Age:"<<age<<endl;

    return 0;
    
}