#include <iostream>
#include <string.h>
using namespace std;
class Doctor
{
	private:
		char dname[50];
		char area[50];
	public:
		void GetDoctor()
		{
			cout<<"\nEnter the Doctor's Name:"<<endl;
			cin>>dname;
			cout<<"\nEnter the area:"<<endl;
			cin>>area;
		}
		
		int operator < (Doctor d2)
		{
			Doctor d3;
			
			if (strcmp(area ,d2.area) < 0)
			{
			
			return 1;
			}
			else 
			{
			
				return 0;
			
			}
	
			
			
		}
		
		void ShowDoctor()
		{
			cout<<"\nDoctor's Name:\t"<<dname<<endl;
			cout<<"\nArea:\t"<<area<<endl;
		}
};
int main()
{
	Doctor d[5];
	Doctor d3[5], d4;
	int i,j,k=0;
	for(i=0;i<5;i++)
	{
		cout<<"\nEnter Doctor's Name and Area:";
		d[i].GetDoctor();
		
		
	}
	
for ( i = 0; i < 5 ; i++)
    {
      for (j = i+1; j < 5 ; j++)
      {
      	
		if(d[j] < d[i])
		{
		
			d4 = d[i];
			d[i] = d[j];
			d[j] = d4;
		}
			

		
	}
	
	}

	cout<<"\nDisplaying Sorted List areawise for Doctors"<<endl;
	
	
		for(i=0;i<5;i++)	
		
	{
		d[i].ShowDoctor();
		
	}

	}
	

