#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
  
 char FirstNotRepeatingChar(char* pString)  
{  
    int i;  
    //���벻�Ϸ�  
    if(!pString)  
        return 0;  
  
    //����һ����ϣ������ʼ��  
    const int tableSize = 256;  
    int hashTable[tableSize];  
    for(i = 0; i < tableSize; i++)  
        hashTable[i] = 0;  
  
    //ȷ���ַ�����ÿ���ַ����ֵĴ���  
    char* pHashKey = pString;  
    while(*(pHashKey) != '\0')  
        hashTable[*(pHashKey++)]++; //����д������ǿ�� ����Ϊ��һ�д���ת��   
  
    //�ҵ��ַ�����ֻ����һ�ε��Ǹ��ַ�  
    pHashKey = pString;  
    while(*pHashKey != '\0')  
    {  
        if(hashTable[*pHashKey] == 1)  
            return *pHashKey;  
        pHashKey++;  
    }  
  
    //�������ַ���Ϊ�գ������ַ����е�ÿ���ַ������ٳ�������  
    return 0;  
}  
  
int main(void)  
{  
    char str[1000];  
    printf("�������ַ�����");  
    gets(str);  
    if(FirstNotRepeatingChar(str)==0)  
        printf("�����ַ�����û���ҵ���һ��ֻ����һ�ε��ַ���\n");  
    else  
        printf("�����ַ����е�һ��ֻ����һ�ε��ַ�Ϊ��%c\n",FirstNotRepeatingChar(str));  
    system("pause");  
    return 0;  
} 


