#include<iostream>
#include "Package.h"
using namespace std;

Package::Package()
{
    strcpy(packageID,"");
    strcpy(packagetype,"");
}
Package::Package(const char pID[], const char type[])
{
    strcpy(packageID,pID);
    strcpy(packagetype,type);
}
void Package::displayPackageDetails()
{

}