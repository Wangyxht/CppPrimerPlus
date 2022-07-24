//理解函数默认参数
#include<iostream>

void PrintStr(std::string str, const int n=1)
{
    if(n==1)
    {
        std::cout<<str<<std::endl;
        return ;
    }
    
    else if(n>1)
    {
        std::cout<<str<<std::endl;
        PrintStr(str,n-1);
    }

    return;
}

int main(void)
{
    std::string str="Hello, World!";
    PrintStr(str);
    std::cout<<"______________"<<std::endl;
    PrintStr(str,5);

    return 0;

}