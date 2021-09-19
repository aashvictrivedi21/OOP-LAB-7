#include<iostream>
using namespace std;

class INTERNAL;  //declaration , not definition 
class EXTERNAL
{
    
 
    
    public: 
    int MATH,OPP,SE,DS;
  EXTERNAL()
    {
        cout<<"\nMarks for EXTERNAL EXAM ::"<<endl;
        cout<<"Marks of MATH:"<<endl;
        cin>>MATH;
        cout<<"Marks of OPP:"<<endl;
        cin>>OPP;
        cout<<"Marks of SE:"<<endl;
        cin>>SE;
        cout<<"Marks of DS:"<<endl;
        cin>>DS;
    }
    friend  INTERNAL;
    };
class INTERNAL
{
    

    
    public:    int MATH,OPP,SE,DS;
    INTERNAL()
    {
        cout<<"\nMarks for INTERNAL EXAM ::"<<endl;
        cout<<"Marks of MATH:"<<endl;
        cin>>MATH;
        cout<<"Marks of OPP:"<<endl;
        cin>>OPP;
        cout<<"Marks of SE:"<<endl;
        cin>>SE;
        cout<<"Marks of DS:"<<endl;
        cin>>DS;
    }
     friend int operator + (EXTERNAL E1, INTERNAL I1);
    
}; //
int operator +(EXTERNAL E1,INTERNAL I1) //(CLASS NAME  OBJECT NAME)
{
    int TMATH,TOPP,TSE,TDS,Total;
    float Percentage;
   
    int status = 1;
    if ((I1.MATH < 50) || (I1.OPP < 50) || (I1.SE < 50) || (I1.DS < 50 ) ||(E1.MATH < 50) || (E1.OPP < 50) || (E1.SE < 50) || (E1.DS < 50 ) )
    {
        status = -1;
    }
    if (status == 1)
    {
    
    TMATH=I1.MATH+E1.MATH;
    TOPP=I1.OPP+E1.OPP;
    TSE=I1.SE+E1.SE;
    TDS=I1.DS+E1.DS;
    Total=TMATH+TOPP+TSE+TDS;
    Percentage = Total / 8.00;
    
    
    cout<<"Total Marks of MATH:"<<TMATH<<endl;
    cout<<"Total Marks of OPP:"<<TOPP<<endl;
    cout<<"Total Marks of SE:"<<TSE<<endl;
    cout<<"Total Marks of DS:"<<TDS<<endl;
    cout<<"Total marks (Internal + External):"<<Total<<endl; 
    cout<<"Percentage:"<<Percentage<<endl;
    cout<<"Result:PASS";
    }
    else
    {
       cout<<"Result:FAIL";  
    }
    return 0;
}
int main()
{
    INTERNAL I1; //objest-INTERNAL
    EXTERNAL E1 ;//object-EXTERNAL
    int result;
    result = E1 + I1;
    
return 0;
    
}
