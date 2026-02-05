# Chapter 05: Pointers

本章深入学习C语言的指针。

## 📚 阅读材料

学习本章之前，建议先阅读：

- [C 指针](https://www.w3ccoo.com/c/c_pointers.html) - 指针基础概念
- [C 内存地址](https://www.w3ccoo.com/c/c_memory_address.html) - 理解内存地址
- [C 指针与数组](https://www.w3ccoo.com/c/c_pointers_arrays.html) - 指针和数组的关系

## 练习列表

1. **pointers1.c** - 指针基础 ⭐⭐
   - 学习指针交换两个变量的值
   - 理解指针作为函数参数

2. **pointers2.c** - 指针解引用 ⭐⭐
   - 学习*运算符
   - set_value和get_value

3. **pointers3.c** - 指针算术 ⭐⭐⭐
   - 学习指针加法
   - *(ptr + n)访问数组元素

4. **pointers4.c** - 指针与数组 ⭐⭐⭐
   - 理解数组名是指针
   - 使用指针遍历数组

5. **pointers5.c** - 指针操作数组 ⭐⭐⭐
   - reverse_array反转数组
   - copy_array复制数组
   - 使用双指针技巧

6. **pointers6.c** - 指针作为输出参数 ⭐⭐⭐
   - 通过指针返回多个值
   - find_min_max同时返回最小和最大值

7. **pointers7.c** - 函数指针基础 ⭐⭐⭐⭐
   - 学习函数指针的定义
   - apply_operation使用函数指针

8. **pointers8.c** - 函数指针回调 ⭐⭐⭐⭐
   - 使用函数指针实现排序
   - compare_func作为回调函数

9. **pointers9.c** - 双重指针 ⭐⭐⭐⭐⭐
   - 学习二级指针
   - 实现二维数组动态分配

10. **pointers10.c** - NULL指针检查 ⭐⭐⭐
    - 学习NULL指针的重要性
    - safe_dereference防御性编程
    - find_element返回指针或NULL

11. **pointers11.c** - 指针与数组等价性 ⭐⭐⭐
    - 理解arr[i]和*(arr+i)的等价性
    - 练习两种访问方式
    - 使用指针算术遍历数组

## 学习目标

- 深入理解指针的概念和用法
- 掌握指针算术和数组的关系
- 学会使用指针作为函数参数
- 理解函数指针的强大功能
- 掌握动态内存分配的基础
- 学会NULL指针检查的重要性
