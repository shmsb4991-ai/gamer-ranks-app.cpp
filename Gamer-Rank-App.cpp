#include <iostream>
#include <string>
using namespace std;
int main()
{
   string name;
   cout <<"Enter Your Name: \n";
   getline (cin,name);
   int hours;
   cout <<"Enter Your Playing Hours: \n";
   cin >> hours;
   if (hours >= 40)
   {
       cout <<"Rank: Hardcore Gamer!\n";
   }
   else if (hours >= 20) 
   {
       cout <<"Rank: Pro Gamer!" <<endl;
   }
   else if (hours >= 5)
   {
       cout <<"Rank: Casual Gamer!\n";
   }
   else if (hours >= 0)
   {
       cout <<"Rank: Beginner Gamer!\n";
   }
   else
   {
       cout <<"Error: Invalid Hours!\n";
   }
   return 0; 
}
