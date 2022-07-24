#include<iostream>
#include<string>

typedef struct{
    std::string company;
    float diameter;
    float weight;
} pizzaInf;

int main(void)
{

    using namespace std;;
    pizzaInf* pizzaList;
    pizzaList=new pizzaInf;


    cout<<"Please input the diameter:";
    cin>>pizzaList->diameter;
    cin.get();

    cout<<"Please input the company name:";
    getline(cin,pizzaList->company);

    cout<<"Please input the weight:";
    cin>>pizzaList->weight;
    cin.get();

    cout<<"Company:"<<pizzaList->company<<endl;
    cout<<"Diameter:"<<pizzaList->diameter<<endl;
    cout<<"Weight:"<<pizzaList->weight<<endl;

    return 0;



}