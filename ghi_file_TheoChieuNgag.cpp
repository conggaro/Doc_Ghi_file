// Yêu cầu:
// 1. ghi file theo chiều ngang

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // tạo đối tượng để mở file
    // sau đó mới dùng đối tượng đó để ghi file
    ofstream file_out;

    file_out.open("C:\\Users\\nccon\\Music\\doc_ghi_file\\Ghi_file_ngang.txt", ios::out);

    if (file_out.fail() == true)
    {
        cout << "Mo file THAT BAI\n";
    }
    else if (file_out.fail() == false)
    {
        cout << "Mo file THANH CONG\n";
        for (int i = 0; i < 10; i++)
        {
            file_out << i << " ";
        }

        file_out.close();
    }
    
    return 0;
}