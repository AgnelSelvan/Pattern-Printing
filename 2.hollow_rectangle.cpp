#include<iostream>
using namespace std;

int main(){
    #ifndef READ_AND_WRITE_OP
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int row, col;
    cin>>row>>col;

    cout << "Row " << row << endl;
    cout << "Column " << col << endl << endl;
    
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if(i == 1 || i == row || j == 1 || j == col){
                cout << "*";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}