#include<bits/stdc++.h>
using namespace std;
void fun1(int m)
{

    if(m==0) return ;
    fun1(m-1);
    int res=pow(2,(m-1));
    printf("%d ",1*res);
}
void fun(int n)
{
    if(n==0) return ;
    fun1(n);
    puts("");
    fun(n-1);

   cout<<endl;
}
int main()
{
    int n;
    cin>>n;
   fun(n);
}
