#include<iostream>

//银行信息类
class bankData{
    private:
        std::string name_;
        std::string userName_;
        double money_;
        
    public:
        bankData();
        bankData(std::string name, std::string userName, double money);
        void Show();
        void SaveMoney(double put);
        void DrawMoney(double out);

};

//构造函数
bankData::bankData(std::string name, std::string userName, double money){
    name_=name;
    userName_=userName;
    money_=money;
}

//存款
void bankData::SaveMoney(double put){
    money_+=put;
}

//提款
void bankData::DrawMoney(double out){
    money_-=out;
}

//显示信息
void bankData::Show(){
    std::cout<<"Name:"<<name_<<std::endl;
    std::cout<<"ID:"<<userName_<<std::endl;
    std::cout<<"Money:"<<money_<<std::endl;
}

int main(void){
    bankData data1={"John","123X",2000};
    data1.Show();
    data1.SaveMoney(300);
    data1.Show();
    data1.DrawMoney(1000);
    data1.Show();
    
    return 0;
}
