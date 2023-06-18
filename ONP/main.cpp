#include<iostream>
#include<stack>
#include<map>

using namespace std;

int main()
{
    map<char, int> operators{{'(', 0},
                            {'+',1}, {'-',1}, {')',1},
                            {'*',2}, {'/',2}, {'%', 2},
                            {'^', 3}};

    unsigned int test_count;
    scanf("%d", &test_count);

    for(;test_count>0; test_count--)
    {
        stack<char> _stack;
        
        string line_in, line_out = "";
        scanf("%s", &line_in);
        for(unsigned int i = 0; i<line_in.length(); i++)
        {
            printf("%d", i);
            printf("%c %s \n", line_in[i], line_out);

            // if letter
            if(line_in[i] > 96 && line_in[i] < 123)
            {
                line_out += line_in[i];
            }
            else if (line_in[i] == '(')
            {
                _stack.push(line_in[i]);
                printf("h");
            }
            else if(line_in[i] == ')')
            {
                for(int k = _stack.size()-1; k >-1; k++)
                {
                    char _stack_k = _stack.top();
                    _stack.pop();

                    if(_stack_k=='(')
                        break;
                    line_out += _stack_k;
                }
            }
            else
            {
                if(operators[line_in[i]] <= operators[_stack.top()])
                {
                    do
                    {
                        line_out += _stack.top();
                        _stack.pop();
                    } while (operators[_stack.top()] >= operators[line_in[i]]);
                    
                }
                else
                {
                    _stack.push(line_in[i]);
                }
            }
            
            
        }

        // empty stack
        while (!_stack.size())
        {
           line_out += _stack.top();
           _stack.pop();
        }

        printf("%s \n", line_out);
        //cout << line_out << endl;

    }

    return 0;
}
