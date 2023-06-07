// Yêu cầu:
// 1. đọc file
// 2. đưa dữ liệu vào trong vector

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Person{
    int id;
    string ten;
};

// hàm hiển thị item trong vector
void HienThi(vector<Person> v){
    cout << "ID\t\t\tHO VA TEN\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].id << "\t\t\t" << v[i].ten << "\n";
    }  
}

int main(){
    // tạo vector
    vector<Person> v;

    ifstream file_in;
    file_in.open("C:\\Users\\nccon\\Music\\doc_ghi_file\\data_person.txt", ios :: in);

    if (file_in.fail() == true)
    {
        cout << "Mo file THAT BAI\n";
    }
    else if (file_in.fail() == false)
    {
        cout << "Mo file THANH CONG\n";

        string str = "";
        Person item;

        string data_id = "";
        string data_ten = "";

        int vi_tri1 = 0; // lưu vị trí dấu đô la đầu tiên "$"

        while (file_in.eof() == false)
        {
            if (file_in.eof() == true)
            {
                break;
            }

            getline(file_in, str, '\n');
            
            // việc 1:
            // lấy id
            for (int i = 0; i < str.length(); i++)
            {
                data_id = data_id + str[i];
                
                if (str[i] == '$')
                {
                    vi_tri1 = i;
                    break;
                }                
            }
            item.id = stoi(data_id);

            // việc 2:
            // lấy họ và tên
            for (int i = vi_tri1 + 1; i < str.length(); i++)
            {
                data_ten = data_ten + str[i];
            }
            item.ten = data_ten;

            // việc 3:
            // thêm item vào trong vector v
            v.push_back(item);

            // việc 4:
            // xóa hết dữ liệu
            data_id = "";
            data_ten = "";
        }

        file_in.close();
    }

    cout << "\n";

    HienThi(v);

    cout << "\n";

    return 0;
}