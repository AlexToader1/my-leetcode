// Last updated: 11/27/2026, 12:16:31 AM
bool detectCapitalUse(char* word) {
    int n=strlen(word);
    int ok=1,ak=1;
    if(strlen(word)==1) return true;
    for(int i=1;i<n;i++)
    {
        if(word[i]<'a' || word[i]>'z')
            ok=0;
        if(word[i]<'A' || word[i]>'Z')
            ak=0;
    }
    if(word[0]>='A' && word[0]<='Z' && ok==1)
        return true;
    if(word[0]>='A' && word[0]<='Z' && ak==1)
        return true;
    if(word[0]>='a' && word[0]<='z' && ok==1)
        return true;
    return false;
}