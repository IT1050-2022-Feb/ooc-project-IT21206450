#include<iostream>
#include"guide.h”

Class guide
{
  Private:
  char fname[50]; 
  char lname[50];
  int guide_id;
  string password[20];
  char NIC_no[12];
  char gender [6];
  string gDOB;
  string home_addr[200];

   Public:
     guide();

    guide(char gfname[], char glname[], string pw[], char NIC[], string DOB, string hAddr[] 
    ,string gen[]);
    char getName();
    string getDOB();
    char getGender();
    char getAddress();
    void updateAvailabilityDetails();
    void acceptTours();
    void declineTours();
    void checkedConfirmedTours();
    void displayGuideDetails();
    ~guide();
};