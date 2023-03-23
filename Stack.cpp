#include<iostream>
using namespace std;
#define size 10
struct stack
{
int top;
int item[size];
 }s;
void push(stack &, int);
int pop (stack &);
int full(stack);
int empty(stack );
void print(stack);
int main()
                                                      {
s.top=-1;
 int choice;
int total;
int number;
	
	
cout<<"1- push element into the stack" << endl;
cout<<"2- pop element from the stack"<< endl;	  
cout<<"3- print the stack element"<< endl;	  
cout<<"4- exit program"<< endl;
                
cout<<"enter your choice :";
cin>>choice;
                
while(choice != 4) 
	 {
if (choice==1)
           {
cout<< "howmaney element to push?";
cin>> total;
for(int i=1 ; i<=total ; i++)
           {
cout<<"pushing the element " <<i<< "element";
cin>>number;
push (s, number);
} 
} //first choice
  if (choice==2)
 {
cout<< "how maney element to pop ?"<< endl;
cin>> total;
for(int i=1 ; i<=total ; i++)
pop (s);
} //second choice
if (choice==3)
print(s);
cout<< "enter another choice :";
cin>>choice;
}
return 0;
}
void push(stack &s ,int number)
  {

if(full(s))
cout<< "stack is full" << endl;
else 
s.item [++(s.top)]= number;
}
int full(stack s)
  {
if (s.top==size-1)
return 1;
 
else
return 0;
}
int pop (stack &s)
    {
if(empty(s))
cout<< "stack is empty" << endl;
else
return s.item [s.top--];
}
int empty(stack s)
                         {
	             if (s.top==-1)
	             return 1;
	                else
	             return 0;
                         }
                         void print(stack s)
 {
while(s.top != -1)
cout<< "s.item [s.top]" <<"  ";
s.top--;
}

                         


