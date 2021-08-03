#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//#define debug 1

int main(int argc, char **argv)
{
	int i;
	long long sum, av_source;
	int *av_number = calloc(10, sizeof(int));
	char *bv = calloc(10, sizeof(char));

	av_source = atoi(*(argv + 1));
#ifdef debug
	printf("av_source:%d\n", av_source);
#endif

	sum = av_source ^ 177451812;
#ifdef debug
	printf("sum1:%lld\n", sum);
#endif
	sum += 100618342136696320;
#ifdef debug
	printf("sum2:%lld\n", sum);
#endif

	for (i = 0; i < 10; i++)
	{
		*(av_number + i) = sum / (long long)powl(58, i) % 58;
#ifdef debug
		printf("sum / powl(58, %d):%d\t*(av_number + %d):%d\n",i ,sum / (long long)powl(58, i), i, *(av_number + i));
#endif
	}

	for (i = 0; i < 10; i++)
	{
		switch(*(av_number + i))
		{
			case  0:*(bv + i) = 'f';break;
			case  1:*(bv + i) = 'Z';break;
			case  2:*(bv + i) = 'o';break;
			case  3:*(bv + i) = 'd';break;
			case  4:*(bv + i) = 'R';break;
			case  5:*(bv + i) = '9';break;
			case  6:*(bv + i) = 'X';break;
			case  7:*(bv + i) = 'Q';break;
			case  8:*(bv + i) = 'D';break;
			case  9:*(bv + i) = 'S';break;
			case 10:*(bv + i) = 'U';break;
			case 11:*(bv + i) = 'm';break;
			case 12:*(bv + i) = '2';break;
			case 13:*(bv + i) = '1';break;
			case 14:*(bv + i) = 'y';break;
			case 15:*(bv + i) = 'C';break;
			case 16:*(bv + i) = 'k';break;
			case 17:*(bv + i) = 'r';break;
			case 18:*(bv + i) = '6';break;
			case 19:*(bv + i) = 'z';break;
			case 20:*(bv + i) = 'B';break;
			case 21:*(bv + i) = 'q';break;
			case 22:*(bv + i) = 'i';break;
			case 23:*(bv + i) = 'v';break;
			case 24:*(bv + i) = 'e';break;
			case 25:*(bv + i) = 'Y';break;
			case 26:*(bv + i) = 'a';break;
			case 27:*(bv + i) = 'h';break;
			case 28:*(bv + i) = '8';break;
			case 29:*(bv + i) = 'b';break;
			case 30:*(bv + i) = 't';break;
			case 31:*(bv + i) = '4';break;
			case 32:*(bv + i) = 'x';break;
			case 33:*(bv + i) = 's';break;
			case 34:*(bv + i) = 'W';break;
			case 35:*(bv + i) = 'p';break;
			case 36:*(bv + i) = 'H';break;
			case 37:*(bv + i) = 'n';break;
			case 38:*(bv + i) = 'J';break;
			case 39:*(bv + i) = 'E';break;
			case 40:*(bv + i) = '7';break;
			case 41:*(bv + i) = 'j';break;
			case 42:*(bv + i) = 'L';break;
			case 43:*(bv + i) = '5';break;
			case 44:*(bv + i) = 'V';break;
			case 45:*(bv + i) = 'G';break;
			case 46:*(bv + i) = '3';break;
			case 47:*(bv + i) = 'g';break;
			case 48:*(bv + i) = 'u';break;
			case 49:*(bv + i) = 'M';break;
			case 50:*(bv + i) = 'T';break;
			case 51:*(bv + i) = 'K';break;
			case 52:*(bv + i) = 'N';break;
			case 53:*(bv + i) = 'P';break;
			case 54:*(bv + i) = 'A';break;
			case 55:*(bv + i) = 'w';break;
			case 56:*(bv + i) = 'c';break;
			case 57:*(bv + i) = 'F';break;
		}
#ifdef debug
		printf("*(bv + %d):%c\n", i, *(bv + i));
#endif
	}

	printf("BV%c%c%c%c%c%c%c%c%c%c\n", *(bv + 6), *(bv + 2), *(bv + 4), *(bv + 8), *(bv + 5), *(bv + 9), *(bv + 3), *(bv + 7), *(bv + 1), *(bv + 0));
	return 0;
}