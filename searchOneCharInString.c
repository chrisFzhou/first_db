#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
  
 char FirstNotRepeatingChar(char* pString)  
{  
    int i;  
    //输入不合法  
    if(!pString)  
        return 0;  
  
    //创建一个哈希表，并初始化  
    const int tableSize = 256;  
    int hashTable[tableSize];  
    for(i = 0; i < tableSize; i++)  
        hashTable[i] = 0;  
  
    //确定字符串中每个字符出现的次数  
    char* pHashKey = pString;  
    while(*(pHashKey) != '\0')  
        hashTable[*(pHashKey++)]++; //这种写法精简强悍 就是为这一行代码转的   
  
    //找到字符串中只出现一次的那个字符  
    pHashKey = pString;  
    while(*pHashKey != '\0')  
    {  
        if(hashTable[*pHashKey] == 1)  
            return *pHashKey;  
        pHashKey++;  
    }  
  
    //如果这个字符串为空，或者字符串中的每个字符都至少出现两次  
    return 0;  
}  
  
int main(void)  
{  
    char str[1000];  
    printf("请输入字符串：");  
    gets(str);  
    if(FirstNotRepeatingChar(str)==0)  
        printf("输入字符串中没有找到第一个只出现一次的字符！\n");  
    else  
        printf("输入字符串中第一个只出现一次的字符为：%c\n",FirstNotRepeatingChar(str));  
    system("pause");  
    return 0;  
} 


