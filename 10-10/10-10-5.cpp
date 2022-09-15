#include<iostream>
struct customer {
    char fullname_[50];
    double payment_;
};

class Stack{
    private:
        enum{MAX=50};
        customer data_[MAX];
        int top;
        double payment_;

    public:
        Stack();
        bool isEmpty();
        bool isFull();
        bool push(customer & data);
        bool pop(customer & data);
        void show();

};

Stack::Stack(){
    top=0;
    payment_=0;
}

bool Stack::isEmpty(){
    return top==0;
}

bool Stack::isFull(){
    return top==MAX;
}

bool Stack::push(customer & data){
    if(isFull()){
        return false;
    }
    
    else{
        data_[top++]=data;
    }

    return true;
}

bool Stack::pop(customer & data){
    if(isEmpty()){
        return false;
    }
    
    else{
        data=data_[--top];
        payment_+=data.payment_;
    }
    return true;
}

void Stack::show(){
    std::cout<<"payment:"<<payment_<<std::endl;
}

int main(void){
    Stack Stack1;
    customer data_1 ={"John",200};
    customer data_2={"Jack",50};
    customer data_3={"Kate",35};

    Stack1.push(data_1);
    Stack1.push(data_2);
    Stack1.push(data_3);

    customer deleteData;
    Stack1.pop(deleteData);
    Stack1.show();

    Stack1.pop(deleteData);
    Stack1.show();

    Stack1.pop(deleteData);
    Stack1.show();

    return 0;
}