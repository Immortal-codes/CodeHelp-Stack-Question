#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

void insert_at_bottom(stack<int> &st, int x)
{

    if (st.size() == 0)
    {
        st.push(x);
    }
    else
    {
        int a = st.top();
        st.pop();
        insert_at_bottom(st, x);
        st.push(a);
    }
}

void reverse(stack<int> &st)
{
    if (st.size() > 0)
    {

        int x = st.top();
        st.pop();
        reverse(st);
        insert_at_bottom(st, x);
    }
    return;
}

int main()
{
    stack<int> st, st2;

    for (int i = 1; i <= 4; i++)
    {
        st.push(i);
    }

    st2 = st;

    cout << "Original Stack" << endl;

    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    cout << endl; 

    reverse(st);
    cout << "Reversed Stack" << endl;

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}


//here the concrpt is we have to pop last in element and then push it in the bottom and for rest of the element we have to call recursive function

//stack me accuracy ya khe best practice wo hoti hai jb hum stack ko element push ya pop krne se phele check krte hai ki wo empty hai ya nhi .

//So hr br phele check kro ki empty hai ya nhi hai.

//Stack me saara khel puch or pop ka hai.

//Stack array nhi hai , stack bs ek box hai jisme element ek ke oopr ek hote hain..!!

//for the visualization of stack ko humesa ushe ek box ki trha dekho

//array ka index nhi hota bs ushme element hota hai jo push ya pop krskte hai.

//stack ki best coding practice hai ushe function se bnaana   for particualar work create particular function.