#include <iostream>
#include <iomanip>
int main(){
int a[5]={0};
std::cout<<"элемент"<<std::setw(20)<<"значение"<<std::endl;
for (int i=0;i<5;i++)
std::cout<<std::setw(4)<<i<< std::setw(11)<<a[i]<<std::endl;




return 0;
}
