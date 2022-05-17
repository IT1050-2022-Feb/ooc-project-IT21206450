#include<iostream>
#include"boatdriver.h"

Class boatdriver
{
  Private:
  char fname[50]; 
  char lname[50];
  int bDriver_id;
  string password[20];
  char NIC_no[12];
  string gDOB;
  string home_address[200];

   Public:
      boatdriver();

    boatdriver( char dfname[], char dlname[] ,string PSW[], char NIC[],string DOB[], string addr[]);
      char getName();
      string getdDOB();
      char getNIC();
      char getAddress();
      void provideDriverDetails();
      void updateDriverDetails();
      void editDriverDetails();
      void updateAvailabilitySlots();
      void displayBdriverDetails();
};
