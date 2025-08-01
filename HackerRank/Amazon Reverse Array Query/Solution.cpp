#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



/*
 * Complete the 'performOperations' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY arr
 *  2. 2D_INTEGER_ARRAY operations
 */

vector<int> performOperations(vector<int> arr, vector<vector<int>> operations) {
    for (vector<int> operation : operations) {
        int start = operation[0];
        int end = operation[1];
        reverse(arr.begin() + start, arr.begin() + end + 1);
    }
    return arr;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    string operations_rows_temp;
    getline(cin, operations_rows_temp);

    int operations_rows = stoi(ltrim(rtrim(operations_rows_temp)));

    string operations_columns_temp;
    getline(cin, operations_columns_temp);

    int operations_columns = stoi(ltrim(rtrim(operations_columns_temp)));

    vector<vector<int>> operations(operations_rows);

    for (int i = 0; i < operations_rows; i++) {
        operations[i].resize(operations_columns);

        string operations_row_temp_temp;
        getline(cin, operations_row_temp_temp);

        vector<string> operations_row_temp = split(rtrim(operations_row_temp_temp));

        for (int j = 0; j < operations_columns; j++) {
            int operations_row_item = stoi(operations_row_temp[j]);

            operations[i][j] = operations_row_item;
        }
    }

    vector<int> result = performOperations(arr, operations);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
