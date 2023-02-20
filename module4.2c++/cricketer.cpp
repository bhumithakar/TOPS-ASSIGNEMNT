/*
Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/

#include <iostream>
using namespace std;

class cricket
{
protected:
    int run;
    int metch;
    int performance;

public:
    void getdata(int run, int metch, int performance)
    {
        this->run = run;
        this->metch = metch;
        this->performance = performance;
    }
};
class betsmen : public cricket
{
public:
    void showdata()
    {
        cout << "Total run is " << run << endl;
        cout << "Total metch is " << metch << endl;
        cout << "Average run is " << (float)run / (float)performance << endl;
        cout << "Overall performance is " << performance << endl;
    }
};
int main()
{
    int a;
    int b;
    int c;
    cout << "Enter Total run: ";
    cin >> a;
    cout << "Enter Total metch: ";
    cin >> b;
    cout << "Enter Overall best performance: ";
    cin >> c;

    betsmen b1;
    b1.getdata(a, b, c);
    b1.showdata();
    return 0;
}