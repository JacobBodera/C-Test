/*
 * Name: Jacob Bodera
 * File name: palindromeTest
 * Description: Given a number, the program determines whether it is a palindrome or not
 */

using namespace std;

int main()
{

}

bool isPalindrome (int x)
{
    long long reverse = 0;
    int num = x;

    while (num > 0)
    {
        reverse = reverse * 10 + (num %10);
        num /= 10;
    }
    return reverse == x;
}
