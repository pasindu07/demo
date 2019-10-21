#include <iostream>
using namespace std;

class newClass
{
    public:
        newClass(int x)
        {
            cout << func(x)<<endl;
        }

        int func(int num)
        {
            return num*z;
        }

    private:
        int z = 5;
};


int main()
{
    newClass dd(5);

    

    return 0;
}