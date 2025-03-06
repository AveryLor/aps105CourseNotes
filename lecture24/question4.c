char* removeStrDuplicates(char* str, char* search) {
    int lengthstr1 = strlen(str); 
    int lengthstr2 = strlen(search); 

    char* result = str; 

    // strcmp 
    for (int i = 0; i < lengthstr1 - lengthstr2 + 1; i++) {
        if (strncmp(&str[i], search, lengthstr2) == 0) {
            str[i] = ' '; 

        }
    }
    return result; 
}