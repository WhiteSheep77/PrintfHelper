
#include "PrintfHelper.h"


void funcB(){
	MessagePrintf("test Message");	
	return;
}

void funcA(){
	WaringPrintf("test waring");
	return;
}

int main(){
	ErrorPrintf("test error");
	funcA();
	funcB();
	return 0;
}

