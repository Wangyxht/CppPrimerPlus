//理解函数模板
#include<iostream>

template<typename T>
T max5(const T* array){
    T max=array[0];
    
    for(int i=0;i<5;i++){
        if(array[i]>max){
            max=array[i];
        }
    }

    return max;
}


int main(void){
    using namespace std;    
    
    int arInt[5]={2,4,7,3,1};
    double arDouble[5]={1.2,4.3,5.4,9.3,3.5};

    int maxInt=max5(arInt);
    double maxDouble=max5(arDouble);

    cout<<maxInt<<"  "<<maxDouble<<endl;

    return 0;

}