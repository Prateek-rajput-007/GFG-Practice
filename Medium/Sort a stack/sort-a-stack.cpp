//{ Driver Code Starts
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
}
// } Driver Code Ends




/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void insert(stack<int> &st, int x){
    if(st.size()==0){
        st.push(x);
        return;
    }
    if(st.top()<x){
        st.push(x);return;
    }
    int temp=st.top();
    st.pop();
    insert(st,x);
    st.push(temp);
}
void SortedStack :: sort()
{
   if(s.size() == 0){
       return;
   }
   int ele = s.top();
   s.pop();
   sort();
   insert(s, ele);
}