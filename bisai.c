//请找到一个大于 2022 的最小数，这个数转换成十六进制之后，所有的数位（不含前导 0）都为字母（A 到 F）。
int main()
{
    int n = 2022;
    while(1)
    {
        n++;
        if(n % 16 == 10 || n % 16 == 11 || n % 16 == 12 || n % 16 == 13 || n % 16 == 14 || n % 16 == 15)
        {
            if((n / 16) % 16 == 10 || (n / 16) % 16 == 11 || (n / 16) % 16 == 12 || (n / 16) % 16 == 13 || (n / 16) % 16 == 14 || (n / 16) % 16 == 15)
            {
                if((n / 256) % 16 == 10 || (n / 256) % 16 == 11 || (n / 256) % 16 == 12 || (n / 256) % 16 == 13 || (n / 256) % 16 == 14 || (n / 256) % 16 == 15)
                {
                    if((n / 4096) % 16 == 10 || (n / 4096) % 16 == 11 || (n / 4096) % 16 == 12 || (n / 4096) % 16 == 13 || (n / 4096) % 16 == 14 || (n / 4096) % 16 == 15)
                    {
                        printf("%d", n);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}