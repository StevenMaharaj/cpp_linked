#include <cstdio>

using namespace std;

void func(int &i)
{
    printf("para value %d \n", i);
    i = 73;
    printf("para value %d \n", i);
}

int main(int argc, char const *argv[])
{
    int i = 42;
    puts("this is main()");
    func(i);
    return 0;
}
