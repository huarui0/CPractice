

          /* 注释的的方法： */
          // 这是注释，用双斜杠表示。只能写一行。多行的话，每一行都要加 //。
          /* 这是另一种注释，写在 /* 和 */ 中间， 可以写多行 */
          
          // 关于 头文件。要了解 每个头文件中包含的 库函数，以便需要的时候，能够信手拈来。
          * 有用的头文件及函数列表
            - stdio.h
```c
          #include <stdio.h>
          #include <math.h>

          int main(int argc, const char * argv[])
          {
              /* Define temporary variables */
              double value;
              double result;

              /* Assign the value we will find the sqrt of */
              value = 25;

              /* Calculate the square root of value */
              result = sqrt(value);

              /* Display the result of the calculation */
              printf("The Square Root of %f is %f\n", value, result);

              return 0;
          }
```
