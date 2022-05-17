#include<iostream>
#include<cstring>
#include"StaffMember.h"

class StaffMember
{
private: 
    char staffmemberID[30];
    char staffmemberName[20];
public: 
    StaffMember();
    StaffMember(const char smID[], const char smName[]);
    void assignBoats();
    void generateReports();
};