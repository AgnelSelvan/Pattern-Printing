#include<iostream>

using namespace std;

int factorial(int number){
    int fact = 1;
    for (int i = 2; i <= number; i++)
    {
       fact *= i;
    }
    return fact;
}

int main(){
   #ifndef READ_AND_WRITE_OP
      freopen("../input.txt", "r", stdin);
      freopen("../output.txt", "w", stdout);
   #endif
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j <= i; j++)
       {
           int no = factorial(i)/(factorial(j)*factorial(i-j));
           cout << no << " ";
       }
       cout << endl;
   }
   
   return 0;
}