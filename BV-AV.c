#include<stdio.h>
#include<stdlib.h>                      //system()
#define nodebug                           //debug用
#define GCC//GCC编译或VS编译

long long mi(long long n, int i);       //次方运算
int bv2av(void);
int av2bv(void);

int main()
{
    char a;                             //a判断
    FILE *fp;                           //fp文件控制
    char read[20];                      //read读取

    while(1)
    {
        system("cls");
        #ifdef GCC
            printf("1.BV TO AV\n2.AV TO BV\n3.HISTORY\n4.DELETE HISTORY\n0.ESC\n");
        #else
            printf("1.BV转AV\n2.AV转BV\n3.历史记录\n4.删除记录\n0.退出\n");
        #endif
        scanf("%d", &a);

        if (a == 1)
            bv2av();
        else if (a == 2)
            av2bv();
        else if (a == 3)
        {
            fp=fopen("history.txt","r");
            if (fp == NULL)
            {
                #ifdef GCC
                    printf("Cannot open 'history.txt'\n");
                #else
                    printf("无法找到该文件 'history.txt' \n");
                #endif
                system("pause");
                continue;
            }

            while (fgets(read, 20, fp))
                printf(read);

            fclose(fp);
            system("pause");
        }
        else if (a == 4)
        {
            if (remove("history.txt") == 0)
            {
                #ifdef GCC
                    printf("Delete successful\n");
                #else
                    printf("删除成功\n");
                #endif
                system("pause");
            }
            else
            {
                #ifdef GCC
                    printf("Fail to delete, cannot find 'history.txt'\n");
                #else
                    printf("删除失败,未找到该文件 'history.txt' \n");
                #endif
                system("pause");
            }
        }
        else if (a == 0)
            return 0;
        else
        {
            #ifdef GCC
                printf("Error, please input again\n");
            #else
                printf("输入错误,请重新输入!\n");
            #endif
            system("pause");
            continue;
        }
    }
}

int bv2av(void)
{
    char bv[11];                        //bv：bv号
    int i, b[10];                       //i：循环 b：对照后保存的数
    long long a[10];                    //乘法运算
    long long arr;                      //加减运算
    FILE *fp;                           //fp文件控制

start:
    system("cls");

    arr = 0;
    printf("BV");
    scanf("%s", bv);

    for (i = 0; i < 10; i++)             //字符对照表
    {
        if (bv[i] == '1')
            b[i] = 13;
        else if (bv[i] == '2')
            b[i] = 12;
        else if (bv[i] == '3')
            b[i] = 46;
        else if (bv[i] == '4')
            b[i] = 31;
        else if (bv[i] == '5')
            b[i] = 43;
        else if (bv[i] == '6')
            b[i] = 18;
        else if (bv[i] == '7')
            b[i] = 40;
        else if (bv[i] == '8')
            b[i] = 28;
        else if (bv[i] == '9')
            b[i] = 5;
        else if (bv[i] == 'A')
            b[i] = 54;
        else if (bv[i] == 'B')
            b[i] = 20;
        else if (bv[i] == 'C')
            b[i] = 15;
        else if (bv[i] == 'D')
            b[i] = 8;
        else if (bv[i] == 'E')
            b[i] = 39;
        else if (bv[i] == 'F')
            b[i] = 57;
        else if (bv[i] == 'G')
            b[i] = 45;
        else if (bv[i] == 'H')
            b[i] = 36;
        else if (bv[i] == 'J')
            b[i] = 42;
        else if (bv[i] == 'K')
            b[i] = 51;
        else if (bv[i] == 'L')
            b[i] = 42;
        else if (bv[i] == 'M')
            b[i] = 49;
        else if (bv[i] == 'N')
            b[i] = 52;
        else if (bv[i] == 'P')
            b[i] = 53;
        else if (bv[i] == 'Q')
            b[i] = 7;
        else if (bv[i] == 'R')
            b[i] = 4;
        else if (bv[i] == 'S')
            b[i] = 9;
        else if (bv[i] == 'T')
            b[i] = 50;
        else if (bv[i] == 'U')
            b[i] = 10;
        else if (bv[i] == 'V')
            b[i] = 44;
        else if (bv[i] == 'W')
            b[i] = 34;
        else if (bv[i] == 'X')
            b[i] = 6;
        else if (bv[i] == 'Y')
            b[i] = 25;
        else if (bv[i] == 'Z')
            b[i] = 1;
        else if (bv[i] == 'a')
            b[i] = 26;
        else if (bv[i] == 'b')
            b[i] = 29;
        else if (bv[i] == 'c')
            b[i] = 56;
        else if (bv[i] == 'd')
            b[i] = 3;
        else if (bv[i] == 'e')
            b[i] = 24;
        else if (bv[i] == 'f')
            b[i] = 0;
        else if (bv[i] == 'g')
            b[i] = 47;
        else if (bv[i] == 'h')
            b[i] = 27;
        else if (bv[i] == 'i')
            b[i] = 22;
        else if (bv[i] == 'j')
            b[i] = 41;
        else if (bv[i] == 'k')
            b[i] = 16;
        else if (bv[i] == 'm')
            b[i] = 11;
        else if (bv[i] == 'n')
            b[i] = 37;
        else if (bv[i] == 'o')
            b[i] = 2;
        else if (bv[i] == 'p')
            b[i] = 35;
        else if (bv[i] == 'q')
            b[i] = 21;
        else if (bv[i] == 'r')
            b[i] = 17;
        else if (bv[i] == 's')
            b[i] = 33;
        else if (bv[i] == 't')
            b[i] = 30;
        else if (bv[i] == 'u')
            b[i] = 48;
        else if (bv[i] == 'v')
            b[i] = 23;
        else if (bv[i] == 'w')
            b[i] = 55;
        else if (bv[i] == 'x')
            b[i] = 32;
        else if (bv[i] == 'y')
            b[i] = 14;
        else if (bv[i] == 'z')
            b[i] = 19;
        else
        {
            #ifdef GCC
                printf("Error, please chick your input\n");
            #else
                printf("输入错误，请检查输入!\n");
            #endif
            system("pause");
            goto start;
        }
    #ifdef debug
        printf("b[%d]=%d\n", i, b[i]);
    #endif
    }

    a[0] = b[0] * mi(58, 6); 
    a[1] = b[1] * mi(58, 2);
    a[2] = b[2] * mi(58, 4);
    a[3] = b[3] * mi(58, 8);
    a[4] = b[4] * mi(58, 5);
    a[5] = b[5] * mi(58, 9);
    a[6] = b[6] * mi(58, 3);
    a[7] = b[7] * mi(58, 7);
    a[8] = b[8] * mi(58, 1);
    a[9] = b[9] * mi(58, 0);

#ifdef debug
    for (i = 0; i < 10; i++)
        printf("a[%d]=%lld\n", i, a[i]);
#endif

    for (i = 0; i < 10; i++)
        arr += a[i];         

    arr -= 100618342136696320;

    arr ^= 177451812;        

    printf("AV%lld\n", arr);

    fp = fopen("history.txt", "a");       //写入history.txt文件
    if (fp == NULL)
    {
        #ifdef GCC
            printf("Error, cannot open 'history.txt'. Exiting program\n");
        #else
            printf("打开文件 'history.txt' 错误\n正在退出程序\n");
        #endif
        system("pause");
        return -1;
    }

    fprintf(fp, "BV%s -> AV%lld\n", bv, arr);

    fclose(fp);
    system("pause");
}

int av2bv(void)
{
    int av, av_read, i, a[10];           //av输入 av_read输入读取 i控制循环 a除法计算
    long long arr;                       //arr加减运算
    char b[10];                          //b对照结果
    FILE *fp;

    system("cls");

    printf("AV");
    scanf("%d", &av);

    av_read = av;
    av ^= 177451812;
    arr = av + 100618342136696320;

#ifdef debug
    printf("arr=%lld\n", arr);
#endif

    for (i = 0; i < 10; i++)
        a[i] = arr / mi(58, i) % 58;

#ifdef debug
    for(i = 0; i < 10; i++)
        printf("a[%d]=%d\n", i, a[i]);
#endif

    for (i = 0; i < 10; i++)              //对照表
    {
        if (a[i] == 0)
            b[i] = 'f';
        else if (a[i] == 1)
            b[i] = 'Z';
        else if (a[i] == 2)
            b[i] = 'o';
        else if (a[i] == 3)
            b[i] = 'd';
        else if (a[i] == 4)
            b[i] = 'R';
        else if (a[i] == 5)
            b[i] = '9';
        else if (a[i] == 6)
            b[i] = 'X';
        else if (a[i] == 7)
            b[i] = 'Q';
        else if (a[i] == 8)
            b[i] = 'D';
        else if (a[i] == 9)
            b[i] = 'S';
        else if (a[i] == 10)
            b[i] = 'U';
        else if (a[i] == 11)
            b[i] = 'm';
        else if (a[i] == 12)
            b[i] = '2';
        else if (a[i] == 13)
            b[i] = '1';
        else if (a[i] == 14)
            b[i] = 'y';
        else if (a[i] == 15)
            b[i] = 'C';
        else if (a[i] == 16)
            b[i] = 'k';
        else if (a[i] == 17)
            b[i] = 'r';
        else if (a[i] == 18)
            b[i] = '6';
        else if (a[i] == 19)
            b[i] = 'z';
        else if (a[i] == 20)
            b[i] = 'B';
        else if (a[i] == 21)
            b[i] = 'q';
        else if (a[i] == 22)
            b[i] = 'i';
        else if (a[i] == 23)
            b[i] = 'v';
        else if (a[i] == 24)
            b[i] = 'e';
        else if (a[i] == 25)
            b[i] = 'Y';
        else if (a[i] == 26)
            b[i] = 'a';
        else if (a[i] == 27)
            b[i] = 'h';
        else if (a[i] == 28)
            b[i] = '8';
        else if (a[i] == 29)
            b[i] = 'b';
        else if (a[i] == 30)
            b[i] = 't';
        else if (a[i] == 31)
            b[i] = '4';
        else if (a[i] == 32)
            b[i] = 'x';
        else if (a[i] == 33)
            b[i] = 's';
        else if (a[i] == 34)
            b[i] = 'W';
        else if (a[i] == 35)
            b[i] = 'p';
        else if (a[i] == 36)
            b[i] = 'H';
        else if (a[i] == 37)
            b[i] = 'n';
        else if (a[i] == 38)
            b[i] = 'J';
        else if (a[i] == 39)
            b[i] = 'E';
        else if (a[i] == 40)
            b[i] = '7';
        else if (a[i] == 41)
            b[i] = 'j';
        else if (a[i] == 42)
            b[i] = 'L';
        else if (a[i] == 43)
            b[i] = '5';
        else if (a[i] == 44)
            b[i] = 'V';
        else if (a[i] == 45)
            b[i] = 'G';
        else if (a[i] == 46)
            b[i] = '3';
        else if (a[i] == 47)
            b[i] = 'g';
        else if (a[i] == 48)
            b[i] = 'u';
        else if (a[i] == 49)
            b[i] = 'M';
        else if (a[i] == 50)
            b[i] = 'T';
        else if (a[i] == 51)
            b[i] = 'K';
        else if (a[i] == 52)
            b[i] = 'N';
        else if (a[i] == 53)
            b[i] = 'P';
        else if (a[i] == 54)
            b[i] = 'A';
        else if (a[i] == 55)
            b[i] = 'w';
        else if (a[i] == 56)
            b[i] = 'c';
        else
            b[i] = 'F';
    }
    printf("BV%c%c%c%c%c%c%c%c%c%c\n", b[6], b[2], b[4], b[8], b[5], b[9], b[3], b[7], b[1], b[0]);

    fp = fopen("history.txt", "a");             //写入history.txt文件
    if (fp == NULL)
    {
        #ifdef GCC
            printf("Error, cannot open 'history.txt'. Exiting program\n");
        #else
            printf("打开文件 'history.txt' 错误\n正在退出程序\n");
        #endif
        system("pause");
        return -1;
    }

    fprintf(fp, "AV%d -> BV%c%c%c%c%c%c%c%c%c%c\n", av_read, b[6], b[2], b[4], b[8], b[5], b[9], b[3], b[7], b[1], b[0]);

    fclose(fp);
    system("pause");
}

long long mi(long long n, int i)                //次方运算
{
    long long j;
    int a;
    for(a=0, j=1; a<i; a++)
        j=j*n;
    return j;
}