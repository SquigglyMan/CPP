/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:42:03 by llarue            #+#    #+#             */
/*   Updated: 2024/09/11 10:43:13 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("ShrubberyCreationForm", 145, 137) {
	std::cout << ORANGE << "ShrubberyCreationForm Default constructor" << COLOR_RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : AForm(src) {
	std::cout << BLUE << "ShrubberyCreationForm Copy constructor" << COLOR_RESET << std::endl;
	*this = src;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("ShrubberyCreationForm", 145, 137) {
	std::cout << PURPLE << "ShrubberyCreationForm parameter constructor" << COLOR_RESET << std::endl;
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << ORANGE << "ShrubberyCreationForm Default destructor" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm & src ) {
	std::cout << GREEN << "ShrubberyCreationForm copy assignment operator" << COLOR_RESET << std::endl;
	if (this != &src)
	{
		this->_target = src._target;
	}
	return (*this);
}

void ShrubberyCreationForm::executeForm( void ) const {
	std::ofstream	outputFile;

	outputFile.open(std::string(this->_target + "_shrubbery").c_str(), std::ofstream::out);
	if (!outputFile.good())
	{
		std::cout << "Error with output file" << std::endl;
		return ;
	}
	outputFile << GREEN <<
	"\n"
	"			        # #### ####\n"
    "			      ###" << BROWN << " \\/" << GREEN << "#" << BROWN << "|" << GREEN << "### " << BROWN << "|/" << GREEN << "####\n"
    "			     ##" << BROWN << "\\/" << GREEN << "#" << BROWN << "/ \\||/" << GREEN << "##" << BROWN << "/_/" << GREEN << "##" << BROWN << "/" << GREEN << "_#\n"
    "			   ###  " << BROWN << "\\/" << GREEN << "###" << BROWN << "|/ \\/" << GREEN << "# ###\n"
    "			 ##" << BROWN << "_\\_" << GREEN << "#" << BROWN << "\\_\\" << GREEN << "## " << BROWN << "| " << GREEN << "#" << BROWN << "/" << GREEN << "###" << BROWN << "_/_" << GREEN << "####\n"
    "			## #### #" << BROWN << " \\" << GREEN <<  " #" << BROWN << "| /" << GREEN <<  " #### ##" << BROWN << "/" << GREEN << "##\n"
    "			 __#_--###`  " << BROWN << "|{" << GREEN << ",###---###-~\n"
	<< BROWN <<
    "			           \\ }{\n"
    "			            }}{\n"
    "			            }}{\n"
    "			            {{}\n"
    "			      , -=-~{ .-^- _\n"
    "			            `}\n"
    "			             {\n"
	<< COLOR_RESET << std::endl;
	outputFile.close();
}