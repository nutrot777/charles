#include <iostream>
using namespace std;

int GCD (int a, int b){
int remd = a%b;
while(remd!=0){
      a =b;
      b = remd;
      remd = a%b;}
return b;
   }
 int main(){
int A, B;
cout<<"Using Euclidean Algorithm To Find The Greatest Common Factor\n";
cout<<"Please Enter Two Positive Integer Values\n";
cin>>A>>B;
cout<<GCD(A,B);
return 0;
}
