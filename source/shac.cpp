#include<iostream>
#include<string.h>

int main()
{
     std::string shasum1, shasum2;
     std::cin >> shasum1 >> shasum2;
     if(shasum1 == shasum2)
     {
          std::cout << "SUCCESS" << std::endl;
     }
     else
     {
          std::cout << "FAILURE" << std::endl;
     }
     return 0;
}
