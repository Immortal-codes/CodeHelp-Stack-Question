#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int main()
{
   string s ="RajanSharma";

   stack<char> s1;

   for (int i = 0; i < s.length(); i++)
   {
    int x=s[i];
        s1.push(x);
   }
   int m=s1.size();
   for (int i = 0; i < m; i++)
   {
       cout<<s1.top()<<" ";
       s1.pop();
   }
   




}