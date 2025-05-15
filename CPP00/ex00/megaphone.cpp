#include <iostream>

int main(int argc, char* argv[])
{
	int	i;
	int	j;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
			{
				std::cout << static_cast<char>(std::toupper(argv[i][j]));
			}
		}
	}
	std::cout << "\n";
    return 0;
}

// int main(int argc, char* argv[])
// {
// 	int	i;
// 	int	j;
// 	char c;

// 	i = 0;
// 	if (argc == 1)
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
// 	else
// 	{
// 		while (argv[++i])
// 		{
// 			j = -1;
// 			while (argv[i][++j])
// 			{
// 				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
// 				{
// 					c = argv[i][j] - 32;
// 					std::cout << c;
// 				}
// 				else
// 					std::cout << argv[i][j];
// 			}
// 		}
// 	}
// 	std::cout << "\n";
//     return 0;
// }