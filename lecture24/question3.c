char* removeSpecialChars(char* str) {
    int read = 0; 
    int write = 0; 
    int length = strlen(str); 
    for (int read = 0; read < length; read++) {
        char temp = str[read]; 
        if (temp <= 'z' && temp >= 'a') {
            str[write++] = str[read]; 

        }

    }
    str[write] = '\0';
    return str; 
}