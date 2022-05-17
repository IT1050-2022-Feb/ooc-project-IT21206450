#include<iostream>
using namespace std;

class GuestUser
{
private:
	char UserID[10];
	char UserName[20];
	char UserAddress[30];
	char UserEmail[30];
	int UserContactNumber;
  char UserCountry[20];
  char UserDOB[15];
  char UserGender[5];
public:
	GuestUser();
  GuestUser(char UID[], char UName[],char UAddress[], char UEmail[], int UCNumber,char UCountry[],char UDOB[],char UGender[]);
  void BrowsePackages();
	void RegisterUser();
	~GuestUser();
};