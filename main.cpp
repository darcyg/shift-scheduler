

#include <iostream>
#include "worker.h"

int main() {
	std::cout << "Testing" << std::endl;
	Worker* me = new Worker();
	me->show();
}