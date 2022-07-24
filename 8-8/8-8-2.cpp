//结构的引用
#include<iostream>

struct CandyBar{
    std::string brand;
    double weight;
    int cal;
};

void ShowCandyInf(const CandyBar &CandyList){
    using namespace std;
    cout<<"Brand:"<<CandyList.brand<<endl;
    cout<<"Weight:"<<CandyList.weight<<endl;
    cout<<"Calories:"<<CandyList.cal<<endl;
}

void InputCandyInf(CandyBar &CandyList,const char* brandName,const double weight ,const int cal){
    CandyList.brand=brandName;
    CandyList.cal=cal;
    CandyList.weight=weight;
}

int main(void){
     char brandName[20]="Millennium Munch";
    float weight=2.85;
    int cal=350;
    CandyBar candyList;

    InputCandyInf(candyList,brandName,weight,cal);
    ShowCandyInf(candyList);

    return 0;
}