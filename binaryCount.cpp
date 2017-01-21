#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int bincount = 0;
char binString[10];
strcpy(binString, "1010010010");

for(int i = 0; binString[i]!='\0'; i++){
if(binString[i]=='1'){
bincount++;
}
}
cout<<"Given binary string: 1010010010\n"<<endl;
cout<<"There is " <<bincount << " 1's on this binary string";
return 0;
}
