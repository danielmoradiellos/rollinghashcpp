#include <string>
#include <iostream>

int main(void)
{
	std::string s = "PHARMACIE VANDERKINDERE";
	std::string sub_str = s;
	int Windowsize = 5;
	for(int i=0 ; i < s.length();i++)
	{
		sub_str = s.substr(i,Windowsize);
//		std::cout << "i = " << i << " and i + Windowsize = "  <<  i + Windowsize << std::endl; 
		std::cout << sub_str.c_str() << std::endl;

	}



	
}
