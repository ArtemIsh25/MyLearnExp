/*
 * main.c
 *
 *  Created on: 21 сент. 2015 г.
 *      Author: admin
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	int i=0;
	char* Teststr[] = { "aaaaa", "bbbbbb",
						"cccccc", "ddddddd"
					  };
	int sizeTestStr=4;
	char** destTestStr;
	if( ( destTestStr =  malloc( sizeof(char)*sizeTestStr ) ) ){
		while(i<sizeTestStr){
			if( ( destTestStr[i] = malloc( sizeof(char)*strlen(Teststr[i])+1 ) ) ){
				memset(destTestStr[i],0,strlen(Teststr[i])+1);
				memcpy(destTestStr[i],Teststr[i],strlen(Teststr[i]));
				i++;
			} else { break; }
		}
		while(i>0){
			free(destTestStr[i-1]);
			i--;
		}
	}
	//free(destTestStr);
	return 0;
}

