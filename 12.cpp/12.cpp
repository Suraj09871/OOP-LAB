#include<iostream>
using namespace std;
template< class T>
class Test{
    private:
    T ans;
    public:
    Test(T n):ans(n){
        cout<<"Inside constructor"<<endl;
    }
    T getNumber(){
        return ans;
    }
    };
    int main()
    {
        Test<int> numInt(50);
        Test<double>numDouble(125);
        cout<<"Integer number is:"<<numInt.getNumber()<<endl;
        cout<<"Double number is:"<<numDouble.getNumber()<<endl;
        return 0;
    }