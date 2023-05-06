/**
 * @file 01sequential_container.cpp
 * @brief Sequential container
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-04-28       vector(vector_qiu@163.com)      first version
 *
 */



/**
 * vector:可变大小数组。支持快速随机访问。在尾部之外的位置插入或删除元素可能很慢
 *
 * deque：双端队列。支持快速随机访问。在头尾位置插入/删除速度很快
 * list：双向链表。只支持双向顺序访问。在list中任何位置进行插入/删除操作速度都很快
 * forward_list: 单向链表。只支持单向顺序访问。在链表任何位置进行插入/删除速度都很快
 * array：固定大小数组。支持快速随机访问。不能添加或删除元素
 * string：与vector相似的容器，但专门用于保存字符。随机访问快。在尾部插入/删除速度快
 *
 *
 *  容器操作：
 *  iterator：此容器类型的迭代类型
 *  const_iterator: 可以读取元素，但不能修改元素的迭代器类型
 *  size_type: 无符号整数类型，足够保存此种容器类型最大可能容器的大小
 *  difference_type: 带符号整数类型，足够保存两个迭代器之间的距离
 *  value_type: 元素类型
 *  reference: 元素的左值类型 value_type &
 *  const_reference: 元素的const左值类型 const value_type &
 *
 *  构造函数：
 *  C c :默认构造函数，构造空容器
 *  C c1(c2): 构造c2的拷贝c1
 *  C c(b, e): 构造c将迭代器b和e指定范围内的元素拷贝到c array不支持
 *  C c{a, b, c,..}:列表初始化
 *
 *  赋值与swap
 *  c1 = c2 将c1中元素替换为c2中的元素
 *  c1 = {a, b, c...} 将c1中的元素替换为列表中的元素
 *  a.swap(b) 交换a和b的元素
 *  swap(a,b) 交换a和b的元素
 *
 *  大小
 *  c.size()   c中的元素的数目 (不支持forward_list)
 *  c.maxsize() c可保存的最大元素数目
 *  c.empty()   是否为空
 *
 *  添加/删除元素
 *  c.insert(args)  将args中的元素拷贝进c
 *  c.emplace(inits) 使用inits构造c中的一个元素
 *  c.erase(args)     删除args指定的元素
 *  c.clear()         删除c中的所有元素
 *
 * 关系运算符
 *  == !=       所有容器都支持相等 不等运算符
 *  < <= > >=   关系运算符 无序关联容器不支持
 *
 * 获取迭代器
 *  c.begin() c.end()
 *  c.cbegin() c.cend() 返回 const_itertor
 *
 * 反向容器的额外成员
 *  reverse_iterator        按照逆序寻址元素的迭代器
 *  const_reverse_iterator  不能修改元素的逆序迭代器
 *  c.rbegin() c.rend()     返回指向c的尾元素和首元素之前位置的迭代器
 *  c.crbegin() c.crend()   返回const_reverse_iterator
 *
 * 向顺序容器添加元素
 *  操作会改变容器的大小 array不支持这些操作
 *  forward_list 有自己转有版本的insert emplace
 *  forward_list 不支持push_back 和 emplace_back
 *  vector和string不支持push_front和emplace_front
 *  c.push_back(t)  在c的尾部创建一个值为t或有args创建的元素
 *  c.push_emplace(args) 构造方式
 *  c.push_front(t) 在c的头部创建一个值为t或者args创建的元素
 *  c.push_emplace_front(args)
 *  c.insert(p,t)   迭代器p指向的元素之前创建一个值为t或者args创建的元素，返回
 *                  指向新添加的元素的迭代器
 *  c.emplace(p,args)
 *
 *  c.insert(p,n,t) 在迭代器p指向的元素之前插入n个值为t的元素。返回指向
 *                  新添加的第一个元素的迭代器：若n为0返回p
 *  c.insert(p,b,e) 在迭代器b和e指定的范围内的元素插入到迭代器p指向的元素之前
 *                  b，e不能指向c中的元素，返回指向新添加的第一个元素的迭代器
 *                  若范围为空 则返回p
 *  c.insert(p,il)  il是一个花括号包围的元素值列表。将这些给定值插入到迭代器p
 *                  指向的元素之前。返回指向新添加的一个元素的迭代器若列表为
 *                  空，则返回p
 *
 * 访问元素
 *  at和下标操作只适用于string vector deque array
 *  back不适用于forward_list
 *  c.back()    返回c中尾元素的引用。若c为空，函数行为未定义
 *  c.front()   返回c中首元素的引用。若c为空，函数行为未定义
 *  c[n]        返回c中下标未n的元素的引用，n是一个五符号整数。若
 *              n>c.size(),则函数行为未定义
 *  c.at(n)     返回下标为n的元素的引用，如果下标越界，则抛出一out_of_range异常
 *
 * 删除元素
 *  这些操作会改变容器的大小，所有不适用于array
 *  forward_list有特殊版本的erase
 *  forward_list不支持pop_back vector和string不支持pop_front
 *  c.pop_back()
 *  c.pop_front()
 *  c.erase(p)      删除迭代器p所指定的元素，返回一个指向被删除元素之后元素的迭代器
 *  c.erase(b,e)
 *  c.clear()
 *
 * 管理容量的成员函数
 *  shrink_to_fit 只适用于vector string deque
 *  capacity 和 reserve只适用于vector和string
 *  c.shrink_to_fit()   请求capacity() 减少为与size()相同大小
 *  c.capacity()        不重新分配内存空间的话，c可以保存多少元素，容器元素数量的最大大小
 *  c.reserve(n)        分配至少能容纳n个元素的内存空间
 *  c.size()            容器元素数量的实际大小
 *
 * string的额外操作
 *  
 */



/**
 * @brief The application entry point.
 *
 * @return int
 */
int main(int argc, char *argv[]) {

    return 0;
}