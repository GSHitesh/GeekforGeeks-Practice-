#include<iostream>
using namespace std;

int geek_onacci(int a, int b, int c, int n)
{
    if(n==1)
        return a;

    if(n==2)
        return b;

    if(n==3)
        return c;

    return geek_onacci(a, b, c, n-1) + geek_onacci(a, b, c, n-2) + geek_onacci(a, b, c, n-3);
}
 
 
int main()
 {
	    int t;
       cin >> t;
       while(t--)
       {
           int a, b, c, n;

           cin >> a >> b >> c >> n;

           cout << geek_onacci(a, b, c, n) << endl;
       }
	return 0;
}