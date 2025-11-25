#include "ScalarConverter.hpp"

static bool isValidChar(const std::string &input)
{
	if (input.length() != 1)
		return false;
	unsigned char c = static_cast<unsigned char>(input[0]);
	if (!std::isprint(c))
		return false;
	if (std::isdigit(c))
		return false;
	return true;
}

static bool isValidInt(const std::string& input)
{
	if (input.empty())
		return false;
	int i = 0;
	if (input[i] == '+' || input[i] == '-')
		i++;
	if (i == input.length())
		return false;
	while (i < input.length())
	{
		if (!isdigit(input[i]))
			return false;
		i++;
	}
	return true;
}

static bool isDot(const std::string& input)
{
	if (input.empty())
		return false;
	int i = 0;
	if (input[i] == '+' || input[i] == '-')
		i++;
	if (i == input.length())
		return false;
	bool bef_digit = false;
	bool af_digit = false;
	while (i < input.length() && isdigit(input[i]))
	{
		bef_digit = true;
		i++;
	}
	if (i < input.length() && input[i] == '.')
	{
		i++;
		for (;i < input.length() && isdigit(input[i]); i++)
			af_digit = true;
	}
	if (i != input.length())
		return false;
	if (bef_digit == false && af_digit == false)
		return false;
	return true;
}

static bool isValidFloat(const std::string& input)
{
	if (input.empty())
		return false;
	if (input[input.length() - 1] != 'f')
		return false;
	std::string core = input.substr(0, input.length() - 1);
	if (!isDot(core))
		return false;
	return true;
}

static bool isValidDouble(const std::string& input)
{
	if (input.empty())
		return false;
	if (input.find('f') != std::string::npos)
		return false;
	if (!input.find('.') == std::string::npos)
		return false;
	return isDot(input);
}

static bool isSpecialFloat(const std::string& s)
{
	if (s == "nanf" || s == "+inff" || s == "-inff")
		return true;
	return false;
}

static bool isSpecialDouble(const std::string& s)
{
	if (s == "nan" || s == "+inf" || s == "-inf")
		return true;
	return false;
}

static LiteralType detectType(const std::string& input)
{
	if (isSpecialFloat(input))
		return TYPE_SP_FLOAT;
	else if (isSpecialDouble(input))
		return TYPE_SP_DB;
	else if (isValidChar(input))
		return TYPE_CHAR;
	else if (isValidFloat(input))
		return TYPE_FLOAT;
	else if (isValidDouble(input))
		return TYPE_DOUBLE;
	else if (isValidInt(input))
		return TYPE_INT;
	return TYPE_INVALID;
}

static char parseChar(const std::string& input)
{
	return input[0];
}

static std::pair<bool, int> parseInt(const std::string& input)
{
	long long	tmp;
	std::istringstream iss(input);
	iss >> tmp;
	if (iss.fail())
		return std::make_pair(false, 0);
	if (tmp < INT_MIN || tmp > INT_MAX)
		return std::make_pair(false, 0);
	return std::make_pair(true, static_cast<int>(tmp));
}

static std::pair<bool, float> parseFloat(const std::string& input)
{
	std::string core = input.substr(0, input.length() - 1);
	double tmp = parseDouble(core).second;
	const double maxF = std::numeric_limits<float>::max();
	const double minF = -maxF;
	if (tmp > maxF || tmp < minF)
		return std::make_pair(false, 0.0f);
	return std::make_pair(true, static_cast<float>(tmp));
}

static std::pair<bool, double> parseDouble(const std::string& input)
{
	std::string str_d = input;
	char* end = 0;
	errno = 0;
	double tmp = std::strtod(str_d.c_str(), &end);
	if (end == str_d.c_str() || *end != '\0')
		return std::make_pair(false, 0.0);
	if (errno == ERANGE)
		return std::make_pair(false, 0.0);
	return std::make_pair(true, static_cast<double>(tmp));
}

static float parseSpFloat(const std::string& input)
{
	if (input == "nanf")
		return std::
}

void ScalarConverter::convert(std::string& literal)
{
	LiteralType type = detectType(literal);
	if (type == TYPE_INVALID)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	if (type == TYPE_SP_FLOAT)
	{
		float sf = parseSpFloat(literal);
		return ;
	}
	if (type == TYPE_SP_DB)
	{
		double sd = parseSpDouble(literal);
		return ;
	}
	if (type == TYPE_CHAR)
	{
		char c = parseChar(literal);
		displayChar(c);
		return ;
	}
	if (type == TYPE_INT)
	{
		bool success = parseInt(literal).first;
		int i = parseInt(literal).second;
		if (success == false)
		{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible" << std::endl;
			std::cout << "float : impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return ;
		}
		displayInt(i);
		return ;
	}
	if (type == TYPE_FLOAT)
	{
		bool sucess = parseFloat(literal).first;
		float f = parseFloat(literal).second;
		if (sucess == false)
		{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible" << std::endl;
			std::cout << "float : impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return ;
		}
		displayFloat(f);
		return ;
	}
	if (type == TYPE_DOUBLE)
	{
		bool sucess = parseDouble(literal).first;
		double d = parseDouble(literal).second;
		if (sucess == false)
		{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible" << std::endl;
			std::cout << "float : impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return ;-
		}
		displayDouble(d);
		return ;
	}
	if (type == TYPE_INVALID)
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
}