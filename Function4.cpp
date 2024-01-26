#include<stdio.h>
#include<string.h>
void input(char name[100], char name2[100], char name3[100])
{
	int len = strlen(name);
	int len2 = strlen(name2);
	int len3 = strlen(name3);
	for(int i = 0 ; i< len; i++)
	{
		name[i] += 32;
	}
	printf("%s ",name);
	for(int i = 0 ; i< len2; i++)
	{
		name2[i] += 32;
	}
	printf("%s ",name2);
		for(int i = 0 ; i< len3; i++)
	{
		name3[i] += 32;
	}
	printf("%s ",name3);
}

int main() {
    char s1[100], s2[100], s3[100];
    scanf("%s %s %s", s1, s2, s3);
    input(s1,s2,s3);
    return 0;
}
