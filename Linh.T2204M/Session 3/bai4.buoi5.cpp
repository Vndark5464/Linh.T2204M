#include <iostream>
using namespace std;
 
int main()
{int i;
int i1 =1;
    for( i = 1; i <=22; i=i+i1) {
    	i1 = i1 +2;
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
