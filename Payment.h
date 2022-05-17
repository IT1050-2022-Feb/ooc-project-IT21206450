#include<iostream>
#include "Package.h"
using namespace std;

class Payment {
private:
    char PaymentID;
    char PaymentType[15];
    float PaymentAmount;

    package* Package;
public:
    Payment();
    Payment(char PID[], char PType[], float PAmount);
    bool VaidatePayment();
    void ConfirmPayment();
    void displayPaymentDetails();
    ~Payment();
};
