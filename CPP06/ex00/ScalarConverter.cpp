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
	if (type == TYPE_SP_FLOAT || type == TYPE_SP_DB)
	{
		printSpecial(literal, type);
		return ;
	}
	if (type == TYPE_CHAR)
	{
		char c = parseChar(literal);
		printChar(c);
		return c;
	}
	if (type == TYPE_INT)
	{
		
	}
	if (type )
}