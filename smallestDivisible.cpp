#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int num, x=1;
    while(num){
        if(x%2==0 && x%3==0 && x%5==0 && x%8==0 && x%12==0 && x%13==0 && x%15==0)
		{
			
            cout << x;
            break;
        }
        
        else
            x++;
    }
}
