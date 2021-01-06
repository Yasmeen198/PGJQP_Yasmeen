#include<iostream>
using namespace std;
class eopn
{
public : 
int even_odd_pos_neg(int num);
};
int eopn::even_odd_pos_neg(int num)  
{
if(num%2==0)
cout<<"even\n" ;
else
cout<<"odd\n" ;
if(num>0)
cout<<"\npositive\n";
else 
cout<<"\negative\n";
return 0;
}
int main()
{
char result;
eopn obj1;
obj1.even_odd_pos_neg(7);

return 0;
}