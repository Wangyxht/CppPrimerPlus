#include<iostream>
using namespace std;
#include<cstring>

class CD{
    private:
        char performers[50];
        char label[20];
        int selections;
        double playtime;

    public:
        CD(char*s1,char*s2,int n, double x);
        CD(const CD &d);
        CD(){};
        //virtual ~CD();
        virtual void Report() const;
        CD& operator=(const CD &d);
};

class Classic:public CD{
    private:
        char content[50];
    public:
        Classic(){};
        Classic(char*s1,char*s2,int n,double x,char*s3);
        Classic(const Classic &c);
        virtual void Report() const;
        Classic& operator=(const Classic&c);
};

CD::CD(char*s1,char*s2,int n, double x){
    strcpy(performers,s1);
    strcpy(label,s2);
    selections=n;
    playtime=x;

}

CD& CD::operator=(const CD &d){
    if(this==&d){
        return *this;
    }

    strcpy(performers,d.performers);
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;

    return *this;
}

CD::CD(const CD &d){
    strcpy(performers,d.performers);
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
}

Classic::Classic(char*s1,char*s2,int n,double x,char*s3) : CD(s1,s2,n,x){
    strcpy(content,s3);
}

Classic::Classic(const Classic &c):CD(c){
    strcpy(content,c.content);
}

Classic& Classic::operator=(const Classic&c){
    if(this==&c){
        return *this;
    }
    //基类对象的赋值***
    CD::operator=(c);
    strcpy(content,c.content);
    return *this;
}

void CD::Report() const{
    cout<<"performers:"<<performers<<endl;
    cout<<"label:"<<label<<endl;
    cout<<"selections:"<<selections<<endl;
    cout<<"playtime:"<<playtime<<endl;
}

void Classic::Report() const{
    CD::Report();
    cout<<"content:"<<content<<endl;
}

void Bravo(const CD &c)
{
    c.Report();
}

int main(int argc,char *argv[]){
    CD c1 ("Beatles","Capitol",14,35.5);
    Classic c2("Alfred Brendel","Philips",2,57.17,"Piano Sonata in B flat ,Fantasia in C.");
    CD *pcd=&c1;

    cout<<"Using object directly:"<<endl;
    c1.Report();
    c2.Report();

    cout<<"Using type cd*:"<<endl;
    pcd->Report();
    pcd=&c2;
    pcd->Report();

    cout<<"Using a function:"<<endl;
    Bravo(c1);
    Bravo(c2);

    cout<<"Testing assignment:"<<endl;
    Classic copy;
    copy=c2;
    copy.Report();

    return 0;


    
}