#include <iostream>
using namespace std;

int test(int a) {
try{
if(a < 0)
throw a;
else
throw 'a';
}catch(int a){
cout<<"Caught an integer: " << a<<endl;
}catch (char a){
cout<<"Caught a character: " << a<<endl;
}
return 0;
}
int main() {
cout<<"multiple catches:"<<endl;
test(10);
test(-1);
return 0;
}
