#include <stdio.h>

int compare_strings(const char* str1, const char* str2){
	for(int i = 0; str1[i] != '\0' && str2[i] != '\0'; ++i){
		if(str1[i] != str2[i]){
			return -1;
		}
	}
		return 0;
	}

int main() {
     char str1[25] = {};
     char str2[25] = {};
     fgets(str1, 25, stdin);
     fgets(str2, 25, stdin);
     int ret = 100;
     ret = compare_strings(str1, str2);
     printf("%d\n",ret);
     return 0;
}
