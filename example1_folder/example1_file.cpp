#include<iostream>

using namespace std;
int main() {
int a,b,c,d;
cout << "Enter the cut off marks A:";
cin >>a;
cout << "Enter the cut off marks B:";
cin >>b;
cout << "Enter the cut off marks c:";
cin >>c;
cout << "Enter the obtained number :";
cin >>d;
if(a>=100)
  if(b>=60)
    if(c>=50)
      if(d<a)
        if(d<b)
          if(d>=c)
            if(d>=c)
               cout << "Your grade is C";
else
          cout << "Your have failed";
else
          cout << "Your grade is B ";
else
          cout << "Your grade is A";
else
          cout << "Invalid cutoff marks";
else      
          cout << "Invalid cutoff marks";
else 
          cout << "Invalid cutoff marks";
          
          return 0;
}          
