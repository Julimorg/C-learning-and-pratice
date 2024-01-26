#include<stdio.h>
#include<string.h>
void input1(char s1[100])
{
	int len = strlen(s1);
	for(int i = 0; i<len ;i++)
	{
		s1[i] += 32;
	}
	printf("%s\n ",s1);
}
void input2(char s2[100])
{
	int len = strlen(s2);
	for(int i = 0  ;i<len;i++)
	{
		s2[i] += 32;
	}
	printf("%s\n",s2);
}
void input3(char s3[100])
{
	int len = strlen(s3);
		for(int i = 0  ;i<len;i++)
	{
		s3[i] += 32;
	}
	printf("%s ",s3);
}
int main() {
    char s1[100], s2[100], s3[100];
    scanf("%s %s %s", s1, s2, s3);
    input1(s1);
    input2(s2);
    input3(s3);
    return 0;
}
