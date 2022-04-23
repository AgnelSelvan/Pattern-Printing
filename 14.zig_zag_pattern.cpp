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
   for (int i = 1; i <= 3; i++)
   {
       for (int j = 1; j <= n; j++)
       {
           if(j%4==0 && i == 2 || ((i+j) % 4) == 0){
               cout << " * ";
           }
           else{
               cout << "   ";
           }
       }
       cout << endl;
   }
   
   return 0;
}