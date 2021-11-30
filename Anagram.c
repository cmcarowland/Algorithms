#include <stdio.h>
#include <string.h>
int IsAnagram(char* inString, char* compareString)
{
    int containsChar = 0;
    int length = strnlen(inString, 100);
    int compareLen = strnlen(compareString, 100);
    if(length != compareLen)
        return 0;
    
    for(int i = 0; i < length; i++)
    {
        containsChar = 0;
        for(int j = 0; j < compareLen; j++)
        {
            if(inString[i] == compareString[j])
            {
                containsChar = 1;
                break;
            }
        }
        if(containsChar == 0)
        {
            return 0;
        }
    }
    
    return 1;
}


int main()
{
    printf(IsAnagram("cat", "tah") == 1 ? "True\n" : "False\n");

    return 0;
}