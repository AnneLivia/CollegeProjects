/*This modulus has math functions*/

int fatorial(int n)
{
    if(n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

int power(int n, int p)
{
    if(p == 0)
        return 1;
    else
        return n * power(n, p - 1);
}
