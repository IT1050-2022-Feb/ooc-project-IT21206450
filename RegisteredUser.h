#include<iostream>
#include <cstring>
#include "GuestUser.h"

class RegisteredUser :public GuestUser
{
   protected:
     char userName[20];
     char password[10];

   public:
     RegisteredUser();

     RegisteredUser(const char rUsername[], const char rPassword[],  char rAddress[], char rEmail[], int rNumber,char rCountry[],char rDOB[],char rGender[]);

     char getUserName();

     char getPassword(); 

     void serachPackages();

     void searchServices();

     void bookPackage(); 

     void makePayment();

     void updateUserDetails();

     void displayRegisteredUserDetails();

    ~RegisteredUser();
};
