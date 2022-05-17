#include<iostream>
#include<cstring>

class Service
	{
		protected:
			  char Service_name[20];
		    char Service_id[15];
		    char Service_type[20];
		    double fee;
			
		public:
			Service();
			Service(const char sName[],const char sId[],const char sType[], int sFee);
			void updateServicedetails();
			void displayServicedetails();
			~Service();
				
	};