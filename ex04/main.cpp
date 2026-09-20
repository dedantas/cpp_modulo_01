#include <iostream>
#include <fstream>
#include <string>

std::string	replaceAll( std::string content, const std::string& s1, const std::string& s2 )
{
	std::string	result;
	size_t		pos = 0;
	size_t		found;

	while ( (found = content.find(s1, pos)) != std::string::npos )
	{
		result += content.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	result += content.substr(pos);
	return result;
}

int	main( int argc, char** argv )
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string	filename  = argv[1];
	std::string	s1        = argv[2];
	std::string	s2        = argv[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty." << std::endl;
		return 1;
	}

	std::ifstream	infile( filename.c_str() );
	if (!infile.is_open())
	{
		std::cerr << "Error: cannot open file '" << filename << "'." << std::endl;
		return 1;
	}

	std::string	content( (std::istreambuf_iterator<char>(infile)),
						   std::istreambuf_iterator<char>() );
	infile.close();

	std::string		outname = filename + ".replace";
	std::ofstream	outfile( outname.c_str() );
	if (!outfile.is_open())
	{
		std::cerr << "Error: cannot create file '" << outname << "'." << std::endl;
		return 1;
	}

	outfile << replaceAll(content, s1, s2);
	outfile.close();

	return 0;
}
