#include<iostream>
using namespace std;

class construct
{
public:
    int num1, num2;
    construct()
    {
        num1 = 10;
        num2 = 20;
    }
};
int main()
{
    construct obj;
    cout<< "First number is: " << obj.num1<<endl;
    cout<< "Second number is: " << obj.num2<<endl;

    return 0;
}
