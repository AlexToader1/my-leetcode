// Last updated: 11/27/2026, 12:16:36 AM
char findTheDifference(char* s, char* t) {
    int len=strlen(t);
    int sum=0;

    for (int i=0; i<=len; i++)
        sum+=t[i];

    for (int i=0; i<len; i++)
        sum-=s[i];

    return sum;
}