// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void insert(stack<int>&s,int temp){
	if(s.size()==0 or s.top()<=temp){		//check if stack is empty then push the temp or check for the condition
		s.push(temp);
		return;
	}
	int val=s.top();		//take the top ele of the stack in val
	s.pop();
	insert(s,temp);		//insert temp to appropriate place using recursion
	s.push(val);	//push value in the stack
}

void SortedStack :: sort()
{
   // Write your code here
	if(s.size()==1)	//if stack is empty
		return;
	int temp=s.top();	//take the top element and store in temp
	s.pop();
	sort();		//sort the rest of the stack by recursion
	insert(s,temp);	//insert temp at appropriate place
	return;		//return after inserting element to correct place
   
}