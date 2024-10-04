#include <iostream>
using namespace std;
union DataInterpreteur{
uint16_t integerValue;
uint64_t longIntegerValue;
byte bytes[sizeof(longIntegerValue)];
}test;
int main(void){
	test.longIntegerValue=256;
	//test.integerValue=;
	cout<<static_cast<int>(test.bytes[1]);
	cout<<"Changes for git test";	
return 0;
	
}
