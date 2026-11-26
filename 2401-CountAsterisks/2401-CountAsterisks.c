// Last updated: 11/27/2026, 12:16:21 AM
int countAsterisks(char* s) {
    int count=0;
    int countas=0;
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='|')
            count++;
        else if(s[i]=='*' && count%2==0)
            countas++;
    }
    return countas;
}