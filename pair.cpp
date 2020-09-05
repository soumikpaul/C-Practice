#include <iostream>
#include <utility>
using namespace std;
int main()
{
pair <string, int> s("Soumik", 5);
cout<<s.first<< " ->  ";
pair <int, int> p;
p=make_pair(3,9);
cout<<s.second<<endl;
cout<<p.first<< "^2 = ";
cout<<p.second<<endl;
}
