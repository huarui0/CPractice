# 问题记录：   
1.行数16 算式的差是固定值？为什么？   
2.错误1: string 与 charactor 不能相比较。   
-----------------------------------------
# 知识点
## 1.关于头文件：
* 最初学的第一个头文件：#include <stdio.h> 这个头文件用到的函数有两个：printf 和 scanf。只是当时没有仔细解释。。。
* 加入头文件的目的：#include <string.h>
     * 因为要用到 string.h 中定义的库函数 strcmp,来比较输入的字符串 与 变量中保存的字符 是否一致，
       源文件中：strcmp(select,"Y")，这个函数是 在 string.h 定义的库文件中, 要获得这个源文件的说明，
       可以在google search中输入：c language string.h source code。（当然中文也可以：c语言，string.h 源代码）
       
       - 参考：
          1. [string.h的头文件源代码:Browse the source code of include/string.h](https://code.woboq.org/gtk/include/string.h.html)<br>
          2. [C – string.h library functions](https://fresh2refresh.com/c-programming/c-function/string-h-library-functions/)
    
       有空的时候，在可以看懂的时候，可以仔细研究下这个源文件，就可以在需要的时候，用到其中的函数，不用自己去写了！比如下面这个函数：
       - /* Copy SRC to DEST.  */
       extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
       应该就是将一个字符变量 copy 到 另一个字符变量。（猜测的） 
       - 再比如： strlen() 应该就是计算字符的数量（长度）
## 2.关于变量：
- 变量必须赋值，才能计算。
- 不同类型的变量，不能相加。

## 3.关于 & 操作符；
参考：C Prime Plus p367：Finding Addresses: The & Operator
- 注意，加 & 的变量与 原来变量的关系

One of the most important C concepts (and sometimes one of the most perplexing) is the
pointer , which is a variable used to store an address. You’ve already seen that scanf() uses
addresses for arguments. More generally, any C function that modifies a value in the calling
function without using a return value uses addresses. We’ll cover functions using addresses
next, beginning with the unary & operator. (The next chapter continues the exploration and
exploitation of pointers.)
The unary & operator gives you the address where a variable is stored.

## 5.关于编码规范：
* 感觉编码不够规范，要看一下关于编码规范的知识。可以Google。
