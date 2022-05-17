#include "Service.h"
#include<cstring>

using namespace std;
Service::Service()
{
	strcpy(Service_name,"");
	strcpy(Service_id,"");
	strcpy(Service_type,"");
	fee = 0;
	
}

void Service::setDetails(char sName[], char sId[], char sType[], double sFee) 

{
	strcpy(Service_name, sName);
	strcpy(Service_id, sId);
	strcpy(Service_type, sType);
	fee = sFee;
}

void Service::displayServicedetails()
{
	
}

void Service::updateServicedetails()
{
		
}

Service::~Service()
{
	
}

