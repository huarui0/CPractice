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
       - 再比如： strlen() 应该就是计算字符的数量（长度）<br>
* 如何找到源文件的 定义（不是声明！！！）
     - 可以在google search中输入：strcmp source code，或者输入：c language strcmp source code。（当然中文也可以：c语言，strcmp 源代码）<br>
     -- [Browse the source code of glibc/string/strcmp.c(strcmp的源代码文件)](https://code.woboq.org/userspace/glibc/string/strcmp.c.html)<br>
         可以看看其中的说明：<br>
         /* Compare S1 and S2, returning less than, equal to or
         greater than zero if S1 is lexicographically less than,
         equal to or greater than S2.  */   <br>
         也就是比较两个字符串（string）的大小（长度）--不理解的话，打电话问爸爸，或老师。<br>
* 重要的标准库（standard library）function的例子（example）：
  - [C Programming/string.h/strcmp(注：这个是有源代码)](https://en.wikibooks.org/wiki/C_Programming/string.h/strcmp)<br>
  - [C Language: strcmp function(String Compare)](https://www.techonthenet.com/c_language/standard_library_functions/string_h/strcmp.php)<br>
* google search中site：
  - 源代码网站：
    - code.woboq.org 格式：google search：strcmp source code site:code.woboq.org
  - Example网站：
    - en.wikibooks.org <br> 
      - 格式1：google search：strcmp source code site:en.wikibooks.org <br>
      - 格式2：google search：strcmp sample site:en.wikibooks.org <br>
    - www.techonthenet.com <br>
* 书籍（可以去下载电子版）：A possible implementation is (P.J. Plauger, The Standard C Library, 1992):<br>

## 2.关于变量：
- 每一个变量都有一个存储变量值的地址，要搞清楚两者的关系，并知道如何获取 值和地址（也是一个值，是存储地址值）--不知会不会理解，不理解跟爸爸说。
- 变量必须先声明（declare），才可以赋值（assign），否则会报错。如果在声明得同时赋值，叫做变量得初始化（参考：CPrimePlus。p.63:Initializing a Variable.）
- 变量必须赋值，才能计算。
- 不同类型的变量，不能相加。比如：字符型的数值，就不能跟 数值型的数值相加，例子：int num; num = 3; char chr_num; chr_num = '5'; int sum; sum = num + chr_num; 这是错的，因为 num 和 chr_num 不是__**同类型的变量**__！！！

### 2.1 关于变量溢出
- 参考：C Prime Plus p.68：Integer Overflow（这个是整形数值溢出得例子，其他字符型，浮点型，也一样有溢出得情况，以后写程序的时候，要加入捕捉的机制）

## 3.关于变量的格式化：<br>

## 4.关于指针（pointer）变量：<br>
参考 C Prime Plus p.371：Pointers: A First Look，可以先看看。<br>

## 5.关于 & 操作符；
参考：C Prime Plus p.367：Finding Addresses: The & Operator
- 注意，加 & 的变量与 原来变量的关系，同时 要先了解下 pointer （指针）
- 红字：特别是变量的地址和变量的值（也就是地址存储的东西（值）），一定要搞得清清楚楚，明明白白。这样指针和 这个操作符 就 都不在话下了。<br> <br>
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
   - 重点的重点：编程的思想，就是要善于组织代码，先对功能（或需求）进行分析（模块化设计，也可以说，将功能分类，相同或相似的的归并成类），即，要达到什么目的（直白点说，就是，你要做什么），然后，归纳分类（高大上的说法，就是模块化编程），选择编码方式，也就是对代码进行组织。函数就是其中的一种最简单、具体的例子，之前爸爸跟你说的打印分割线的例子：还记得吗？分析：要能够控制 打印的字符 要能够控制（自定义）（即：要打印什么字符，通过输入、或定义值来确定），同时，一行要打印几个字符，也要能控制（自定义）（即：要打印多少个字符，通过输入来确定）。<br>
   
   - 关于函数的设计，首先就是分析要达到的目的，如计算年龄：
       - 我们需要的基本要素是什么（专业术语：输入是什么），包含两个值：出生年份，当前年份。因此；输入的值（也就是：输入参数）。
       - 我们要得到什么（也就是 计算的结果），要如何得到这个结果。得到结果得途径是什么。
          - 通过学习，我们知道，计算机（c语言）是通过内存中得地址来保存值的，所有，我们获取值的方式就可以是：<br>
             1.通过变量保存的值   
             2.通过访问变量的地址（传说中的指针保存的就是变量的地址）来获得该地址保存的值。   
          - 因此，我们设计函数的时候，就可以考虑 以下两种方式来得到计算得结果：   
             1.通过变量的值的方式来获得 计算的结果 （可以通过：函数的返回值 来得到。）<br>
             2.通过访问引用变量的地址的方式，来获得改地址的值，（注意：地址的值改变了，其他引用该地址的变量的值同时改变，一定要记得这个原则！！！）
             3.& 操作符（operator） 可以用来来获得地址得信息，因此，可以使用来获得函数结果的方法。   
- 比如：爸爸写的这个markdown文档，就是现学现用的，不用学。遇到问题Google下就可以了。（目前没有解决字体颜色得问题）
- 学得快和学得扎实，可以兼顾下。如果不能，那就先慢些学。等基础扎实了再快。
## 8.关于编码规范：
* 感觉编码不够规范，要看一下关于编码规范的知识。可以Google。

