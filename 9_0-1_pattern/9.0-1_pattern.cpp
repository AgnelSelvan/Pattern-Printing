#include<iostream>

using namespace std;

int main(){
   #ifndef READ_AND_WRITE_OP
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
   #endif
   int n;
   cin >> n;
    cout << "Row " << n << endl << endl;
   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= i; j++)
       {
           
           cout <<( ((i + j) % 2) == 0) ? "1" : "0" ;
           cout << " ";
       }
       cout << endl;
   }
   return 0;
}