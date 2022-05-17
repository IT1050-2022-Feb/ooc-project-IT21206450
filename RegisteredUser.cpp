#include<iostream>
#include <cstring>
#include "GuestUser.h"
#include "RegisteredUser.h"

RegisteredUser::RegisteredUser()//Default constructor
{
  strcpy(userName, "");
  strcpy(password,"");
}
//overloaded constructor
RegisteredUser::RegisteredUser(const char rUsername[], const char rPassword[],  char rAddress[], char rEmail[], int rNumber,char rCountry[],char rDOB[],char rGender[])
{
  strcpy(userName,rUsername);
  strcpy(password, rPassword);
}

char RegisteredUser::getUserName()
{
  
}

char RegisteredUser::getPassword()
{
  
}

void RegisteredUser::serachPackages()
{
  
}

void RegisteredUser::searchServices()
{
  
}

void RegisteredUser::bookPackage()
{
  
}

void RegisteredUser::makePayment()
{
  
}

void RegisteredUser::updateUserDetails()
{
  
}

void RegisteredUser::displayRegisteredUserDetails()
{
  
}

RegisteredUser::~RegisteredUser()//Destructor
{
  
}