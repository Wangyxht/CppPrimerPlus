/*理解重载运算符*/


#include<iostream>
using namespace std;
class ComplexNum{
    private:

        //实部
        double realNum_;
        //虚部
        double imaginaryNum_;
    public:
        ComplexNum();
        ComplexNum(double realNum,double imaginaryNum);
        ComplexNum operator+(const ComplexNum &CpNum);
        ComplexNum operator-(const ComplexNum &CpNum);
        ComplexNum operator*(const ComplexNum &CpNum);
        ComplexNum operator~();
        //友元函数
        friend ComplexNum operator*(const double num,const ComplexNum &CpNum);
        friend void operator<<(ostream &os,const ComplexNum &CpNum);
        friend void operator>>(istream &input,ComplexNum &CpNum);
};

ComplexNum::ComplexNum(){
    realNum_=0;
    imaginaryNum_=0;
}

ComplexNum::ComplexNum(double realNum,double imaginaryNum){
    realNum_=realNum;
    imaginaryNum_=imaginaryNum;
}


ComplexNum ComplexNum::operator+(const ComplexNum &CpNumA){
    return ComplexNum(realNum_+CpNumA.realNum_,imaginaryNum_+CpNumA.imaginaryNum_);
}

ComplexNum ComplexNum::operator-(const ComplexNum &CpNumA){
    return ComplexNum(realNum_-CpNumA.realNum_,imaginaryNum_-CpNumA.imaginaryNum_);
}
ComplexNum ComplexNum::operator*(const ComplexNum &CpNumA){
    return ComplexNum(realNum_*CpNumA.realNum_-imaginaryNum_*CpNumA.imaginaryNum_,
    realNum_*CpNumA.imaginaryNum_+imaginaryNum_*CpNumA.realNum_);
}

ComplexNum ComplexNum::operator~(){
    return ComplexNum(realNum_,-imaginaryNum_);
}

ComplexNum operator*(const double num,const ComplexNum &CpNumA){
    return ComplexNum(num*CpNumA.realNum_ ,num*CpNumA.imaginaryNum_);
}



//重载<< >>运算符
void operator<<(ostream &os,const ComplexNum &CpNum){
    if(CpNum.imaginaryNum_>=0){
        os<<CpNum.realNum_<<"+"<<CpNum.imaginaryNum_<<"i";
    }
    if(CpNum.imaginaryNum_<0){
        os<<CpNum.realNum_<<CpNum.imaginaryNum_<<"i";
    }

}

void operator>>(istream &input, ComplexNum &CpNum){
    char sign;
    char I;
    input>>CpNum.realNum_>>sign>>CpNum.imaginaryNum_>>I;
    if(sign=='-'){
        CpNum.imaginaryNum_=-CpNum.imaginaryNum_;
    }
}

int main(void){
    ComplexNum CpNumA (3.0,4.0);
    ComplexNum CpNumB;
    cin>>CpNumB;
    cout<<"A="<<CpNumA;
    cout<<endl;
    cout<<"B="<<CpNumB;
    cout<<endl;
    cout<<"A+B="<<CpNumA+CpNumB;
    cout<<endl;
    cout<<"A-B="<<CpNumA-CpNumB;
    cout<<endl;
    cout<<"A*B="<<CpNumA*CpNumB;
    cout<<endl;
    cout<<"2*B="<<2*CpNumB;



    return 0;
}