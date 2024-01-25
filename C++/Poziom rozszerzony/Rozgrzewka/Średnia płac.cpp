float salaryAvg(int salary[], int employeesNumber)
{
    float avg = 0, i = 0;
    for(int i = 0; i < employeesNumber; i++)
    {
        avg += salary[i];
    }
    return avg/employeesNumber;
}
