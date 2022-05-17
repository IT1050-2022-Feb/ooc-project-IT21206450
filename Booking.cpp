#include <iostream>
#include <cstring>
#include "Booking.h"
#include"Payment.h"

using namespace std;

Booking::Booking()
{
   strcpy(bookingID, "");
   strcpy(date, "");
   strcpy(time, "");
   price = 0;

}

Booking::Booking(const char bID[], const char bDate[], const char bTime[], const double bPrice )
{
   strcpy(bookingID,bID);
   strcpy(date,bDate);
   strcpy(time,bTime);
   price = bPrice;
  
}

void Booking::editBooking()
{
  
}

void Booking::cancelBooking()
{
  
}

void Booking::calculateBPrice(int id, char type, float amt)
{
  int count = 0;
  if(count < SIZE)
  {
    payment[count] = new payment(id, type, amt);
    count++;
  }
}

void Booking::displayBookingDetails()
{
  
}

Booking::~Booking()//Destructor
{
  for(int i=0; i< SIZE; i++)
    {
      delete payment;
    }
}