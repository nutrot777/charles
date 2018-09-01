#include <iostream>

using namespace std;
int main(){  
int marks;
cout<<"\t\t\t\t\t Chech What Grade You Had!!\t\t\n";
cout<<"--------------\n";
cout<<"Please Enter Your Mark Here\n";
cout<<"Marks:";
cin>>marks;
               if(marks>=80){cout<<"A";}else if((marks>=70)&&(marks<80)){cout<<"B";}
        if((marks>=60) && (marks<70)){cout<<"C";} else if((marks>=50)&&(marks<60))
            {cout<<"D";}else if((marks>=40)&&(marks<50)){cout<<"E";}
          else if(marks<40){cout<<"F";}
return 0;
}
 
