#include<iostream>
#define LIST_SIZE 3

typedef struct{
    std::string company;
    float weight;
    float cal;
} Candy;

int main(void)
{
    using namespace std;
    Candy* candyList= new Candy [LIST_SIZE];

    for(int i=0;i<LIST_SIZE;i++)
    {
        cout<<"________"<<"List "<<i<<"________"<<endl;
        cout<<"Please enter the company name:";
        getline(cin,candyList[i].company);

        cout<<"Please enter the weight:";
        cin>>candyList[i].weight;
        cin.get();

        cout<<"Please enter the Calories:";
        cin>>candyList[i].cal;
        cin.get();

    }

    for(int i=0;i<LIST_SIZE;i++)
    {
        cout<<"________"<<"List "<<i<<"________"<<endl;
        cout<<"Company:"<<candyList[i].company<<endl;
        cout<<"Weight:"<<candyList[i].weight<<endl;
        cout<<"Calories:"<<candyList[i].cal<<endl;
    }

    return 0;
}