#include<iostream>
#include<cstring>

class Cow{
    private:
        char name[20];
        char* hobby;
        double weight;
    public:
        Cow();
        Cow(const char* nm,const char* hb ,double wt);
        Cow(const Cow &c);
        ~Cow();
        Cow & operator=(const Cow &c);
        void ShowCow() const;

};

//默认构造函数
Cow::Cow(){
    strcpy(name,"\0");
    hobby=nullptr;
    weight=0;
}

//构造函数
Cow::Cow(const char* nm,const char* hb ,double wt){
    strcpy(name,nm);
    hobby=new char(strlen(hb)+1);
    strcpy(hobby,hb);
    weight=wt;
}

//复制构造函数
Cow::Cow(const Cow& c){
    weight=c.weight;
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    strcpy(name,c.name);
}

//析构函数
Cow::~Cow(){
    delete[] hobby;
}
Cow& Cow::operator=(const Cow &c){
    if(this== &c){
        return *this;
    }
    
    strcpy(name,c.name);
    hobby=new char[strlen(c.hobby+1)];
    strcpy(hobby,c.hobby);
    weight=c.weight;

    return *this;
}

void Cow::ShowCow() const{
    using std::cout;
    using std::endl;

    cout<<"name:"<<name<<endl;
    cout<<"weight:"<<weight<<endl;
    cout<<"hobby:"<<hobby<<endl;
}

int main(void){
    Cow cowA("Kate","Dance",20.6);
    Cow cowB;
    cowA.ShowCow();
    cowB=cowA;
    cowB.ShowCow();

    return 0;
}