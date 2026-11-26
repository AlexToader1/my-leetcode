// Last updated: 11/27/2026, 12:17:22 AM
bool isValid(char* s) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        } 
        else {
            if (top == -1) return false;

            char last = stack[top--];

            if ((c == ')' && last != '(') ||
                (c == ']' && last != '[') ||
                (c == '}' && last != '{')) {
                return false;
            }
        }
    }

    // If stack is empty at the end, all brackets matched
    return top == -1;
}