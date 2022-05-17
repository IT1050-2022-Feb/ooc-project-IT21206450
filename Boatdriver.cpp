#include<iostream>
#include "boatdriver.h"
#include<cstring>
using namespace std;

boatdriver::boatdriver(){

  strcpy(fname, "");
  strcpy(lname,"");
  bDriver_id = 0;
  strcpy(password,"");
  strcpy(NIC_no,"");
  strcpy(dDOB, "");
  strcpy(home_address, "");
  
}

boatdriver::boatdriver(char dfname[], char dlname[], string pw[], char NIC[], string DOB, string hAddr[] ){
  
strcpy(fname,dfname);
strcpy(lname,dlname);
strcpy(password,pw);
strcpy(NIC_no,NIC);
strcpy(dDOB, DOB);
strcpy(home_address, hAddr);

}

char getName()
{

}
string getDOB()
{

}
string getNIC()
{
  
}
char boatdriver::getAddress()
{

}

void boatdriver::providedriverDetailsDetails()
{

}
void boatdriver::updatedriverdetails()
{

}
void boatdriver::editDriverDetails()
{

}
void boatdriver::updateAvailabilitySlots()
{

}
void boatdriver::displayBdriverDetails()
{

}

boatdriver::~boatdriver()
{

}