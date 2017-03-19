/*
 * main.c
 *
 *  Created on: 21 сент. 2015 г.
 *      Author: admin
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BDFFSHH

void print_array(char **names, int* ages, int count)
{
	int i=0;
	for( i=(count-1); i>=0; i-- ){
		printf("%s has %d years alive. \n", names[i], ages[i]);
	}
	printf("---\n");
}
void print_array_aspinter(char **cur_name, int* cur_age, int count)
{
	int i=0;
	//second way using pointers
	for( i=(count-1); i>=0; i--){
		printf("%s is %d years old. \n",*(cur_name+i), *(cur_age+i));
	}
}
void print_pointer_as_pointer(char **names, int* ages, int count)
{
	char **cur_name;
	int *cur_age;
	// third way, pointers are just arrays
	for( cur_name = (names + count -1), cur_age = (ages+count -1);
			 cur_age!= ages; cur_name--, cur_age--){
		printf("%s lived %d years so far.\n",*cur_name, *cur_age);
	}
}
void print_printf_p_format(char **cur_name, int* cur_age, int count)
{
	int i=0;
	char *temp_string_pointer=*cur_name;
	//second way using pointers

	for( i=(count-1); i>=0; i--){
		printf("0x%p -pointer 0x%p -*pointer is %p years old. \n", (temp_string_pointer+i), *(temp_string_pointer+i), (cur_age+i));
	}
}

int main(int argc, char* argv[]){
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = { "Alan", "Frank", "Mary", "John", "Lisa" };
	int  count = ( sizeof(ages) / sizeof(int) );
	char *pointer_for_func_input= (char*) names;
	print_array( names, ages, count );
	print_array_aspinter( names, ages, count );
	print_pointer_as_pointer( names, ages, count );
	print_printf_p_format( &pointer_for_func_input, ages, count);
    getchar();
	return 0;
}

