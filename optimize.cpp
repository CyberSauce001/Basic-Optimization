int summation(int n)
{
    //summation of 1 to n
    int sum=0;
    for (int j=1; j<=n; j++) {
        sum += j;
    }
    return sum;
    /* use n(n+1)/2 formula to remove for loop*/
}

int loop_unrroling(int n)
{
    int sum=0;
    int x=25;
    for (int j=0; j<4; j++) {
        sum += x;
    }
    return sum;
    //What are 2 ways to optimize this?
    //sum = x+x+x+x;
    //sum = x*4
}

int pointer_use()
{
    //Array index to pointer addition:
    const int SIZE = 10;
    int sum = 0;
    int array[SIZE]={4,5,6,3,2,9,7,6,5,4};
    for (int j=0; j<SIZE; j++) {
        sum += array[j];
    }
    return sum;

    //int *p = arr;
    //sum += *p
    //++p;
}

void mult_div()
{
    //Multiply and div by 2: x >>=1,
    //multiply x by 2: x = x+x, x = x*2, x = (x<<1), 
    int x =12345;
    x = x*2
}

void toggle(int *x)
{
    //toggle x between 0 and 1
    if(*x == 0)
        *x = 1;
    else
        *x = 0;
    //x =!x
    //ternary?
    
    //with XOR?
    //x=x^1
}

int bitwise_operators(int x)
{
    int result;
    result = x % 2;
    return result;
    //x = x%2
    // x = x & 0x01

}

void swap_variables(int *x, int *y)
{
    //swap x and y
    int temp = *x;
    *x = *y;
    *y = temp;
}
