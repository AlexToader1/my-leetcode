// Last updated: 11/27/2026, 12:16:38 AM
int firstUniqChar(char* s) {
    int freq[26]={0};
    int n=strlen(s);
    for (int i=0; i<n; i++) {
        freq[s[i]-'a']++;
    }
    for (int i=0; i<n; i++) {
        if (freq[s[i]-'a']==1)
            return i;
    }
    return -1;
}