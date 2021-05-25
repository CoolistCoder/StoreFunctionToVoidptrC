#include <stdio.h>
#include <stdlib.h>

/*
 *study of storing a function to a void pointer
 */

void simpletask();				//a simple task to demonstrate that this works
void store(void(**)(), void());	//a function designed to store the function we want to the pointer we want

int main(void) {
	//create a void pointer for where the function will be stored
	void(*storedfunction)() = NULL;
	//use this function to store the function to the void pointer via reference
	store(&storedfunction, simpletask);
	//call upon the function stored in the void pointer
	storedfunction();
	return EXIT_SUCCESS;
}//main

void simpletask(){
	printf("Hello, world!\n");
}//simpletask

void store(void(**wheretostore)(), void whattostore()){
	*wheretostore = whattostore; //simply dereference the void pointer, then put the function into it.
}//store
