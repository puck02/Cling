# Chapter 07: File I/O

本章学习C语言的文件输入输出。

## 📚 阅读材料

学习本章之前，建议先阅读：

- [C 文件处理](https://www.w3ccoo.com/c/c_files.html) - 文件操作基础
- [C 文件写入](https://www.w3ccoo.com/c/c_files_write.html) - 写入文件详解
- [C 文件读取](https://www.w3ccoo.com/c/c_files_read.html) - 读取文件详解

## 练习列表

1. **file1.c** - 文件基础
   - 学习fopen, fclose
   - 使用fputs和fgets
   - write_to_file和read_from_file

2. **file2.c** - 格式化输入输出
   - 学习fprintf和fscanf
   - 写入和读取结构化数据
   - write_student_data和read_student_data

3. **file3.c** - 二进制文件
   - 学习fwrite和fread
   - 处理二进制数据
   - write_binary_array和read_binary_array

4. **file4.c** - 错误处理
   - 学习feof, ferror, clearerr
   - count_lines统计行数
   - copy_file复制文件并处理错误

## 文件操作模式

- `"r"` - 只读（文件必须存在）
- `"w"` - 写入（覆盖或创建）
- `"a"` - 追加（在末尾添加）
- `"rb"` - 二进制只读
- `"wb"` - 二进制写入
- `"r+"` - 读写（文件必须存在）
- `"w+"` - 读写（覆盖或创建）

## 学习目标

- 掌握文件的打开和关闭
- 学会文本文件的读写
- 理解二进制文件的处理
- 掌握格式化输入输出
- 学会文件错误处理
- 理解EOF的概念
