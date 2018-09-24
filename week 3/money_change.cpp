#include <iostream>

int get_change(int m)
{
int coin[]={4,3},i,count=0;

for(i=0;m>0;i++)
{
  if(m>=coin[i])
 {
  count+=m/coin[i];
  m=m%coin[i];
 }
  else
  { m=m-1;
    count++;
  }

}

 return count;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
