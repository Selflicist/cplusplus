#include<iostream>
#include<cmath>
using namespace std;

int sum(int var1,int var2)
{
    return var1+var2;
}
int sub(int var1,int var2)
{
    return var1-var2;
}
int prod(int var1,int var2)
{
    return var1*var2;
}
int quo(int var1,int var2)
{
    return var1/var2;
}
int rem(int var1,int var2)
{
    return var1%var2;
}
int sqrt(int var1,int var2)
{
    return (var1,var2);
}
int log(int var1,int var2)
{
    return (var1,var2);
}
int main()
{
    int var1,var2,res1,res2,res3,res4,res5,res6,res7;
    cout<<"Welcome to Calculator of Abdullah"<<endl;
    cin>>var1;
    cin>>var2;
    res1=sum(var1,var2);
    res2=sub(var1,var2);
    res3=prod(var1,var2);
    res4=quo(var1,var2);
    res5=rem(var1,var2);
    res6=sqrt(var1);
    res7=log(var2);
    
    cout<<"The sum of two numbers is :"<<res1<<endl;
    cout<<"Subtraction of two numbers is :"<<res2<<endl;
    cout<<"Product of two numbers is :"<<res3<<endl;
    cout<<"Qoutient of two numbers is :"<<res4<<endl;
    cout<<"Remainder of two numbers is :"<<res5<<endl;
    cout<<"Square of two numbers root is :"<<res6<<endl;
    cout<<"Log of two numbers is :"<<res7<<endl;
    return 0;
}