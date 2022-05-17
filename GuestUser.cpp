#include<iostream>
#include <cstring>
#include "GuestUser.h"

using namespace std;

GuestUser::GuestUser(){
  strcpy(UserID,"");
  strcpy(UserName,"");
  strcpy(UserAddress,"");
  strcpy(UserEmail,"");
  UserContactNumber = 0000000000;
  strcpy(UserCountry,"");
  strcpy(UserDOB,"");
  strcpy(UserGender,"");
}

GuestUser::GuestUser(char UID[], char UName[],char UAddress[], char UEmail[], int UCNumber,char UCountry[],char UDOB[],char UGender[]){
  strcpy(UserID,UID);
  strcpy(UserName,UName);
  strcpy(UserAddress,UAddress);
  strcpy(UserEmail,UEmail);
  UserContactNumber = UCNumber;
  strcpy(UserCountry,UCountry);
  strcpy(UserDOB,UDOB);
  strcpy(UserGender,UGender);
}

void GuestUser::BrowsePackages(){
}

void GuestUser::RegisterUser(){
}

GuestUser::~GuestUser(){
  cout << "Guest User Deleted" << endl;
}