#include<iostream>
#include<cstring>
#include"Service.h"

#define SIZE 10

using namespace std;

class Package
{
private:
    char packageID[10];
    char packagetype[20];

    Service *service[SIZE];
public:
    Package();
    Package(const char pID[], const char type[]);
    void displayPackageDetails();
};