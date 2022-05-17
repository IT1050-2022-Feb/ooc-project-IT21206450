#include <iostream>
#include <cstring>
#include"Payment.h"
#define SIZE 2

class Booking {
private:
  char bookingID[10];
  char date[10];
  char time[8];
  double price;

  Payment * payment[SIZE];

public:
   Booking();

   Booking(const char bID[], const char bDate[], const char bTime[],const double bPrice);

   void editBooking();

   void cancelBooking();

   void calculateBPrice(int id, char type, float amt);

   void displayBookingDetails();

  ~Booking();
};