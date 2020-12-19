#include <iostream>
#include <math.h>
#include <list>
using namespace std;

int recursiveSum(int);
void recursiveBin(int);


int main()
{
    int ex4, ex5, result4;
    string result5;
    //������� 4. ����������� ������� ����� ����
    std::cout << "Input number: \n";
    cin >> ex4;
    result4 = recursiveSum(ex4);
    std::cout << "Exercise 4 result = "<< result4<< endl;
    

    //������� 5. ���������� �������� ��� �������� ������ ����� � �������� ���
    std::cout << "Input number: \n";
    cin >> ex5;
    recursiveBin(ex5);
    
}   


int recursiveSum(int ex)
{
    if (ex == 1)
    {
        return 5;
    }
    else
    {
        return 5 * ex + recursiveSum(ex - 1);
    }
}
void recursiveBin(int ex)
{   
    if (ex < 2)
    {
        cout << ex;
        return;
    }
    else
    {
        recursiveBin(ex / 2);
        int result = ex % 2;
        cout << result;
    } 
}