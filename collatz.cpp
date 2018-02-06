
#include "collatz.h"

int collatz::get_num(int num)
{
	if (num ==1 )
		return 1;
	if (num %2 == 0)
		return  num/2 ;
	else
		return (3*num) + 1;
}

void collatz::print_num(int num)
{
	std::cout << "collatz numbers for " << num << " is : " << endl ;
  std::cout << num <<", " ;
	while (num >1 )
	{
		num = get_num(num);
        if (num >1)
            std::cout << num <<", ";
        else
            std::cout << num <<"." ;
	}
    std::cout << endl ;
    std::cout << endl ;
}
