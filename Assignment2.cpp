#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   int sale1, sale2, sale3, sale4, sale5;
   cout<<"Enter today's sales for store 1: ";
   cin>>sale1;
   cout<<"Enter today's sales for store 2: ";
   cin>>sale2;
   cout<<"Enter today's sales for store 3: ";
   cin>>sale3;
   cout<<"Enter today's sales for store 4: ";
   cin>>sale4;
   cout<<"Enter today's sales for store 5: ";
   cin>>sale5;

   cout<<"==============="<<endl;
   cout<<"SALES BAR CHART"<<endl;
   cout<<"(Each * = $100)"<<endl;

   cout<<"Store 1: ";
   for (int i = 0; i < sale1; i+=100){
      cout<<"*";
   }
   cout<<endl;
   
   cout<<"Store 2: ";
   for (int i = 0; i < sale2; i+=100){
      cout<<"*";
   }
   cout<<endl;

   cout<<"Store 3: ";
   for (int i = 0; i < sale3; i+=100){
      cout<<"*";
   }
   cout<<endl;

   cout<<"Store 4: ";
   for (int i = 0; i < sale4; i+=100){
      cout<<"*";
   }
   cout<<endl;

   cout<<"Store 5: ";
   for (int i = 0; i < sale5; i+=100){
      cout<<"*";
   }
   cout<<endl;

   return 0;
}
