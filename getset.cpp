#include <iostream>

class Date
{
private:
    int m_year { 2020 };
    int m_month { 10 };
    int m_day { 14 };

public:
    void print()
    {
        std::cout << m_year << '/' << m_month << '/' << m_day << '\n';
    }

    const int& getYear() const { return m_year; }        // getter for year, with pass by reference it would be cheaper
    void setYear(int year) { m_year = year; }     // setter for year

    const int& getMonth() const  { return m_month; }     // getter for month
    void setMonth(int month) { m_month = month; } // setter for month

    const int& getDay() const { return m_day; }          // getter for day
    void setDay(int day) { m_day = day; }         // setter for day
};

int main()
{
    Date d{};
    d.setYear(2021);
    std::cout << "The year is: " << d.getYear() << '\n';
    Date h{};
    d.print();
    std::cout << "A year ago it is ";
    h.print();

    return 0;
}
