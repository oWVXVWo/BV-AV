#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv)
{
	int i, error = 0;
	int *bv_number = calloc(10, sizeof(int));
	int *bv_suorce = calloc(10, sizeof(int));
	long long *bv_sum = calloc(10, sizeof(long long));
	long long sum = 0;

	for (i = 0; i < 10; i++)
	{
		*(bv_suorce + i) = *(*(argv + 1) + i);
	}

	for (i = 0; i < 10; i++)
	{
		if (error == 1)
		{
			printf("错误的BV号\n");
			return 0;
		}
		switch (*(bv_suorce + i))
		{
			case'1':*(bv_number + i) = 13; break;
			case'2':*(bv_number + i) = 12; break;
			case'3':*(bv_number + i) = 46; break;
			case'4':*(bv_number + i) = 31; break;
			case'5':*(bv_number + i) = 43; break;
			case'6':*(bv_number + i) = 18; break;
			case'7':*(bv_number + i) = 40; break;
			case'8':*(bv_number + i) = 28; break;
			case'9':*(bv_number + i) = 5 ; break;
			case'A':*(bv_number + i) = 54; break;
			case'B':*(bv_number + i) = 20; break;
			case'C':*(bv_number + i) = 15; break;
			case'D':*(bv_number + i) = 8 ; break;
			case'E':*(bv_number + i) = 39; break;
			case'F':*(bv_number + i) = 57; break;
			case'G':*(bv_number + i) = 45; break;
			case'H':*(bv_number + i) = 36; break;
			case'J':*(bv_number + i) = 38; break;
			case'K':*(bv_number + i) = 51; break;
			case'L':*(bv_number + i) = 42; break;
			case'M':*(bv_number + i) = 49; break;
			case'N':*(bv_number + i) = 52; break;
			case'P':*(bv_number + i) = 53; break;
			case'Q':*(bv_number + i) = 7 ; break;
			case'R':*(bv_number + i) = 4 ; break;
			case'S':*(bv_number + i) = 9 ; break;
			case'T':*(bv_number + i) = 50; break;
			case'U':*(bv_number + i) = 10; break;
			case'V':*(bv_number + i) = 44; break;
			case'W':*(bv_number + i) = 34; break;
			case'X':*(bv_number + i) = 6 ; break;
			case'Y':*(bv_number + i) = 25; break;
			case'Z':*(bv_number + i) = 1 ; break;
			case'a':*(bv_number + i) = 26; break;
			case'b':*(bv_number + i) = 29; break;
			case'c':*(bv_number + i) = 56; break;
			case'd':*(bv_number + i) = 3 ; break;
			case'e':*(bv_number + i) = 24; break;
			case'f':*(bv_number + i) = 0 ; break;
			case'g':*(bv_number + i) = 47; break;
			case'h':*(bv_number + i) = 27; break;
			case'i':*(bv_number + i) = 22; break;
			case'j':*(bv_number + i) = 41; break;
			case'k':*(bv_number + i) = 16; break;
			case'm':*(bv_number + i) = 11; break;
			case'n':*(bv_number + i) = 37; break;
			case'o':*(bv_number + i) = 2 ; break;
			case'p':*(bv_number + i) = 35; break;
			case'q':*(bv_number + i) = 21; break;
			case'r':*(bv_number + i) = 17; break;
			case's':*(bv_number + i) = 33; break;
			case't':*(bv_number + i) = 30; break;
			case'u':*(bv_number + i) = 48; break;
			case'v':*(bv_number + i) = 23; break;
			case'w':*(bv_number + i) = 55; break;
			case'x':*(bv_number + i) = 32; break;
			case'y':*(bv_number + i) = 14; break;
			case'z':*(bv_number + i) = 19; break;
			default:error = 1;break;
		}
	}

	*(bv_sum + 0) = *(bv_number + 0) * pow(58, 6);
	*(bv_sum + 1) = *(bv_number + 1) * pow(58, 2);
	*(bv_sum + 2) = *(bv_number + 2) * pow(58, 4);
	*(bv_sum + 3) = *(bv_number + 3) * pow(58, 8);
	*(bv_sum + 4) = *(bv_number + 4) * pow(58, 5);
	*(bv_sum + 5) = *(bv_number + 5) * pow(58, 9);
	*(bv_sum + 6) = *(bv_number + 6) * pow(58, 3);
	*(bv_sum + 7) = *(bv_number + 7) * pow(58, 7);
	*(bv_sum + 8) = *(bv_number + 8) * pow(58, 1);
	*(bv_sum + 9) = *(bv_number + 9) * pow(58, 0);

	for (i = 0; i < 10; i++)
	{
		sum += *(bv_sum + i);
	}
	sum -= 100618342136696320;
	sum ^= 177451812;

	printf("AV%lld\n", sum);
	return 0;
}
