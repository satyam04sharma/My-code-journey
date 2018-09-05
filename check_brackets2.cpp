#include <iostream>
#include <stack>
#include <string>

struct Bracket {
    Bracket(char type, long long position):
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

    std::stack <Bracket> opening_brackets_stack;
    for (long long position = 0; position < text.length(); ++position) {
        char next = text[position];

        if (next == '(' || next == '[' || next == '{') {
            // Process opening bracket, write your code here
            opening_brackets_stack.push(Bracket(next,position));
        }

        if (next == ')' || next == ']' || next == '}') {
            // Process closing bracket, write your code here
            if(opening_brackets_stack.empty()) {
				std::cout<<position + 1<<std::endl;
				break;
			}
            if(!opening_brackets_stack.top().Matchc(next))
            {
            	std::cout<<position+1<<std::endl;
            	break;
			}
			else
			{
				opening_brackets_stack.pop();
			}
        }
        if(position==text.length()-1)
        {
        	if(opening_brackets_stack.size()==0)
        	{
        		std::cout<<"Success"<<std::endl;
			}
			else
			{
				std::cout<<opening_brackets_stack.top().position+1<<std::endl;
			}
			break;
		}
    }

    // Printing answer, write your code here

    return 0;
}

