#include<iostream>
#include<cctype>

void ToUpperString(std::string &str){
    for(int i=0;str[i]!='\0';i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
    }
}

int main(void){

    using namespace std;

    while(true){

        cout<<"Enter a string (q to quit):";
        string str;
        getline(cin,str);

        if(str=="q"){
            exit(0);
        }
        else{
            ToUpperString(str);
            cout<<str<<endl;
        }
    }

    return 0;
}