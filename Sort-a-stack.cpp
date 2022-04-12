

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void sort_order(int x,stack<int>&s)
{
    if(s.empty() || x>s.top())
    {
        s.push(x);
        return;
    }
    
    int temp=s.top();
    s.pop();
    sort_order(x,s);
    s.push(temp);
}


void SortedStack :: sort()
{
   //Your code here
   if(!s.empty())
   {
       int ele=s.top();
       s.pop();
       sort();
       sort_order(ele,s);
   }
}
