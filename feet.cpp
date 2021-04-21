#include<iostream>
using namespace std;

/*main function*/
int main()
{
   /*variables*/
   int inches,feet;
   /* height in inches*/
   cout<<"Enter the height in inches: ";
   cin>>inches;
   /*calculate*/
   feet=inches/12;
   inches=inches%12;
   /*display height in feet and inch form*/
   cout<<"The height in feet and inches form is: ";
   cout<<feet<<" ft "<<inches<<" in";
   return 0;

}
