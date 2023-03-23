#include<iostream>
#include<cstdlib>
using namespace std;
#define null 0
struct  node
{
int data;
 node *next;
};
typedef node *nodeptr;
   nodeptr getnode(){
   	nodeptr p;
   	p=(nodeptr) malloc (sizeof(node));
   	return p;
}
main(){
	nodeptr p1, p2, list; 
	p1= getnode();
	p2= getnode();
	list=p1;
	p1-> data=10;
	p1-> next=p2;
    p2-> data=20;
	p2-> next=null;
	cout<<p1->data<<" "<<p2->data;
	 return 0;
}


