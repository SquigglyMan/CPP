/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:30:15 by llarue            #+#    #+#             */
/*   Updated: 2025/03/31 11:54:26 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ) : _validDataFile(false), _validInputFile(false) {
	std::cout << ORANGE << "BitcoinExchange default constructor" << COLOR_RESET << std::endl;
	
	std::ifstream	data("data.csv");
	
	if (!data.good())
	{
		std::cout << "Error: could not read data file" << std::endl;
		return ;
	}
	
	string	line;

	std::getline(data, line);
	if (line != "date,exchange_rate")
	{
		data.close();
		std::cout << "Error: invalid data file format" << std::endl;
		return ;
	}
	while(std::getline(data, line))
	{
		if (line == "\n")
			continue;
		string::size_type pos = line.find(',');

		string	date = strTrim(line.substr(0, pos));
		if (!validDataDate(date))
			continue; ;
		string	exchangeRate = strTrim(line.substr(pos + 1, line.length()));
		if (!validExchangeRate(exchangeRate))
			continue; ;

		_data[date] = exchangeRate;
	}

	this->_validDataFile = true;
	if (_data.empty()) {
		std::cout << "Error: data file has no valid entries" << std::endl;
		_validDataFile = false;
	}
	data.close();
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const & src ) {
	std::cout << PURPLE << "BitcoinExchange copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

BitcoinExchange::~BitcoinExchange( void ) {
	std::cout << ORANGE << "BitcoinExchange default destructor" << COLOR_RESET << std::endl;
}

BitcoinExchange	&BitcoinExchange::operator=( BitcoinExchange const & src ) {
	std::cout << BLUE << "BitcoinExchange copy assignment operator" << COLOR_RESET << std::endl;
	if (this != &src)
	{
		this->_data = src._data;
		this->_validDataFile = src._validDataFile;
		this->_validInputFile = src._validInputFile;
	}
	return (*this);
}

string	BitcoinExchange::strTrim( string const & s ) {
	string::size_type	first = s.find_first_not_of(' ');

	if (string::npos == first)
		return (s);
	
	string::size_type	last = s.find_last_not_of(' ');
	
	return (s.substr(first, (last - first + 1)));
}

bool	BitcoinExchange::getValidDataStatus( void ) {
	return (this->_validDataFile);
}

void	BitcoinExchange::execute( const string & inputFilename ) {
	std::cout << "Execute" << std::endl;
	validInputFile(inputFilename);
}

void	BitcoinExchange::validInputFile( const string & inputFilename) {
	std::ifstream	inputFile(inputFilename.c_str());
	
	if (!inputFile.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return ;
	}

	if (inputFile.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << "Error: input file is empty" << std::endl;
		return ;
	}
	
	string	line;

	std::getline(inputFile, line);

	if (line != "date | value")
	{
		std::cout << "Error: invalid input file format" << std::endl;
		return ;
	}

	while (std::getline(inputFile, line))
	{
		string::size_type pos = line.find('|');
		
		if (pos == string::npos)
			std::cout << "Error: bad input => " << line << std::endl;
		
		string	date = strTrim(line.substr(0, pos));
		string	value = strTrim(line.substr(pos + 1));

		if(validFileDate(date))
		{
			if (validFileValue(value)) {
				std::map< string, string >::iterator lowerDate = _data.lower_bound(date);
				if (lowerDate == _data.end() || (lowerDate->first > date && lowerDate != _data.begin()))
					--lowerDate;
				std::cout << date << " => " << value << " = " << strtod(lowerDate->second.c_str(), NULL) * strtod(value.c_str(), NULL) << std::endl;
			}
		}
		
	}

	inputFile.close();
}

bool	validDataDate( string date ) {
	double	year = strtod(date.c_str(), NULL);
	if (year < 2009 || year > 2024) 
		return (std::cout << "Error: data file contains invalid year" << std::endl, false);

	size_t	first = date.find_first_of('-');
	size_t	last = date.find_last_of('-');

	double	month = strtod((date.substr(first + 1, last)).c_str(), NULL);

	if (month < 1 || month > 12)
		return (std::cout << "Error: data file contains invalid month" << std::endl, false);

	double	day = strtod(date.substr(last + 1, date.length()).c_str(), NULL);

	if (month == 2 && (day < 1 || day > 28))
		return (std::cout << "Error: Invalid data file: February only has 28 days during an ordinary year" << std::endl, false);
		
	else if ((year == 2000 || year == 2004 || year == 2008 || year == 2012 || year == 2016 || year == 2020 || year == 2024) && month == 2 && (day < 1 || day > 29))
		return (std::cout << "Error: Invalid data file: February only has 29 days during a leap year" << std::endl, false);
		
	if (day < 1 || day > 31)
		return (std::cout << "Error: data file contains invalid day" << std::endl, false);
	return (true);
}

bool	validExchangeRate( string exchangeRate ) {
	double	value = strtod(exchangeRate.c_str(), NULL);

	if (value < 0)
		return (std::cout << "Error: data file contains invalid exchange rate" << std::endl, false);
	return (true);
}

bool	validFileDate( string date ) {
	double	year = strtod(date.c_str(), NULL);
	
	if (year < 2009 || year > 2024)
		return (std::cout << "Error: Invalid input date" << std::endl, false);


	size_t	first = date.find_first_of('-');
	size_t	last = date.find_last_of('-');

	double	month = strtod((date.substr(first + 1, last)).c_str(), NULL);

	if (month < 1 || month > 12)
		return (std::cout << "Error: Invalid input date" << std::endl, false);

	double	day = strtod(date.substr(last + 1, date.length()).c_str(), NULL);

	if (month == 2 && (day < 1 || day > 28))
		return (std::cout << "Error: Invalid input date: February only has 28 days during an ordinary year" << std::endl, false);
		
	else if ((year == 2000 || year == 2004 || year == 2008 || year == 2012 || year == 2016 || year == 2020 || year == 2024) && month == 2 && (day < 1 || day > 29))
		return (std::cout << "Error: Invalid input date: February only has 29 days during a leap year" << std::endl, false);
	
	else if (day < 1 || day > 31)
		return (std::cout << "Error: Invalid input date" << std::endl, false);

	return (true);
}

bool	validFileValue( string inputValue ) {
	double	value = strtod(inputValue.c_str(), NULL);

	if (value < 0)
		return (std::cout << "Error: not a positive number." << std::endl, false);
	else if (value > 1000)
		return (std::cout << "Error: too large a number." << std::endl, false);

	return (true);
		
}