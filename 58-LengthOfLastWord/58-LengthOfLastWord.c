// Last updated: 11/27/2026, 12:17:11 AM
int lengthOfLastWord(char* s) {
    int number = 0;

    int j = strlen(s) - 1;
    while (j>=0 && s[j]==' ') 
    j--;

    while (j>=0 && s[j]!=' ') 
    {
        number++;
        j--;
    }

    return number;
}