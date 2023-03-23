#include<iostream>
using namespace std;
#define size 4
struct queue{
int front ,rear;
char item[size];
}q;
void insert(queue &,char);
 void remove(queue &);
 int full(queue);
 int empty(queue);
 void print(queue);
 main () {
	 
	 q.front=0;
	 q.rear=0;
	int choice;
	int total;
	char letter;
	cout<<"1. insert element into the queue"<<endl;
	cout<<"2. remove element from the queue"<<endl;
	cout<<"3. print element of the queue"<<endl;
	cout<<"4. exit program"<<endl;
    cout<<"enter your choice :";
	cin>>choice; 
	
	while(choice != 4)
	{
if(choice==1){
cout<<"how many element you want to insert ?";
cout<<"inserting the element "<<"      ";
cin>>total;
for(int i=0; i<=total; i++)
{
cin>>letter;
insert(q, letter);
}
}  //first choice
if(choice==2)
{
cout<<"how many element you want to remove ?";
cin>>total;
for(int i=1; i<=total; i++)
remove (q);
}  //second choice
if(choice==3)
print(q);

cout<<"enter another choice: ";
cin>>choice;
} //end while
return 0;	          
}
void insert(queue &q ,char letter){
if(full(q))	
cout<<"queue is full";
else 
q.item[q.rear++]=letter;
}
int full(queue q){
	if(q.rear==size)
	return 1;
	else 
	return 0;
}
void remove(queue &q){
	char letter;
if (empty(q))
cout<<"queue is empty";
else 
q.item [q.front++];
}
int empty(queue q){
if(q.rear==q.front)
return 1;
else
return 0;
}
void print(queue q){
	if(empty(q))
	cout<<"queue is empty";
	else
		for(int index=q.front; index<q.rear; index++)
		cout<<q.item[index]<<"   ";
	}
	


