#include <print.hpp>
void print(const std::string& text, std::iostream& out)
{
out<<text;
}
void print(const::string& text, std::ofstream& out)
{
out<<text;
}
