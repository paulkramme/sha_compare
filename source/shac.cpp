#include<iostream>
#include<string.h>

int main(int argc, char *argv[])
{
     if(argc != 3)
     {
          std::cout << "USAGE: " << argv[0] << " shasum1 shasum2" << std::endl;
     }
     else
     {
          std::string shasum1 = argv[1];
          std::string shasum2 = argv[2];
          if(shasum1 == shasum2) //BECAUSE THEY ARE POINTERS!!!!!!!!
          {
               std::cout << "SUCCESS" << std::endl;
          }
          else
          {
               std::cout << "FAILURE" << std::endl;
          }
     }
     return 0;
}
