#include <iostream>
#include <random>
#include <vector>
#include<iomanip>
#include <algorithm>
#include <string>
#include <fstream> //ifstream ofstram fstream


struct Employee
{

   std::string m_name;
    int m_empNum;
 double m_rate;
   double m_hours;
   double m_grossPay ;

};
void readcsvFile(std::vector <Employee> &employees);

// void calcgrossPay(Employee &employees);

void parseString(std::string &line, std::string &field);
/*void positions(Employee &my_employee);*/


void printTable (std::vector <Employee> &employees);
void randomizeEmployees(std::vector <Employee> &employees);
int main()
{
    std::vector<Employee> employees;
readcsvFile(employees);



    printTable(employees);

randomizeEmployees(employees);
printTable(employees);



    /*std::cout << "NAME" <<std::setw(18) << "EMPNUMBER" << std::setw(15) << "HOURLY RATE"<< std::setw(15) << "HOURS WORKED" <<std::setw(15) << "GROSS PAY" << std:: endl;
    std::cout<< "---------------------------------------------------------------------" << std::endl;*/
    /*
    std::ifstream csvFile; //instantiated a ifstream object
    csvFile.open("../EmployeeData.csv"); //#3 - connecting the ifstream object to the CSV file

    if(!csvFile.is_open())
    { //#4 - exception handling
        std::cout<<"Error opening file"<<std::endl;
        return 1;
    }*/
    /*int location ;

    std::string name;

    std::string empNum;

    std::string rate;

    std::string hours;

    double grossPay;*/

    //    std::string line = "Bugs Bunny,65732,21.45,36.8";
    /*std::string line;
    std::getline(csvFile,line); //read header ignore
    while (std::getline(csvFile,line))
    {//#5 process the CVS file
Employee tempEmployee;
        parseString(line,name);
        tempEmployee.m_name = name;
        parseString(line,empNum);
        tempEmployee.m_empNum = empNum;
        parseString(line,rate);
        tempEmployee.m_rate = std::stof(rate);
        parseString(line,hours);
        tempEmployee.m_hours = std::stof(hours);
 double grossPay = stod(rate) * stod(hours);




        std::cout<<std::setw(15) << std::left <<name ;
        std::cout<<std::setw(15)  << empNum ;
        std::cout<<std::setw(15) << rate ;
        std::cout<< std::setw(15) <<hours ;
        std::cout<< std::setw(15) <<grossPay;
        std::cout<<std::endl;




    }

    csvFile.close();*/


    //std::getline(csvFile,line);



    /*
    location = line.find(',');
    name = line.substr(0,location);
    line = line.substr(location+1, line.length());

     location = line.find(',');
    empNum = line.substr(0,location);
line = line.substr(location+1, line.length());

    location = line.find(',');
    rate = line.substr(0,location);
    line = line.substr(location+1, line.length());
      location = line.find(',');
    hours = line.substr(0,location);
    line = line.substr(location+1, line.length());
    */

//std::sort(employees.begin(),employees.end(),gen);
//printTable(employees);
    return 0;

}





void readcsvFile(std::vector <Employee> &employees){
    std::ifstream csvFile;
    csvFile.open("../EmployeeData.csv");
    if(!csvFile.is_open())
    { //#4 - exception handling
        std::cout<<"Error opening file"<<std::endl;
    }

    double grossPay;
    std::string line;
    std::getline(csvFile,line); //read header ignore
    while (std::getline(csvFile,line))
    {//#5 process the CVS file
        Employee tempEmployee;
                parseString(line,name);
            std::string name;
            tempEmployee.m_name = name;

        parseString(line,empNum);
        std::string empNum;
             parseString(line,rate);
        tempEmployee.m_empNum = std::stoi(empNum);
        std::string rate;
           tempEmployee.m_rate = std::stof(rate);
    parseString(line,hours);
            std::string hours;
        tempEmployee.m_hours = std::stof(hours);


        double grossPay = stod(rate) * stod(hours);
tempEmployee.m_grossPay = grossPay;

        std::cout<<std::setw(15) << std::left <<name ;
        std::cout<<std::setw(15)  << empNum ;
        std::cout<<std::setw(15) << rate ;
        std::cout<< std::setw(15) <<hours ;
        std::cout<< std::setw(15) <<grossPay;
        std::cout<<std::endl;


    }

    csvFile.close();



}
void parseString(std::string &line, std::string &field){
    int location;
    location = line.find(',');
    field = line.substr(0,location);
    line = line.substr(location+1, line.length());
}

void printTable (std::vector <Employee> &employees)
{
    std::cout << "NAME" <<std::setw(18) << "EMPNUMBER" << std::setw(15) << "HOURLY RATE"<< std::setw(15) << "HOURS WORKED" <<std::setw(15) << "GROSS PAY" << std:: endl;
    std::cout<< "---------------------------------------------------------------------" << std::endl;



    /*
    std::cout<<std::setw(15) << std::left <<name ;
    std::cout<<std::setw(15)  << empNum ;
    std::cout<<std::setw(15) << rate ;
    std::cout<< std::setw(15) <<hours ;
    std::cout<< std::setw(15) <<grossPay;
    std::cout<<std::endl;*/


}

void randomizeEmployees(std::vector<Employee>& employees)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::shuffle(employees.begin(),employees.end(),gen);



}
