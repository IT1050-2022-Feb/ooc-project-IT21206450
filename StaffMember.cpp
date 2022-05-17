#include<iostream>
#include<cstring>
#include"StaffMember.h"

using namespace std;

StaffMember::StaffMember()
{
    strcpy(staffmemberID,"");
    strcpy(staffmemberName,"");
}

StaffMember::StaffMember(const char smID[], const char smName[])
{
    strcpy(staffmemberID,smID);
    strcpy(staffmemberName,smName);
}
void StaffMember::assignBoats()
{

}
void StaffMember::generateReports()
{
    
}