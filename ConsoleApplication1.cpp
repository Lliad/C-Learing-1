// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <math.h>

int addSum();
void count();
void signAndUnsign();
void init();
void test();

int i = 42;

int main()
{
    int sum = 0;

    //sum = addSum();
    //std::cout << "Sum is " << sum << std::endl;

    //count();

    //signAndUnsign();

    init();
#if 0
    int i = 100;
    int j = i;
    std::cout << j << std::endl;

    test();
#endif
    return 0;
}

int addSum()
{
    int sum = 0;
    int temp = 0;

    while (std::cin >> temp)
    {
        if (temp == 0)
        {
            break;
        }
        sum += temp;
    }

    return sum;
}

void count()
{
    int val = 0;
    int currVal = 0;

    if (std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (currVal == val)
            {
                ++cnt;
            }
            else
            {
                std::cout << currVal << "occurs" << cnt << "times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }

        std::cout << currVal << "occurs" << cnt << "times" << std::endl;
    }
}

void signAndUnsign()
{
    unsigned u = 10;
    unsigned u2 = 42;

    long long mod = pow(2.0, 32.0);
    std::cout << mod << std::endl;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;


    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
}

void init()
{
#if 0
    //std::cin >> int input_value;
    //int i = { 3.14 };
    int j = 3.14;
    //double s = w = 3.14;

    int ival = 1.01;
    std::cout << ival << std::endl;
#endif

    int i = 0, & r1 = i;
    double d = 0, & r2 = d;

    r2 = 3.14;
    r2 = r1;
    i = r2;
    r1 = d;
    std::cout << "4" << std::endl;
}

void test()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
    {
        sum += i;
    }
    std::cout << i << " " << sum << std::endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
