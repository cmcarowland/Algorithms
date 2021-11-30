#include <stdio.h>
#include <string.h>
char ToLower(char c)
{
    if(c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }
    
    return c;
}

int IsAnagram(char* inString, char* compareString)
{
    printf("%s %s ", inString, compareString);
    int length = strnlen(inString, 100);
    if(length != strnlen(compareString, 100))
        return 0;
        
    int in[128] = {0};
    int comp[128] = {0};
    
    for(int i = 0; i < length; i++)
    {
        in[ToLower(inString[i])]++;
        comp[ToLower(compareString[i])]++;
    }
    
    for(int i = 0; i < 128; i++)
    {
        if(in[i] != comp[i])
            return 0;
    }
    
    return 1;
}

int main()
{
    printf(IsAnagram("Baab", "abab") == 1 ? "True\n" : "False\n");
    printf(IsAnagram("abaa", "abaab") == 1 ? "True\n" : "False\n");
    printf(IsAnagram("tar", "rat") == 1 ? "True\n" : "False\n");
    printf(IsAnagram("abaac", "ababa") == 1 ? "True\n" : "False\n");
    printf(IsAnagram("arc", "car") == 1 ? "True\n" : "False\n");
    printf(IsAnagram("aaaad", "aaada") == 1 ? "True\n" : "False\n");
    printf(IsAnagram("elbow", "below") == 1 ? "True\n" : "False\n");
    printf(IsAnagram("aac", "aab") == 1 ? "True\n" : "False\n");
    printf(IsAnagram("state", "taste") == 1 ? "True\n" : "False\n");
    printf(IsAnagram("cider", "cried") == 1 ? "True\n" : "False\n");
    printf(IsAnagram("dusty", "study") == 1 ? "True\n" : "False\n");
    printf(IsAnagram("night", "thing") == 1 ? "True\n" : "False\n");
    printf(IsAnagram("inch", "chin") == 1 ? "True\n" : "False\n");
    printf(IsAnagram("abaa", "abab") == 1 ? "True\n" : "False\n");
    return 0;
}
