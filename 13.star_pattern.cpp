#include<iostream>

using namespace std;

int main(){
   #ifndef READ_AND_WRITE_OP
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
   #endif
   int n;
   cin >> n;
    cout << "Row " << n << endl << endl;
   for (int i = 1; i <= n; i++)
   {
       for (int j = 0; j < n-i; j++)
       {
           cout << "   ";
       }
       for (int j = 0; j < i*2-1; j++)
       {
           cout<<" * ";
       }
       cout << endl;
   }
   for (int i = n; i >= 1; i--)
   {
       for (int j = 0; j < n-i; j++)
       {
           cout << "   ";
       }
       for (int j = 0; j < i*2-1; j++)
       {
           cout<<" * ";
       }
       cout << endl;
   }
   
   return 0;
}