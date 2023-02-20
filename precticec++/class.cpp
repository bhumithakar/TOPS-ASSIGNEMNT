#include<iostream>
using namespace std;
class calculation
{
    public: //after public colon colon colon
    int a, b, answer;
    void getdata()
    {
        cout << "enter number: ";
        cin >> a >> b;
    }
    void putdata()
    {
        answer = a + b;
        cout << "answer=" << answer << endl;
    }
};

int main()
{
    calculation ob1, ob2, ob3;
    ob1.getdata();
    ob1.putdata();
    ob2.a = 85;
    ob2.b = 35;
    ob2.putdata();
    return 0;
}
