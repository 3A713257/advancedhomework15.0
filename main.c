// advanced homework 15 (3A713257)
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	char str[]="Taiwan, Touch, Your, Heart";
	int a, b;
    int cnt = 0;
    for (a = 0, b = 0; str[a]; a++){
        if (str[a] == ' '||str[a]>='A'&&str[a]<='Z'||str[a]>='a'&&str[a]<='z')
        str[b++] = str[a];
		else
        cnt++;
    }
    str[b] = '\0';	
	printf("%s\n",str);
	system("pause");
	return 0;
}
