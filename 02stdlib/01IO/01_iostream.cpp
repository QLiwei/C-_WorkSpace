/**
 * @file 01_iostream.cpp
 * @brief iostream
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-04-27       vector(vector_qiu@163.com)      first version
 *
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

/**
 * IO类
 *  iostream:从流操作数据
 *  fstream：从文件操作数据
 *  sstream：从string操作数据
 * 1、IO对象没有拷贝或赋值
 * 2、条件状态
 *  ::iostate   机器相关的类型，提供了表达状态的完整功能
 *  ::badbit    流崩溃
 *  ::failbit   IO操作失败
 *  ::eofbit    流到达文件末尾
 *  ::goodbit   流未处于错误状态
 *  .eof()              bit置位返回true
 *  .fail()
 *  .bad()
 *  .good()
 *  .clear()            条件状态复位
 *  .clear(flags)       清除条件状态
 *  .setstate(flags)    set条件状态
 *  .rdstate()          返回流当前的条件状态
 * 3、缓冲区
 *  刷新缓冲区：endl flush ends(缓冲区会插入一个空字符)
 *  unitbuf
 *  nounitbuf
 *      cout << unitbuf;    // 所有输出操作后都会立即刷新缓冲区
 *      ...
 *      cout << nounitbuf;  // 回到正常的缓冲方式
 *   程序崩溃不会刷新缓冲区
 *  cout cin 关联在一起，输入流读取数据的操作会刷新关联的输出流
 *  x.tie(&o) 将流x关联到输出流o
 *      ostream *old_tie = cin.tie(nullptr); // cin不再与其他流关联
 *      cin.tie(&cerr); cin 与cerr关联
 *      cin.tie(&old_tie); //重建cin和cout间的关联
 *
 *
 * 文件输入输出 fstream
 *  ifstream 文件读
 *  ofstream 文件写
 *  fstream  文件读写
 *  继承iostream
 *  fstream fstrm;      //创建一个未绑定的文件流
 *  fstream fstrm(s);   //创建一个fstream，并打开名为s的文件
 *  fstream fstrm(s, mode);     // 指定mode打开文件
 *  fstrm.open(s)   //  打开名为s的文件，并将文件与fstrm绑定
 *  fstrm.close()
 *  fstrm.is_open() // 是否成功打开
 *  file mode :
 *      in:读方式
 *      out:写方式
 *      app:每次写操作均定位到文件末尾
 *      ate:打开文件后立即定位文件末尾
 *      trunc:截断文件
 *      binary:以二进制方式进行IO
 *
 *  string流
 *      sstream strm;       // strm是一个未绑定的stringstream对象
 *      sstream strm(s);    // 保存string s的一个拷贝
 *
 *      strm.str()      // 返回strm所保存的string的拷贝
 *      strm.str(s)     // 将string s拷贝到strm中 返回void
 *
 */

using std::cin;
using std::cout;
using std::endl;
using std::ofstream;
using std::ifstream;
using std::istringstream;
using std::ostringstream;
using std::vector;
using std::string;

struct person_info {
    string name;
    vector<string> phones;
};


/**
 * @brief The application entry point.
 *
 * @return int
 */
int main(int argc, char *argv[]) {
#if 0
    char data[100];

    ofstream out_file;
    out_file.open("afile.dat");
    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);
    out_file << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    out_file << data << endl;

    out_file.close();

    ifstream in_file;
    in_file.open("afile.dat");

    cout << "Reading from the file" << endl;
    in_file >> data;

    cout << data << endl;

    in_file >> data;
    cout << data << endl;

    in_file.close();
#endif

#if 1
    string line, word;
    vector<person_info> people;
    while (getline(cin, line)) {
        person_info info;
        istringstream record(line);
        record >> info.name;
        while (record >> word) {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    for (auto i : people)
    {
        cout << i.name << ": ";
        for (auto j : i.phones) {
            cout << j << " ";
        }
        cout << endl;
    }
    // for (const auto &entry : people) {
    //     ostringstream formatted, badNums;
    //     for (const auto &nums : entry.phones) {
    //         if (!valid(nums)) {
    //             badNums << " " << nums;
    //         } else {
    //             formatted << " " << format(nums);
    //         }
    //     }
    //     if (badNums.str().empty()) {
    //         os << entry.name << " " << formatted.str() << endl;
    //     } else {
    //         cerr << "input error: " << entry.name << "invalid number(s)"
    //             << badNums.str() << endl;
    //     }
    // }
#endif
    return 0;
}