void printNum(char *str) {
    int i = 0; 
    while (str[i] == '0') {
        i++; 
    }

    printf("%s\n", str + i);
}

int main(void) { 
    char s[10] = "00000089876"; 
    printNum(s);
    return 0; 
}