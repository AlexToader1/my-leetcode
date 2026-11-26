// Last updated: 11/27/2026, 12:16:22 AM
char* largestGoodInteger(char* num) {
   static char* check[] = {"999","888","777","666","555","444","333","222","111","000"};
    for (int i = 0; i < 10; i++) 
    {
        if (strstr(num, check[i]) != NULL) 
        {
            return check[i];
        }
    }
    return "";
}
