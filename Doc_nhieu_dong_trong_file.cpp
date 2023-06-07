// Yêu cầu:
// đọc nhiều dòng trong file

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream file_in;
    file_in.open("C:\\Users\\nccon\\Music\\doc_ghi_file\\Doc_nhieu_dong.txt");

    if (file_in.fail() == true)
    {
        cout << "Mo file THAT BAI\n";
    }
    else if (file_in.fail() == false)
    {
        cout << "Mo file THANH CONG\n";

        string data = "";

        while (file_in.eof() == false)
        {
            if (file_in.eof() == true)
            {
                break;
            }
            
            getline(file_in, data, '\n');

            cout << data << "\n";
        }
        
        cout << "\n";

        file_in.close();
    }
    
    return 0;
}