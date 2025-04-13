#include <stdio.h>
int string_length(char*);
void reverse_string(char* str){
	int len = string_length(str);
			for(int i = len - 2; i >= 0; --i){
			putchar(str[i]);
			}
}

int main() {
	char arr[20] = {};
	char *ptr = arr;
	fgets(ptr, 20, stdin);
	reverse_string(ptr);
return 0;
}
