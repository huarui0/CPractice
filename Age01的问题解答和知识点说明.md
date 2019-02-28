# 问题记录：<br>

* 1.行数16 算式的差是固定值？为什么？<br>
     - 解答：参考关于变量，变量必须先赋值，再计算<br>
* 2.错误1: string 与 charactor 不能相比较。<br>   
     - 解答：没有看懂，具体是哪句，要提供。<br>
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
- 每一个变量都有一个存储变量值的地址，要搞清楚两者的关系，并知道如何获取 值和地址（也是一个值，是存储地址值）--不知会不会理解，不理解跟爸爸说。
- 变量必须先声明（declare），才可以赋值（assign），否则会报错。如果在声明得同时赋值，叫做变量得初始化（参考：CPrimePlus。p.63:Initializing a Variable.
- 变量必须赋值，才能计算。
- 不同类型的变量，不能相加。比如：字符型的数值，就不能跟 数值型的数值相加，例子：int num; num = 3; char chr_num; chr_num = '5'; int sum; sum = num + chr_num; 这是错的，因为 num 和 chr_num 不是__**同类型的变量**__！！！


## 3.关于变量的格式化：<br>

## 4.关于指针（pointer）变量：<br>
参考 C Prime Plus p.371：Pointers: A First Look，可以先看看。<br>

## 5.关于 & 操作符；
参考：C Prime Plus p.367：Finding Addresses: The & Operator
- 注意，加 & 的变量与 原来变量的关系，同时 要先了解下 pointer （指针）

One of the most important C concepts (and sometimes one of the most perplexing) is the
pointer , which is a variable used to store an address. You’ve already seen that scanf() uses
addresses for arguments. More generally, any C function that modifies a value in the calling
function without using a return value uses addresses. We’ll cover functions using addresses
next, beginning with the unary & operator. (The next chapter continues the exploration and
exploitation of pointers.)
The unary & operator gives you the address where a variable is stored.

## 6.关于字符转义：
比如：\n 加了反斜杠 \ 后面的 n 就不代表 n 了，而是与\一起组合成\n，表示 换行符了
## 7.关于function（函数）<br>
- 参考 C Prime Plus p.44:While You’re at It—Multiple Functions<br><br>
The butler() function appears three times in this program. The first appearance is in the proto-
type , which informs the compiler about the functions to be used. The second appearance is in
main() in the form of a function call . Finally, the program presents the function definition , which
is the source code for the function itself. Let’s look at each of these three appearances in turn.<br>

- 要试着用function来组织代码，比如，计算两个值的差，就可以写成一个function。可以试试。
- 比如：爸爸写的这个markdown文档，就是现学现用的，不用学。遇到问题Google下就可以了。（目前没有解决字体颜色得问题）
- 学得快和学得扎实，可以兼顾下。如果不能，那就先慢些学。等基础扎实了再快。
## 8.关于编码规范：
* 感觉编码不够规范，要看一下关于编码规范的知识。可以Google。

