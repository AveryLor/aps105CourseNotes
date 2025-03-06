#include <stdio.h> 
#include <string.h> 

char* lastStrinStr(char* str1, char* str2) {
    int lengthstr1 = strlen(str1); 
    int lengthstr2 = strlen(str2); 
    char* result = NULL; 

    //strncmp - compares two strings with a certain length, it should compare the lengths of the two
    for (int i = 0; i < lengthstr1 - lengthstr2 + 1; i++) {
        if (strncmp(&str1[i],str2,lengthstr2) == 0) {
            result = &str1[i]; // If they are the same
        }
    }
    return result;

}

int main() {
    printf("%s", lastStringStr("alex", "alexyou"));
}