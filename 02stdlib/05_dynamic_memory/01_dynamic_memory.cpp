/**
 * @file 01_dynamic_memory.cpp
 * @brief dynamic memory
 * @copyright Copyright (c) 2023
 *
 * Change Logs:
 * Data             Author                          Notes
 * 2023-05-06       vector(vector_qiu@163.com)      first version
 *
 */

/**
 *  静态内存： 保存局部static对象，类static数据成员，以及定义在任何函数之外的变量
 *          static对象在使用之前分配，在程序结束时销毁
 *  栈内存：函数内的非static对象
 *          仅在其定义的程序块运行时才存在
 *  内存池：自由内存（free store）或堆（heap）
 *          程序用堆来存储动态分配（dynamically allocate）的对象
 *
 * 静态内存和栈内存中的对象有编译器自动创建和销毁
 *
 *  new 分配内存
 *  delete 销毁对象，释放与之关联的内存
 *
 * memory
 * 智能指针：
 *  shared_ptr
 *  unique_ptr
 *  weak_ptr
 *
 *  shared_ptr<T> sp; 空智能指针，可以指向类型为T的对象
 *  unique_ptr<T> up;
 *
 *  p           将p用作一个条件判断，若p指向一个对象，则为true
 *  *p          解引用p，获得它指向的对象
 *  p->mem      (*p).mem
 *  p.get()     返回p中保存的指针，要小心使用，若之智能指针释放了其对象
 *              返回的指针所指向的对象也就消失了
 *  swap(p,q)   交换p和q的指针
 *  p.wap(q)
 *
 *  make_shared<T>(args)    返回一个share_ptr,指向一个动态分配的类型为T的对象
 *                          使用args初始化此对象
 *  shared_ptr<T>p(q)       p是shared_ptr q的拷贝
 *
 *  p = q
 *
 * p.unique()    use_count() 为1 返回true 否则返回false
 * p.use_count() 返回与p共享对象的智能指针数量，主要用于调试
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