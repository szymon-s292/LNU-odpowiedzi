float salaryMedian(int salary[], int employeesNumber)
{
    for(int i = 0; i < employeesNumber-1; i++)
    {
        for(int j = 0; j < employeesNumber-1; j++)
        {
            if(salary[j] < salary[j+1])
            {
                int p = salary[j];
                salary[j] = salary[j+1];
                salary[j+1] = p;
            }
        }
    }
    return (employeesNumber % 2 == 0) ? (float)(salary[(employeesNumber+1)/2] +salary[(employeesNumber-1)/2])/2 : salary[employeesNumber/2];
}
