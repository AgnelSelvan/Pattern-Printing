#include<iostream>

using namespace std;

int main(){
   #ifndef READ_AND_WRITE_OP
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
   #endif
   int n;
   cin >> n;
   int count = 1;
    cout << "Row " << n << endl << endl;
   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= i; j++)
       {
           cout << count << "  ";
           count++;
       }
       cout << endl;
   }
   return 0;
}