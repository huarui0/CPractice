## 1.头文件：
* 加入头文件的目的：#include <string.h>
     * 因为要用到 string.h 中定义的库函数 strcmp,来比较输入的字符串 与 变量中保存的字符 是否一致，
       源文件中：strcmp(select,"Y")，这个函数是 在 string.h 定义的库文件中, 要获得这个源文件的说明，
       可以在google search中输入：c language string.h source code。（当然中文也可以：c语言，string.h 源代码）
       参考：1. [string.h的头文件源代码:Browse the source code of include/string.h](https://code.woboq.org/gtk/include/string.h.html)
             2.[C – string.h library functions](https://fresh2refresh.com/c-programming/c-function/string-h-library-functions/)
    
       有空的时候，在可以看懂的时候，可以仔细研究下这个源文件，就可以在需要的时候，用到其中的函数，不用自己去写了！比如下面这个函数：
       /* Copy SRC to DEST.  */
       extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
       应该就是将一个字符变量 copy 到 另一个字符变量。（猜测） 
        
