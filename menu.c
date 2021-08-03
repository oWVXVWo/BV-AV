#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char chosen;
	char *string;
	char bv[11];
	long long av;

	fputs("欢迎使用BV与AV互转程序\n版本:2.0\n作者:oWVXVWo\n", stdout);
	while(1)
	{
		fputs("\t\t请选择\n", stdout);
		fputs("1.BV转AV\n2.AV转BV\n3.清除转换记录\n4.ESC\n", stdout);
		fflush(stdin);
		chosen = fgetc(stdin);
		switch(chosen)
		{
			case'1':
				fputs("BV", stdout);
				scanf("%s", bv);
				sprintf(string, ".\\BVtoAV %s", bv);
				system(string);
				break;
			case'2':
				fputs("AV", stdout);
				scanf("%lld", &av);
				sprintf(string, ".\\AVtoBV %lld", av);
				system(string);
				break;
			case'3':
				fputs("构建中...\n", stdin);
				break;
			case'4':
				return 0;
			default:
				fputs("无效的输入\n", stdin);
			break;
		}
	}
}