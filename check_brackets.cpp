#include<bits/stdc++.h>
using namespace std;

struct Bracket {
    Bracket(char type, int position):
        type(type),
        position(position)
    {}

    bool Matchc(char c) {
        if (type == '[' && c == ']')
            return true;
        if (type == '{' && c == '}')
            return true;
        if (type == '(' && c == ')')
            return true;
        return false;
    }

    char type;
    int position;
};

int main() {
    std::string text;
    getline(std::cin, text);
	int result=0;
    std::stack <Bracket> opening_brackets_stack;
    for (int position = 0; position < text.length(); ++position) {
        char next = text[position];

        if (next == '(' || next == '[' || next == '{') {
            // Process opening bracket, write your code here
            opening_brackets_stack.push(Bracket(next,position));
        }

        if (next == ')' || next == ']' || next == '}') {
            // Process closing bracket, write your code here
            Bracket top=opening_brackets_stack.top();
            if(top.Matchc(next))
            {
            	opening_brackets_stack.pop();
			}
			else
			{
				result=position+1;
				break;
			}
        }
    }
    // Printing answer
    if(opening_brackets_stack.size()== 0 && result==0)
    {
    	cout<<"Success"<<endl;
	}
	else if(result>0)
	{
		cout<<result<<endl;
	}
	else
	{
		Bracket A=opening_brackets_stack.top();
		cout<<A.position+1<<endl;
	}

}

