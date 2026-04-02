#include <iostream>
#include <string>
using namespace std;

class PaymentStrategy
{
public:
    virtual void payment(int amount) = 0;
};

class UPIPayment: public PaymentStrategy
{ 
public:
    void payment(int amount)
    {
        cout << "UPI payment of amount "<<amount<<" is received"<<endl;
    }
};

class CreditCardPayment: public PaymentStrategy
{
public:
    void payment(int amount)
    {
        cout << "Credit card payment of amount "<<amount<<" is received"<<endl;
    }
};

class PaymentContext
{
    PaymentStrategy *strategy;
public:
    PaymentContext(PaymentStrategy *strat): strategy(strat)
    {}

    void doPayment(int amount)
    {
        strategy->payment(amount);
    }

};

int main()
{
    cout << "Strategy Design Pattern" << endl;
    PaymentContext newPayment1(new CreditCardPayment);
    newPayment1.doPayment(1200);

    PaymentContext newPayment2(new UPIPayment);
    newPayment2.doPayment(1700);
    return 0;
}