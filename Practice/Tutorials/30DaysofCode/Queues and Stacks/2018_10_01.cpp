#include <iostream>
#include <string>
#include <queue>
#include <stack>

using namespace std;

class Solution {
private:
	stack<char> stk;
	queue<char> que;
public:
	void pushCharacter(char c);
	void enqueueCharacter(char c);
	char popCharacter();
	char dequeueCharacter();
};

void Solution::pushCharacter(char c)
{
	stk.push(c);
}

void Solution::enqueueCharacter(char c)
{
	que.push(c);
}

char Solution::popCharacter()
{
	char pop = stk.top();
	stk.pop();
	return pop;
}
char Solution::dequeueCharacter()
{
	char deque = que.front();
	que.pop();
	return deque;
}

int main()
{
	//read the string s.
	string s;
	getline(cin, s);

	//create the Solution class object p.
	Solution obj;
	
	// push/enqueue all the characters of string s to stack.
	for (int i = 0; i < s.length(); i++)
	{
		obj.pushCharacter(s[i]);
		obj.enqueueCharacter(s[i]);
	}

	bool isPalindrome = true;

	// pop the top character from stack.
	// dequeue the first character from queue.
	// compare both the characters.
	for (int i = 0; i < s.length() / 2; i++)
	{
		if (obj.popCharacter() != obj.enqueueCharacter())
		{
			isPalindrome = false;
			break;
		}
	}

	// finally print whether string s is palindrome or not.
	if (isPalindrome)
	{
		cout << "The word, " << s << ", is a palindrome";	
	}
	else
	{
		cout << "The word, " << s << ", is not a palindrome";
	}
	return 0;

}