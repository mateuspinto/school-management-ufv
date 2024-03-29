#include "EnrolledStudent.hpp"

model::entity::EnrolledStudent::EnrolledStudent(std::string CPF)  // Throws BadArgument
{
    if(CPF.empty())
        throw exception::BadArgument("Todos os parametros devem ser preenchidos!");

    this->CPF = CPF;
    this->grades = std::vector<double>(4);

    this->grades[0]=0;
    this->grades[1]=0;
    this->grades[2]=0;
    this->grades[3]=0;
}
        
model::entity::EnrolledStudent::~EnrolledStudent()
{
}

std::string model::entity::EnrolledStudent::getCPF()
{
    return this->CPF;
}

std::vector<double>& model::entity::EnrolledStudent::getGrades()
{
    return this->grades;
}


void model::entity::EnrolledStudent::setGrade(int position, double grade)
{
    this->grades[position] = grade;
}

std::string model::entity::EnrolledStudent::toString()
{
    return "CPF do aluno: " + this->CPF + "\n" +
    "  Primeiro bimestre: " + std::to_string(this->grades[0]) + "\n" +
    "  Segundo bimestre: " + std::to_string(this->grades[1]) + "\n" +
    "  Terceiro bimestre: " + std::to_string(this->grades[2]) + "\n" +
    "  Quarto bimestre: " + std::to_string(this->grades[3]) + "\n";
}