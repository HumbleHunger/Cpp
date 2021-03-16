#include <iostream>
#include <pthread.h>
using namespace std;
void fun2();
void fun3();
void *fun1(void *arg)
{
    cout << "fun1" << endl;
    fun2();
}
void fun2()
{
    cout << "fun2" << endl;
    fun3();
}
void fun3()
{
    cout << "fun3" << endl;
}

int main()
{
    std::cout << "Hello world" << std::endl;
    pthread_t tid;
    pthread_create(&tid,NULL,fun1,NULL);
    return 0;
}

