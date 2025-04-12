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
	int main() {
		const int n = 20;
		 char arr[n] = {};
		char* str = arr;
        fgets(str, n, stdin);
		printf("%d\n", string_length(str) );
	return 0;
	}
