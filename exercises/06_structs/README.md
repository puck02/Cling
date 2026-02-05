# Chapter 06: Structs & Memory Management

本章学习结构体和动态内存管理。

## 📚 阅读材料

学习本章之前，建议先阅读：

- [C 结构体](https://www.w3ccoo.com/c/c_structs.html) - 结构体定义和使用
- [C 内存管理](https://www.w3ccoo.com/c/c_memory_management.html) - 内存管理概述
- [C 内存分配](https://www.w3ccoo.com/c/c_memory_allocate.html) - malloc/calloc/realloc/free详解

## 练习列表

### Structs (结构体)

1. **structs1.c** - 结构体基础 ⭐⭐
   - 学习Point结构体
   - 计算两点距离

2. **structs2.c** - 结构体初始化 ⭐⭐
   - create_point创建Point
   - manhattan_distance使用->访问成员

3. **structs3.c** - 嵌套结构体 ⭐⭐⭐
   - Rectangle包含两个Point
   - 访问嵌套结构体成员

4. **structs4.c** - typedef ⭐⭐
   - 使用typedef简化类型名
   - Student结构体

### Memory Management (内存管理)

5. **memory1.c** - malloc和free ⭐⭐⭐
   - 学习动态内存分配
   - allocate_array和free_array

6. **memory2.c** - calloc ⭐⭐⭐
   - 学习calloc（初始化为0）
   - duplicate_string字符串复制

7. **memory3.c** - realloc基础 ⭐⭐⭐
   - 学习内存重分配
   - resize_array动态扩容数组
   - resize_string调整字符串大小

8. **memory4.c** - 动态数据结构 ⭐⭐⭐⭐
   - 实现完整的DynamicString
   - 练习结构体和动态内存结合
   - 自动扩容机制

## 学习目标

- 掌握结构体的定义和使用
- 理解结构体成员访问（.和->）
- 掌握typedef的用法
- 理解动态内存分配的重要性
- 掌握malloc, calloc, realloc, free的使用
- 学会避免内存泄漏
- 理解栈内存和堆内存的区别
