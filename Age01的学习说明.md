## 1.头文件：
* 加入头文件的目的：#include <string.h>
     * 因为要用到 string.h 中定义的库函数 strcmp,来比较输入的字符串 与 变量中保存的字符 是否一致，
       源文件中：strcmp(select,"Y")，这个函数是 在 string.h 定义的库文件中
       要获得这个源文件的说明，可以在google search中输入：c language string.h source code。（当然中文也可以：c语言，string.h 源代码）
       参考：1. [string.h的头文件源代码:Browse the source code of include/string.h](https://code.woboq.org/gtk/include/string.h.html)
