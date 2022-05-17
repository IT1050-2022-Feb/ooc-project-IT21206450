#include "Booking.h"
#include "StaffMember.h"
#include "GuestUser.h"
#include "Payment.h"
#include "RegisteredUser.h"
#include "boat.h"
#include "Boatdriver.h"
#include "Package.h"
#include "Guide.h"
#include "Service.h"
#include <iostream>

using namespace std;

int main()
{

  //Object creation
  GuestUser * r = new RegisteredUser();//object created in RegisteredUser class

  Booking * b = new Booking();//object created in Booking class

  Package * p = new Package();//object created in package class 

  Guide * g = new Guide();//object created in Guide class 

  boat * t = new Boat();//object created in Boat class
  
  Service * s = new Service();//object created in Service class

  BoatDriver * bd = new Boatdriver();//object created in Boatdriver class

  Payment * pay = new Payment(); //object created in Payment class
  
  r -> displayRegisteredUserDetails();
  b -> displayBookingDetails();
  g -> displayGuideDetails();
  t -> displayBoatDetails(); 
  s -> displayServiceDetails(); 
  p -> displayPackageDetails();
  bd-> displayBdriverDetails();
  pay->displayPaymentDetails();
  
 //delete dynamic objects
 delete r;
 delete b;
 delete g;
 delete t;
 delete p;
 delete s;
 delete bd;
 delete pay;
 
 return 0;
 }