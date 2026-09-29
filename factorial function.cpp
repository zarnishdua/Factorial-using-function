#include<iostream>
using namespace std;
int  factorial(int x){
   int fact=1;
   for(int i=1; i<=x; i++){
        fact=fact*i;
   }
   return fact;
}
int main(){
 int n;
 cout<<"Enter a number n :";
 cin>>n;
 cout<<factorial(n);
 return 0;
}
