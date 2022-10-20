#include <iostream>
#include "String.h"



int main()
{
	char myword1[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char myword2[] = { ',',' ', 's','i', 'r','!', '\0'};
	String a(myword1);
	String b(myword2);
	a.append(b);
	for (int i = 0; i < a.size; i++) {
		std::cout << a.str[i];
	}
}