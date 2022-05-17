#include <iostream>
#include <cstring>
#include "Payment.h"
#include "Package.h"

using namespace std;

Payment::Payment() {
  strcpy(PaymentID,"");
  strcpy(PaymentType, "");
  PaymentAmount = 0;
}

Payment(char PID[], char PType[], float PAmount) {
  strcpy(PaymentID,PID);
  strcpy(PaymentType, PType);
  PaymentAmount = PAmount;
}

bool Payment::VaidatePayment() {
}

void Payment::ConfirmPayment() {
}

void Payment::displayPaymentDetails(){
  
}
Payment::~Payment() {
  cout << "Payment Deleted" << endl;
}