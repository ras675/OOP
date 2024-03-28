#include<iostream>
using namespace std;
class RationalNumber
{
private:
   int numerator;
   int denominator;
public:
    void assign(int num,int dem)
    {
        if(dem==0)
        {
            cout<<"Undefined expression"<<endl;
            return ;
        }

        numerator=num;
        denominator=dem;
    }

    double convert()
    {
        double nume=numerator;
        double deno=denominator;
        double convart=nume/deno;
        return convart;
    }
    void invert()
    {
        if(numerator==0)
        {
            cout<<"Undefined expression"<<endl;
            return ;
        }

        int temp=denominator;
        denominator=numerator;
        numerator=temp;
    }
    void print()
    {
        cout<<"The Rational Number is "<<numerator<<"/"<<denominator<<endl;
    }

};


int main()
{
    RationalNumber obj1;
    obj1.assign(3,4);
    obj1.convert();
    double ans=obj1.convert();
    cout<<ans<<endl;
    obj1.print();

}
