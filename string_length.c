#include <stdio.h>

int string_length( char* str){
	int l = 0;
	for(int i = 0; i <= 1000; ++i){
		if(*(str + i) != '\0'){
			l = l + 1;
		}else{
			break;
		}
	}
		return l;
}
