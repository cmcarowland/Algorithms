#include <stdio.h>
#include <string.h>
int IsPalindrome(char *inStr)
{
    printf("%s ", inStr);
    int length = strnlen(inStr, 100);
    for(int i = 0, j = length -1; i < j; i++, j--)
    {
        if(inStr[i] != inStr[j])
            return 0;
    }
    return 1;
}

int main()
{
    //redivider, deified, civic, radar, level, rotor, kayak, reviver, racecar, madam, and refer
    printf(IsPalindrome("baab") == 1 ? "True\n" : "False\n");
    printf(IsPalindrome("baba") == 1 ? "True\n" : "False\n");
    printf(IsPalindrome("redivider") == 1 ? "True\n" : "False\n");
    printf(IsPalindrome("aaabbb") == 1 ? "True\n" : "False\n");
    printf(IsPalindrome("deified") == 1 ? "True\n" : "False\n");
    printf(IsPalindrome("ababac") == 1 ? "True\n" : "False\n");
    printf(IsPalindrome("civic") == 1 ? "True\n" : "False\n");
    printf(IsPalindrome("aaaaafaaaaaa") == 1 ? "True\n" : "False\n");
    printf(IsPalindrome("radar") == 1 ? "True\n" : "False\n");
    printf(IsPalindrome("level") == 1 ? "True\n" : "False\n");

    return 0;
}