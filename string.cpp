#include <iostream>
#include <string>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
   freopen("out.txt", "w", stdout);
#endif

   string a, b;
   cin >> a >> b;
   cout << a.size() << " " << b.size() << endl;
   cout << a + b << endl;
   char temp;
   temp = a[0];
   a[0] = b[0];
   b[0] = temp;
   cout << a << " " << b << endl;

   return 0;   
}