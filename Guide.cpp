#include<iostream>
#include "guide.h"
#include<cstring>
using namespace std;

guide::guide(){

  strcpy(fname, "");
  strcpy(lname,"");
  guide_id = 0;
  strcpy(password,"");
  strcpy(NIC_no,"");
  strcpy(gender,"");
  strcpy(gDOB, "");
  strcpy(home_addr, "");
  
}

guide::guide(char gfname[], char glname[], string pw[], char NIC[], string DOB, string hAddr[] ,string gen[]);{
  
strcpy(fname,gfname);
strcpy(lname,glname);
strcpy(password,pw);
strcpy(NIC_no,NIC);
strcpy(gDOB, DOB);
strcpy(home_addr, hAddr);
strcpy(gender,gen);

}

char getName()
{

}
string getDOB()
{

}
char guide::getGender()
{

}
char guide::getAddress()
{

}

void guide::updateAvailabilityDetails()
{

}
void guide::acceptTours()
{

}
void guide::declineTours()
{

}
void guide::checkedConfirmedTours()
{

}
void guide::displayGuideDetails()
{

}

guide::~guide()
{

}