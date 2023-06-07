// Yêu cầu:
// 1. đọc file theo chiều ngang

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file_in;
    file_in.open("C:\\Users\\nccon\\Music\\doc_ghi_file\\data_ngang.txt", ios :: in);

    if (file_in.fail() == true)
    {
        cout << "Mo file THAT BAI\n";
    }
    else if (file_in.fail() == false)
    {
        cout << "Mo file THANH CONG\n";

        int x;

        while (file_in.eof() == false)
        {
            // nếu đọc đến cuối file thì break thôi
            if (file_in.eof() == true)
            {
                break;
            }
            
            file_in >> x;

            cout << x << "  ";
        }
        
        cout << "\n\n";

        file_in.close();
    }

    return 0;
}