# CPractice
<span id="beginpoint">这是用Html的标签设置的锚点</span>  
[点击跳转到id为jump的锚点](#jump)  
## git的文件上传和下载说明：
| 类型 | 语句 | 说明 |
| ------ | ------ | ------ |
| 上传 | git clone ****** | 下载的源位置 |
| 下载 | git pull | 上传的目的位置（网址） |

## Markdown 语法介绍：
备注：起的文件名扩展名必须是md，就可以用到md的语法组织文档：） <br>  
- 官网参考：  
    ⋅⋅1. [MarkDown - 语法说明](http://www.markdown.cn/)  
    ⋅⋅2. [Markdown Guide](https://www.markdownguide.org/)  
    ⋅⋅3. ![#f03c15](https://placehold.it/15/f03c15/000000?text=+)[GitHub Flavored Markdown Spec](https://github.github.com/gfm/)  
    ⋅⋅4. ![#f03c15](https://placehold.it/15/f03c15/000000?text=+)[Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)  
    ⋅⋅5. [Markdown Example - Markdown例子](https://en.wikipedia.org/wiki/Markdown#Example)<br>
- 其他参考：  
    ⋅⋅1. [Markdown 语法介绍](https://coding.net/help/doc/project/markdown.html)  
    ⋅⋅2. [Markdown基本语法](https://www.jianshu.com/p/191d1e21f7ed)  
    ⋅⋅3. [掌握这几种 Markdown 语法你就够了](https://learnku.com/laravel/t/621/you-will-be-able-to-master-these-markdown-grammars)
    
   - 标题
   - 列表
   - 强调
       - 斜体：
       - 加粗：
   - 表格
      * 语法说明
         + |、-、:之间的多余空格会被忽略，不影响布局。
         + 默认标题栏居中对齐，内容居左对齐。
         + -:表示内容和标题栏居右对齐，:-表示内容和标题栏居左对齐，:-:表示内容和标题栏居中对齐。
         + 内容和|之间的多余空格会被忽略，每行第一个|和最后一个|可以省略，-的数量至少有一个。
   - 代码的语法说明
      * C 语言代码的语法
       ```c
          // 这里加入代码语句。
       ```
      * 参考：
        - [Markdown code block syntax highlightning is broken for C and C++ #34525](https://github.com/Microsoft/vscode/issues/34525)
   - 链接
       + 链接外部URL 
          - 
       + 链接内部的URL
       + 文档内的链接和跳转（两种方式实现页内跳转）
          - 1.MarkDown实现
          - 2.html标签实现
             - a. 定义一个锚(id)：<span id="jump">跳转到的地方（id设置为jump）</span>
             - b. 使用markdown语法：[点击跳转](#beginpoint)
             - [使用Markdown语法增加的跳转到“文档开头”的链接](#CPractice) 注：因为标题就是锚点id，这里直接用标题名称了。
## 文件转换工具 - PanDoc
  * 说明：这个工具可以将文本文件 转换成 PDF 等等，功能似乎很强大。说不定哪天会用得到，收藏先。<br>
  * 参考：[Pandoc   a universal document converter](http://pandoc.org/MANUAL.html#divs-and-spans)


