#include <bits/stdc++.h>

using namespace std;

struct record
{
    int appearance;
    string name;
};

void correctPosition(int i, vector<record>& record_list)
{
    // sort by number
    while(i > 0 &&
    record_list[i].appearance > record_list[i-1].appearance)
    {
        swap(record_list[i], record_list[i-1]);
        i--;
    }

    while(i > 0 &&
    record_list[i].appearance == record_list[i-1].appearance &&
    strcmp(record_list[i-1].name.c_str(), record_list[i].name.c_str())>0)
    {
        swap(record_list[i], record_list[i-1]);
        i--;
    }
}

int main()
{
    // vector of records
    vector<record> record_list {};

    string line;

    while (getline(cin, line))
    {
        //
        vector<string> words{"",};

        //
        for(char const& x: line)
        {
            if(x == ' ')
            {
                words.push_back("");
            }
            else
            {
                words.back() += x;
            }
        }

        // 0 - no. | 1 - surname | 2 - name
        // get the name and convert it to upper
        string name;
        transform(words[2].begin(), words[2].end(), back_inserter(name), ::toupper);

        // if already in vector increment else append
        bool found = false;
        for(int i = 0; i < record_list.size(); i++)
        {
            if(record_list[i].name == name)
            {
                // increment appearance
                record_list[i].appearance++;

                //
                correctPosition(i, record_list);

                // break the loop
                found = true;
                break;
            }
            
        }
        
        //if not found
        if(!found)
        {
            record_list.push_back({1, name});

            //
            correctPosition(record_list.size() - 1, record_list);
        }
    }

    // print out everything
    for(record const& r: record_list)
    {
        printf("%s %d\n", r.name.c_str(), r.appearance);
    }
    
    return 0;
}