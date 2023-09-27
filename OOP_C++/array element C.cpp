#include<iostream>
using namespace std;
int main()
{
int num[]={24,34,43};
int i;
for(i=1;i<=5;i++)
{
print("address=%u",&num[i]);
print("element=%d%d",num[i],*(num+1));
print("%d%d\n",*(i+num),i[num]);

}
return 0;
}