#if !defined(TEACHER_HPP)
#define TEACHER_HPP

// using namespace std;
#include <string>
#include "../Person/Person.hpp"

class Teacher : public Person
{
private:
    std::string area;
    double salaryPerHour;
public:
    Teacher(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string area, double SalaryPerHour); // Throws BadArgument
    ~Teacher();

    std::string getArea();
    double getSalaryPerHour();
    std::string toString();

    void setArea(std::string area); // Throws BadArgument
    void setSalaryPerHour(double salaryPerHour); // Throws BadArgument
};

#endif // TEACHER_HPP
