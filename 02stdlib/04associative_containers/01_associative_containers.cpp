/**
 * @file 01_associative_containers.cpp
 * @brief associative containers
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-05-06       vector(vector_qiu@163.com)      first version
 *
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <fstream>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::map;
using std::set;
using std::find;
using std::begin;
using std::end;
using std::ofstream;
using std::ifstream;
using std::istringstream;
using std::ostringstream;
using std::runtime_error;
/**
 * map: key-value,关键字起到索引作用，值则表示与索引相关联的数据
 *
 * set：每个元素值包含一个关键字
 *      set支持高效的关键字查询操作——检查一个给定关键字是否在set中
 *
 *  map 关联数组 保存关键字-值对
 *  set 关键字即值，即只保存关键字的容器
 *  multimap 关键字可重复出现的map
 *  multiset 关键字可重复出现的set
 *
 *  无序集合
 *  unordered_map           用哈希函数组织的map
 *  unordered_set           用哈希函数组织的set
 *  unordered_multimap      关键字可以重复出现
 *  unordered_multiset      关键字可以重复出现
 *
 * 定义关联容器
 *  map<string, size_t> word;
 *  set<string> exclude;
 *
 * pair；类型
 *  pair<T1, T2> p;
 *  pair<T1, T2> p(v1, v2);
 *  pair<T1, T2> p = {v1, v2};
 *  make_pair(v1, v2);  返回pair 类型推断
 *
 *  p.first
 *  p.second
 *
 *  p1 relop p2 < > <= >=
 *  p1 == p2
 *  p1 != p2
 *
 * 类型别名：
 *  key_type
 *  mapped_type
 *  value_type  set - key_type
 *              map pair<const key_type, mapped_type>
 *
 *
 * 迭代器
 *  .begin()
 *  .end()
 *
 * 添加元素
 *  c.insert(v)      v:value_type
 *  c.emplace(args)
 *
 *  c.insert(b, e);
 *  c.insert(il)
 *
 *  c.insert(p, v)
 *  c.emplace(p, args)
 *
 * 删除元素
 *  c.erase(k)      c中删除每个关键字为k的元素
 *  c.erase(p)      c中删除迭代器p指定元素
 *  c.erase(b, e)   迭代器b和e所表示的范围中的元素 返回e
 *
 * 下标操作
 *  c[key]
 *  c.at(key)
 *
 * 访问元素
 *  lower_bound upper_bound不适用无序容器
 *  下标和at操作只适用于非const的map和unordered_map
 *
 *  c.find(key)
 *  c.count(key)
 *  c.lower_bound(key)      返回一个迭代器，指向第一个关键字不小于k的元素
 *  c.upper_bound(key)      返回一个迭代器，指向第一个关键字大于k的元素
 *  c.equal_range(key)      返回一个迭代器pair
 *                          表示关键字等于k的元素的范围。若key不存在，pair的两个成员均等于c.end()
 *
 * 无序集合 桶
 */

void word_transform(ifstream &map_file, ifstream &input);
map<string, string> build_map(ifstream &map_file);
const string &transform(const string &s, const map<string, string> &m);

/**
 * @brief The application entry point.
 *
 * @return int
 */
int main(int argc, char *argv[]) {

#if 0
    map<string, size_t> word_count;
    string word;

    while (cin >> word) {
        ++word_count[word];
    }

    for (const auto &w : word_count) {
        cout << w.first << " occurs " << w.second
            << ((w.second > 1) ? " times" : " time") << endl;
    }
#endif

#if 0
    map<string, size_t> word_count;
    set<string> exclude = {"The", "But", "And", "Or", "An", "A",
                            "the", "but", "and", "or", "an", "a"};

    string word;

    while (cin >> word) {
        if (exclude.find(word) != exclude.end()) {
            ++word_count[word];
        }
    }

    for (const auto &w : word_count) {
        cout << w.first << " occurs " << w.second
            << ((w.second > 1) ? " times" : " time") << endl;
    }

#endif

#if 1
    ifstream map_file;
    map_file.open("map_file.txt");
    ifstream input;
    input.open("input.txt");
    word_transform(map_file, input);
#endif
    return 0;
}

void word_transform(ifstream &map_file, ifstream &input)
{
    auto trans_map = build_map(map_file);
    string text;
    while (getline(input, text)) {
        istringstream stream(text);
        string word;
        bool firstword = true;
        while (stream >> word) {
            if (firstword) {
                firstword = false;
            } else {
                cout << " ";
            }
            cout << transform(word, trans_map);
        }
        cout << endl;
    }
}

map<string, string> build_map(ifstream &map_file) {
    map<string, string> trans_map;
    string key;
    string value;

    while (map_file >> key && getline(map_file, value)) {
        if (value.size() > 1) {
            trans_map[key] = value.substr(1);
        } else {
            throw runtime_error("no rule for " + key);
        }
    }
    return trans_map;
}

const string &transform(const string &s, const map<string, string> &m) {
    auto map_it = m.find(s);

    if (map_it != m.cend()) {
        return map_it->second;
    } else {
        return s;
    }
}

