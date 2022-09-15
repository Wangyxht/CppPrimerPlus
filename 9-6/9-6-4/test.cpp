//к╫сп╪лЁп
#include<iostream>
#include<valarray>
using namespace std;

typedef valarray<int> ArrayInt;

template<typename T1, typename T2>
class Pair {
private:
    T1 a;
    T2 b;
public:
    Pair() {};
    Pair(const T1& val_a, const T2& val_b);
    T1& GetFirstVal();
    T2& GetSecondVal();
    ~Pair() {};
};

typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine :private std::string, private PairArray {
private:
    int yearNum;
public:
    Wine() {};
    Wine(int yearN, string name, int* year, int* bottoms) :yearNum(yearN), string(name), PairArray(ArrayInt(year, yearN), ArrayInt(bottoms, yearN)) {};
    void Show();
    ~Wine() {};
};

template<typename T1, typename T2>
Pair<T1, T2>::Pair(const T1& val_a, const T2& val_b) {
    a = val_a;
    b = val_b;
}

template<typename T1, typename T2>
T1& Pair<T1, T2>::GetFirstVal() {
    return a;
}

template<typename T1, typename T2>
T2& Pair<T1, T2>::GetSecondVal() {
    return b;
}
void Wine::Show() {
    cout << "Wine:" << (const string&)(*this) << endl;
    cout << "      Year       Bottom" << endl;
    for (int i = 0; i < yearNum; i++) {
        cout << "     " << GetFirstVal()[i] << "      " << GetSecondVal()[i] << endl;
    }
}

int main(int argc, char* argv[]) {
    const int YRS = 3;
    int y[YRS] = { 1993,1995,1998 };
    int b[YRS] = { 48,60,72 };

    Wine holdings{ YRS,"Gushing Grape Red",y,b };
    holdings.Show();

    system("pause");
    return 0;
}