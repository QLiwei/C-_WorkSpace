#ifndef __STR_VEC_CPP__
#define __STR_VEC_CPP__

#include <memory>
#include <string>

class StrVec {
    public:
        StrVec():elements(nullptr), first_free(nullptr), cap(nullptr) {}
        StrVec(const StrVec&);
        StrVec(StrVec&& s) noexcept
            : elements(s.elements), first_free(s.first_free), cap(s.cap) // 成员初始化器接管s中的资源
            { s.elements = s.first_free = s.cap = nullptr; } // 令s进入这样的状态——对其运行析构函数是安全的
        StrVec &operator=(const StrVec&);
        StrVec &operator=(StrVec&&) noexcept;
        ~StrVec();
        void push_back(const std::string&);
        size_t size() const { return first_free - elements; }
        size_t capacity() const { return cap - elements; }
        std::string *begin() const { return elements; }
        std::string *end() const { return first_free; }

    private:
        static std::allocator<std::string> alloc; // 分配元素
        void chk_n_alloc() { if (size() == capacity()) reallocate(); }
        std::pair<std::string*, std::string*> alloc_n_copy
            (const std::string*, const std::string*);

        void free();                // 销毁元素并释放内存
        void reallocate();          // 获取更多内存并拷贝已有元素
        std::string *elements;      // 指向数组首元素的指针
        std::string *first_free;    // 指向数组第一个空闲元素的指针
        std::string *cap;           // 指向数组尾后位置的指针

};

#endif /* __STR_VEC_CPP__ */